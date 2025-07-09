#include <stdint.h>
#include <string.h>
#include "mex.h"


///
/// @brief Переупаковка из упакованного 12-битного потока (uint8_t) в массив uint16_t.
/// @param input Указатель на входной массив байт.
/// @param input_size Размер входного массива в байтах (должен быть кратен 3).
/// @param output Указатель на выходной массив слов (uint16_t).
/// @param endianness Порядок байт: 0 — big-endian, 1 — little-endian.
///
void repackaging(const uint8_t * input, size_t input_size, uint16_t * output, int endianness) {
    if (!input || !output || ((input_size % 3) != 0))
        return;

    const uint8_t * p = input;
    const size_t pixels_count = input_size * 2 / 3;

    switch(endianness) {
    case 0:
        /// BE:
        /// [AB][CD][EF] -> [0ABC][0DEF]
        ///  b0  b1  b2
        for (size_t i = 0; i < pixels_count; i += 2) {
            uint8_t b0 = *p++;
            uint8_t b1 = *p++;
            uint8_t b2 = *p++;
            output[i] = ((uint16_t) b0 << 4) | ((uint16_t) b1 >> 4);
            output[i + 1] = ((uint16_t) (b1 & 0x0F) << 8) | (uint16_t) b2;
        }
        break;
    case 1:
        /// LE2: (MIPI CSI-2 для RAW12)
        /// [BC][EF][DA] -> [0CBA][0FED]
        ///  b0  b1  b2
        for (size_t i = 0; i < pixels_count; i += 2) {
            uint8_t b0 = *p++;
            uint8_t b1 = *p++;
            uint8_t b2 = *p++;
            output[i]      = b0 | ((uint16_t)(b2 & 0x0F) << 8);
            output[i + 1]  = b1 | ((uint16_t)(b2 & 0xF0) << 4);
        }
        break;

    default:
        return;
    }
}


void mexFunction(int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[]) {
    /* Проверка количества входных аргументов */
    if (nrhs != 2) {
        mexErrMsgIdAndTxt("repackaging:nrhs",
                          "Требуется ровно 2 входных аргумента: repackaging(input, endianness)");
    }

    /* Проверка количества выходных аргументов */
    if (nlhs > 1) {
        mexErrMsgIdAndTxt("repackaging:nlhs",
                          "Функция возвращает только 1 выходной аргумент");
    }

    /* Проверка типа первого аргумента (входные данные) */
    if (!mxIsUint8(prhs[0])) {
        mexErrMsgIdAndTxt("repackaging:type",
                          "Первый аргумент должен быть массивом типа uint8");
    }

    if (mxIsComplex(prhs[0])) {
        mexErrMsgIdAndTxt("repackaging:complex",
                          "Входной массив должен быть вещественным (не комплексным)");
    }

    /* Проверка типа второго аргумента (endianness) */
    if (!mxIsDouble(prhs[1]) && !mxIsSingle(prhs[1]) && !mxIsInt32(prhs[1])) {
        mexErrMsgIdAndTxt("repackaging:type",
                          "Второй аргумент (endianness) должен быть числом");
    }

    if (mxIsComplex(prhs[1])) {
        mexErrMsgIdAndTxt("repackaging:complex",
                          "Параметр endianness должен быть вещественным числом");
    }

    if (mxGetNumberOfElements(prhs[1]) != 1) {
        mexErrMsgIdAndTxt("repackaging:scalar",
                          "Параметр endianness должен быть скаляром");
    }

    /* Получение входных данных */
    const uint8_t * input = (const uint8_t *) mxGetData(prhs[0]);
    size_t input_size = mxGetNumberOfElements(prhs[0]);

    /* Получение значения endianness */
    int endianness = (int) mxGetScalar(prhs[1]);

    /* Проверка корректности значения endianness */
    if (endianness != 0 && endianness != 1) {
        mexErrMsgIdAndTxt("repackaging:endianness",
                          "Параметр endianness должен быть 0 (big-endian) или 1 (little-endian/MIPI CSI-2)");
    }

    /* Проверка размера входных данных */
    if (input_size == 0) {
        mexErrMsgIdAndTxt("repackaging:empty",
                          "Входной массив не должен быть пустым");
    }

    if (input_size % 3 != 0) {
        mexErrMsgIdAndTxt("repackaging:size",
                          "Размер входного массива должен быть кратен 3 (текущий размер: %zu)",
                          input_size);
    }

    /* Вычисление количества выходных пикселей */
    size_t pixel_count = input_size * 2 / 3;

    /* Создание выходного массива
     * Используем 1xN массив для совместимости с различными применениями
     */
    plhs[0] = mxCreateNumericMatrix(1, pixel_count, mxUINT16_CLASS, mxREAL);

    if (!plhs[0]) {
        mexErrMsgIdAndTxt("repackaging:memory",
                          "Не удалось выделить память для выходного массива размером %zu элементов",
                          pixel_count);
    }

    /* Получение указателя на выходные данные */
    uint16_t * output = (uint16_t *) mxGetData(plhs[0]);

    /* Вызов функции переупаковки */
    repackaging(input, input_size, output, endianness);
}
