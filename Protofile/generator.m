path_dll_x64 = 'C:\Windows\System32\MVCAMSDK_X64.dll';
path_h_x64 = 'C:\Users\IKI-LAB533\Documents\MATLAB\HuaTeng-Vision-MATLAB-SDK\Headers\Matlab_Camera_SDK_x64.h';

SDK = 'HuaTengSDK';

if not(libisloaded(SDK))
    [notfound, warnings] = loadlibrary(path_dll_x64, path_h_x64, 'mfilename', 'Proto_Camera_SDK_x64', 'alias', SDK);
    unloadlibrary(SDK);
end

disp(warnings)

if not(libisloaded(SDK))
    [notfound, warnings] = loadlibrary(path_dll_x64, @Proto_Camera_SDK_x64, 'alias', SDK);
    % unloadlibrary(SDK);
end
disp(warnings)
libfunctionsview(SDK)

status = calllib(SDK, 'CameraSdkInit', 0)
device_count = calllib(SDK, 'CameraEnumerateDeviceEx')

device_info = libstruct('tSdkCameraDevInfo')
device_info.uInstance = uint32(7)

structs.tSdkCameraDevInfo.members=struct('acProductSeries', 'int8#32', 'acProductName', 'int8#32', 'acFriendlyName', 'int8#32', 'acLinkName', 'int8#32', 'acDriverVersion', 'int8#32', 'acSensorType', 'int8#32', 'acPortType', 'int8#32', 'acSn', 'int8#32', 'uInstance', 'uint32');