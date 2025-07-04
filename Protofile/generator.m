path_dll_x64 = 'C:\Windows\System32\MVCAMSDK_X64.dll';
path_h_x64 = 'C:\Users\IKI-LAB533\Documents\MATLAB\HuaTeng-Vision-MATLAB-SDK\Headers\Matlab_Camera_SDK_x64.h';

SDK = 'HuaTengSDK';

if not(libisloaded(SDK))
    [notfound, warnings] = loadlibrary(path_dll_x64, path_h_x64, 'mfilename', 'Proto_Camera_SDK_x64', 'alias', SDK);
    unloadlibrary(SDK);
end

disp(warnings)
