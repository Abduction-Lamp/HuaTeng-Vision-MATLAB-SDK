path_dll_x64 = 'C:\Windows\System32\MVCAMSDK_X64.dll';
path_h_x64   = 'C:\Users\IKI-LAB533\Documents\MATLAB\HuaTeng-Vision-MATLAB-SDK\Headers\Matlab_Camera_SDK_x64.h';

SDK = 'HuaTengSDK';  % Alias 

% Загружаем библиотеку из h файла и создаем protofile c описанием SDK
% Выгружаем библиотеку
if not(libisloaded(SDK))
    [notfound, warnings] = loadlibrary(path_dll_x64, path_h_x64, 'mfilename', 'Proto_Camera_SDK_x64', 'alias', SDK);
    disp(notfound);
    disp(warnings);
    libfunctionsview(SDK);
    unloadlibrary(SDK);
end

% Загружаем библиотеку из protofile
if not(libisloaded(SDK))
    [notfound, warnings] = loadlibrary(path_dll_x64, @Proto_Camera_SDK_x64, 'alias', SDK);
    disp(notfound);
    disp(warnings);
    libfunctionsview(SDK);
end

status = calllib(SDK, 'CameraSdkInit', 0)
device_count = calllib(SDK, 'CameraEnumerateDeviceEx')

device_info = libstruct('tSdkCameraDevInfo')
device_info.uInstance = uint32(1)
class(device_info.uInstance)

device_ptr = libpointer('tSdkCameraDevInfo')
values = device_ptr.Value;
values.uInstance = uint32(1);
class(values.uInstance);
