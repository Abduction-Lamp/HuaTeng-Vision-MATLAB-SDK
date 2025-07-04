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
libfunctions(SDK, '-full')

status = calllib(SDK, 'CameraSdkInit', 0)
device_count = calllib(SDK, 'CameraEnumerateDeviceEx')

device_info_2 = libstruct('tSdkCameraDevInfo')
class(device_info_2.uInstance)
device_info_2.uInstance = uint32(device_info_2.uInstance)
clear('device_info')
structs.tSdkCameraDevInfo.members=struct('acProductSeries', 'int8#32', 'acProductName', 'int8#32', 'acFriendlyName', 'int8#32', 'acLinkName', 'int8#32', 'acDriverVersion', 'int8#32', 'acSensorType', 'int8#32', 'acPortType', 'int8#32', 'acSn', 'int8#32', 'uInstance', 'uint32');


f = uint32(9)


device_info_3 = libpointer('tSdkCameraDevInfo')
device_info_4 = device_info_3.Value.uInstance = uint32(4)
class(device_info_3.Value.uInstance)

device_info_4.uInstance = uint32(4)