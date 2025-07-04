function output_struct = sdk_struct(struct_name)

arguments (Input)
    struct_name string {mustBeMember(struct_name, [])}
end

arguments (Output)
    outputArg1
    outputArg2
end

outputArg1 = inputArg1;
outputArg2 = inputArg2;
end


%%
structs.HWND__.members=struct('unused', 'int32');
structs.HDC__.members=struct('unused', 'int32');
structs.HBITMAP__.members=struct('unused', 'int32');

structs.tSdkRect.members=struct('iLeft', 'int32', 'iTop', 'int32', 'iWidth', 'int32', 'iHeight', 'int32');
structs.tSdkCameraDevInfo.members=struct('acProductSeries', 'int8#32', 'acProductName', 'int8#32', 'acFriendlyName', 'int8#32', 'acLinkName', 'int8#32', 'acDriverVersion', 'int8#32', 'acSensorType', 'int8#32', 'acPortType', 'int8#32', 'acSn', 'int8#32', 'uInstance', 'uint32');
structs.tSdkResolutionRange.members=struct('iHeightMax', 'int32', 'iHeightMin', 'int32', 'iWidthMax', 'int32', 'iWidthMin', 'int32', 'uSkipModeMask', 'uint32', 'uBinSumModeMask', 'uint32', 'uBinAverageModeMask', 'uint32', 'uResampleMask', 'uint32');
structs.tSdkImageResolution.members=struct('iIndex', 'int32', 'acDescription', 'int8#32', 'uBinSumMode', 'uint32', 'uBinAverageMode', 'uint32', 'uSkipMode', 'uint32', 'uResampleMask', 'uint32', 'iHOffsetFOV', 'int32', 'iVOffsetFOV', 'int32', 'iWidthFOV', 'int32', 'iHeightFOV', 'int32', 'iWidth', 'int32', 'iHeight', 'int32', 'iWidthZoomHd', 'int32', 'iHeightZoomHd', 'int32', 'iWidthZoomSw', 'int32', 'iHeightZoomSw', 'int32');
structs.tSdkColorTemperatureDes.members=struct('iIndex', 'int32', 'acDescription', 'int8#32');
structs.tSdkFrameSpeed.members=struct('iIndex', 'int32', 'acDescription', 'int8#32');
structs.tSdkExpose.members=struct('uiTargetMin', 'uint32', 'uiTargetMax', 'uint32', 'uiAnalogGainMin', 'uint32', 'uiAnalogGainMax', 'uint32', 'fAnalogGainStep', 'single', 'uiExposeTimeMin', 'uint32', 'uiExposeTimeMax', 'uint32');
structs.tSdkTrigger.members=struct('iIndex', 'int32', 'acDescription', 'int8#32');
structs.tSdkPackLength.members=struct('iIndex', 'int32', 'acDescription', 'int8#32', 'iPackSize', 'uint32');
structs.tSdkPresetLut.members=struct('iIndex', 'int32', 'acDescription', 'int8#32');
structs.tSdkAeAlgorithm.members=struct('iIndex', 'int32', 'acDescription', 'int8#32');
structs.tSdkBayerDecodeAlgorithm.members=struct('iIndex', 'int32', 'acDescription', 'int8#32');
structs.tSdkFrameStatistic.members=struct('iTotal', 'int32', 'iCapture', 'int32', 'iLost', 'int32');
structs.tSdkMediaType.members=struct('iIndex', 'int32', 'acDescription', 'int8#32', 'iMediaType', 'uint32');
structs.tGammaRange.members=struct('iMin', 'int32', 'iMax', 'int32');
structs.tContrastRange.members=struct('iMin', 'int32', 'iMax', 'int32');
structs.tRgbGainRange.members=struct('iRGainMin', 'int32', 'iRGainMax', 'int32', 'iGGainMin', 'int32', 'iGGainMax', 'int32', 'iBGainMin', 'int32', 'iBGainMax', 'int32');
structs.tSaturationRange.members=struct('iMin', 'int32', 'iMax', 'int32');
structs.tSharpnessRange.members=struct('iMin', 'int32', 'iMax', 'int32');
structs.tSdkIspCapacity.members=struct('bMonoSensor', 'int32', 'bWbOnce', 'int32', 'bAutoWb', 'int32', 'bAutoExposure', 'int32', 'bManualExposure', 'int32', 'bAntiFlick', 'int32', 'bDeviceIsp', 'int32', 'bForceUseDeviceIsp', 'int32', 'bZoomHD', 'int32');
structs.tSdkCameraCapbility.members=struct('pTriggerDesc', 'tSdkTriggerPtr', 'iTriggerDesc', 'int32', 'pImageSizeDesc', 'tSdkImageResolutionPtr', 'iImageSizeDesc', 'int32', 'pClrTempDesc', 'tSdkColorTemperatureDesPtr', 'iClrTempDesc', 'int32', 'pMediaTypeDesc', 'tSdkMediaTypePtr', 'iMediaTypdeDesc', 'int32', 'pFrameSpeedDesc', 'tSdkFrameSpeedPtr', 'iFrameSpeedDesc', 'int32', 'pPackLenDesc', 'tSdkPackLengthPtr', 'iPackLenDesc', 'int32', 'iOutputIoCounts', 'int32', 'iInputIoCounts', 'int32', 'pPresetLutDesc', 'tSdkPresetLutPtr', 'iPresetLut', 'int32', 'iUserDataMaxLen', 'int32', 'bParamInDevice', 'int32', 'pAeAlmSwDesc', 'tSdkAeAlgorithmPtr', 'iAeAlmSwDesc', 'int32', 'pAeAlmHdDesc', 'tSdkAeAlgorithmPtr', 'iAeAlmHdDesc', 'int32', 'pBayerDecAlmSwDesc', 'tSdkBayerDecodeAlgorithmPtr', 'iBayerDecAlmSwDesc', 'int32', 'pBayerDecAlmHdDesc', 'tSdkBayerDecodeAlgorithmPtr', 'iBayerDecAlmHdDesc', 'int32', 'sExposeDesc', 'tSdkExpose', 'sResolutionRange', 'tSdkResolutionRange', 'sRgbGainRange', 'tRgbGainRange', 'sSaturationRange', 'tSaturationRange', 'sGammaRange', 'tGammaRange', 'sContrastRange', 'tContrastRange', 'sSharpnessRange', 'tSharpnessRange', 'sIspCapacity', 'tSdkIspCapacity');
structs.tSdkFrameHead.members=struct('uiMediaType', 'uint32', 'uBytes', 'uint32', 'iWidth', 'int32', 'iHeight', 'int32', 'iWidthZoomSw', 'int32', 'iHeightZoomSw', 'int32', 'bIsTrigger', 'int32', 'uiTimeStamp', 'uint32', 'uiExpTime', 'uint32', 'fAnalogGain', 'single', 'iGamma', 'int32', 'iContrast', 'int32', 'iSaturation', 'int32', 'fRgain', 'single', 'fGgain', 'single', 'fBgain', 'single');
structs.sCameraFrame.members=struct('head', 'tSdkFrameHead', 'pBuffer', 'uint8Ptr');
structs.tSdkFrameEvent_.members=struct('uType', 'uint32', 'uStatus', 'uint32', 'uFrameID', 'uint32', 'uWidth', 'uint32', 'uHeight', 'uint32', 'uPixelFormat', 'uint32', 'TimeStampL', 'uint32', 'TimeStampH', 'uint32');
structs.tSdkGrabberStat.members=struct('Width', 'int32', 'Height', 'int32', 'Disp', 'int32', 'Capture', 'int32', 'Lost', 'int32', 'Error', 'int32', 'DispFps', 'single', 'CapFps', 'single');