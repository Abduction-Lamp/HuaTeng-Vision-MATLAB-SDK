#ifndef MATLAB_CAMERA_SDK_X64_H
#define MATLAB_CAMERA_SDK_X64_H

#ifdef __cplusplus
    extern "C" {
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     SDK :   Const and definition
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///
///     Caemra status code
///
#define CAMERA_STATUS_SUCCESS                        0      //  Successful
#define CAMERA_STATUS_FAILED                        -1      //  Operation failed
#define CAMERA_STATUS_INTERNAL_ERROR                -2      //  Internal error
#define CAMERA_STATUS_UNKNOW                        -3      //  Inknown error
#define CAMERA_STATUS_NOT_SUPPORTED                 -4      //  Does not support this feature
#define CAMERA_STATUS_NOT_INITIALIZED               -5      //  Incomplete initialization
#define CAMERA_STATUS_PARAMETER_INVALID             -6      //  Invalid argument
#define CAMERA_STATUS_PARAMETER_OUT_OF_BOUND        -7      //  Out of bounds of parameters
#define CAMERA_STATUS_UNENABLED                     -8      //  Not enabled
#define CAMERA_STATUS_USER_CANCEL                   -9      //  The user manually canceled, such as roi panel click cancel, return
#define CAMERA_STATUS_PATH_NOT_FOUND                -10     //  The corresponding path was not found in the registry
#define CAMERA_STATUS_SIZE_DISMATCH                 -11     //  The length of the obtained image data does not match the defined size
#define CAMERA_STATUS_TIME_OUT                      -12     //  Timeout error
#define CAMERA_STATUS_IO_ERROR                      -13     //  Hardware IO error
#define CAMERA_STATUS_COMM_ERROR                    -14     //  Communication error
#define CAMERA_STATUS_BUS_ERROR                     -15     //  Bus error
#define CAMERA_STATUS_NO_DEVICE_FOUND               -16     //  No device found
#define CAMERA_STATUS_NO_LOGIC_DEVICE_FOUND         -17     //  Logical device not found
#define CAMERA_STATUS_DEVICE_IS_OPENED              -18     //  The device is already open
#define CAMERA_STATUS_DEVICE_IS_CLOSED              -19     //  Device is off
#define CAMERA_STATUS_DEVICE_VEDIO_CLOSED           -20     //  Without opening the device video, when the video-related function is called, if the camera video is not open, the error is returned back.
#define CAMERA_STATUS_NO_MEMORY                     -21     //  Not enough system memory
#define CAMERA_STATUS_FILE_CREATE_FAILED            -22     //  Failed to create file
#define CAMERA_STATUS_FILE_INVALID                  -23     //  Invalid file format
#define CAMERA_STATUS_WRITE_PROTECTED               -24     //  Write protection, not write
#define CAMERA_STATUS_GRAB_FAILED                   -25     //  Data collection failed
#define CAMERA_STATUS_LOST_DATA                     -26     //  Loss of data, incomplete
#define CAMERA_STATUS_EOF_ERROR                     -27     //  No frame terminator received
#define CAMERA_STATUS_BUSY                          -28     //  Busy (last operation is still in progress), this operation cannot be performed
#define CAMERA_STATUS_WAIT                          -29     //  Need to wait (condition of operation is not established), can try again
#define CAMERA_STATUS_IN_PROCESS                    -30     //  Ingoing, has been operated
#define CAMERA_STATUS_IIC_ERROR                     -31     //  IIC transmission error
#define CAMERA_STATUS_SPI_ERROR                     -32     //  SPI transmission error
#define CAMERA_STATUS_USB_CONTROL_ERROR             -33     //  USB control transmission error
#define CAMERA_STATUS_USB_BULK_ERROR                -34     //  USB BULK transmission error
#define CAMERA_STATUS_SOCKET_INIT_ERROR             -35     //  Network Transport Suite Initialization Failed
#define CAMERA_STATUS_GIGE_FILTER_INIT_ERROR        -36     //  The webcam kernel filter driver failed to initialize. Please check if the driver is installed correctly or reinstall it.
#define CAMERA_STATUS_NET_SEND_ERROR                -37     //  Network data sending error
#define CAMERA_STATUS_DEVICE_LOST                   -38     //  Lost connection with webcam, heartbeat timeout
#define CAMERA_STATUS_DATA_RECV_LESS                -39     //  Received fewer bytes than requested
#define CAMERA_STATUS_FUNCTION_LOAD_FAILED          -40     //  Failed to load program from file
#define CAMERA_STATUS_CRITICAL_FILE_LOST            -41     //  The file necessary to run the program is missing.
#define CAMERA_STATUS_SENSOR_ID_DISMATCH            -42     //  The firmware and program do not match because the wrong firmware was downloaded.
#define CAMERA_STATUS_OUT_OF_RANGE                  -43     //  The parameter is out of valid range.
#define CAMERA_STATUS_REGISTRY_ERROR                -44     //  Setup registration error. Please reinstall the program, or run the installation directory Setup/Installer.exe
#define CAMERA_STATUS_ACCESS_DENY                   -45     //  No Access. When the specified camera has been occupied by another program, it will return to this state if you request to access the camera. (A camera cannot be accessed simultaneously by multiple programs)
#define CAMERA_STATUS_CAMERA_NEED_RESET             -46     //  It means that the camera needs to be reset before it can be used normally. At this time, please make the camera power off and restart, or restart the operating system, then it can be used normally.
#define CAMERA_STATUS_ISP_MOUDLE_NOT_INITIALIZED    -47     //  SP module is not initialized
#define CAMERA_STATUS_ISP_DATA_CRC_ERROR            -48     //  Data check error
#define CAMERA_STATUS_MV_TEST_FAILED                -49     //  Data test failed
#define CAMERA_STATUS_INTERNAL_ERR1                 -50	    //  Internal error 1
#define CAMERA_STATUS_U3V_NO_CONTROL_EP			    -51	    //  U3V control endpoint not found
#define CAMERA_STATUS_U3V_CONTROL_ERROR			    -52	    //  U3V control communication error
#define CAMERA_STATUS_INVALID_FRIENDLY_NAME		    -53	    //  Invalid device name, the name cannot contain the following characters (\/:*?"<>|")
#define CAMERA_STATUS_FORMAT_ERROR				    -54	    //  Format error
#define CAMERA_STATUS_PCIE_OPEN_ERROR			    -55     //  PCIE device open failed
#define CAMERA_STATUS_PCIE_COMM_ERROR			    -56     //  PCIE device communication failed
#define CAMERA_STATUS_PCIE_DDR_ERROR			    -57     //  PCIE DDR error
#define CAMERA_STATUS_IP_ERROR					    -58     //  IP error

///
///     CameraLink Acquisition Device
///
#define CAMERA_STATUS_CL_GRABBER_NOT_FOUND              -100    //  The specified frame grabber not found
#define CAMERA_STATUS_CL_GRABBER_NOT_ACCESSIBLE         -101    //  The specified frame grabber is busy
#define CAMERA_STATUS_CL_GRABBER_RES_NOT_FOUND          -102    //  The resource on the firmware of the frame grabber not found
#define CAMERA_STATUS_CL_GRABBER_RES_NOT_AVAILABLE      -103    //  Device resource is not available for the frame grabber
#define CAMERA_STATUS_CL_GRABBER_NOT_VALID              -104    //  Specified parameter is invalid for current device resource
#define CAMERA_STATUS_CL_GRABBER_PRM_ILLEGAL            -105    //  The setting value for parameter is an illegal value or this frame grabber not supported
#define CAMERA_STATUS_CL_GRABBER_SERIAL_OPEN_FAILED     -106    //  The serial port open failed
#define CAMERA_STATUS_CL_GRABBER_NOT_START_ACQ          -107    //  The specified frame grabber doesn't received a start acquisition signal.
#define CAMERA_STATUS_CL_GRABBER_NOT_SUPPORTED_FEATURE  -108    //  The frame grabber not supported this feature.
#define CAMERA_STATUS_CL_GRABBER_UNKNOWN_ERROR          -199    //  Unknown error occurred in frame grabber

///
///     AIA status code
///
/*#define CAMERA_AIA_SUCCESS                        0x0000 */
#define CAMERA_AIA_PACKET_RESEND                          0x0100    //  The frame needs to be retransmitted
#define CAMERA_AIA_NOT_IMPLEMENTED                        0x8001    //  Device does not support commands
#define CAMERA_AIA_INVALID_PARAMETER                      0x8002    //  Illegal command parameters
#define CAMERA_AIA_INVALID_ADDRESS                        0x8003    //  Inaccessible address
#define CAMERA_AIA_WRITE_PROTECT                          0x8004    //  The accessed object cannot be written
#define CAMERA_AIA_BAD_ALIGNMENT                          0x8005    //  Visited address is not aligned as required
#define CAMERA_AIA_ACCESS_DENIED                          0x8006    //  No access
#define CAMERA_AIA_BUSY                                   0x8007    //  Command is processing
#define CAMERA_AIA_DEPRECATED                             0x8008    //  0x8008-0x0800B 0x800F This instruction has been deprecated
#define CAMERA_AIA_PACKET_UNAVAILABLE                     0x800C    //  Invalid package
#define CAMERA_AIA_DATA_OVERRUN                           0x800D    //  Data overflow, usually more data than needed
#define CAMERA_AIA_INVALID_HEADER                         0x800E    //  Some areas in the packet header do not match the protocol
#define CAMERA_AIA_PACKET_NOT_YET_AVAILABLE               0x8010    //  Image packet data is not ready yet. It is mostly used in trigger mode. Application access timeout
#define CAMERA_AIA_PACKET_AND_PREV_REMOVED_FROM_MEMORY    0x8011    //  Subcontracts that require access no longer exist. Mostly used for data retransmission is not in the buffer
#define CAMERA_AIA_PACKET_REMOVED_FROM_MEMORY             0x8012    //  CAMERA_AIA_PACKET_AND_PREV_REMOVED_FROM_MEMORY
#define CAMERA_AIA_NO_REF_TIME                            0x0813    //  There is no reference clock source. When used for time synchronization commands
#define CAMERA_AIA_PACKET_TEMPORARILY_UNAVAILABLE         0x0814    //  Due to channel bandwidth issues, the current subcontracting is temporarily unavailable and needs to be accessed later
#define CAMERA_AIA_OVERFLOW                               0x0815    //  Data overflow on the device, usually the queue is full
#define CAMERA_AIA_ACTION_LATE                            0x0816    //  Command execution has exceeded valid specified time
#define CAMERA_AIA_ERROR                                  0x8FFF    //  Error

///
#define CAMERA_MV_SSR_COMM_ERROR        0xF000      //  SSR communication error
#define CAMERA_MV_SSR_TRAIN_ERROR       0xF001      //  SSR training error

///
#define EXT_TRIG_MASK_GRR_SHUTTER       1	//  Shutter supports GRR mode
#define EXT_TRIG_MASK_LEVEL_MODE        2	//  Support level trigger
#define EXT_TRIG_MASK_DOUBLE_EDGE       4	//  Supports bilateral triggering
#define EXT_TRIG_MASK_BUFFERED_DELAY    8	//  Supports signal delayed activation


///     IMAGE FORMAT DEFINE
#define CAMERA_MEDIA_TYPE_MONO                           0x01000000
#define CAMERA_MEDIA_TYPE_RGB                            0x02000000
#define CAMERA_MEDIA_TYPE_COLOR                          0x02000000
#define CAMERA_MEDIA_TYPE_CUSTOM                         0x80000000
#define CAMERA_MEDIA_TYPE_COLOR_MASK                     0xFF000000
#define CAMERA_MEDIA_TYPE_OCCUPY1BIT                     0x00010000
#define CAMERA_MEDIA_TYPE_OCCUPY2BIT                     0x00020000
#define CAMERA_MEDIA_TYPE_OCCUPY4BIT                     0x00040000
#define CAMERA_MEDIA_TYPE_OCCUPY8BIT                     0x00080000
#define CAMERA_MEDIA_TYPE_OCCUPY10BIT                    0x000A0000
#define CAMERA_MEDIA_TYPE_OCCUPY12BIT                    0x000C0000
#define CAMERA_MEDIA_TYPE_OCCUPY16BIT                    0x00100000
#define CAMERA_MEDIA_TYPE_OCCUPY24BIT                    0x00180000
#define CAMERA_MEDIA_TYPE_OCCUPY32BIT                    0x00200000
#define CAMERA_MEDIA_TYPE_OCCUPY36BIT                    0x00240000
#define CAMERA_MEDIA_TYPE_OCCUPY48BIT                    0x00300000
#define CAMERA_MEDIA_TYPE_OCCUPY64BIT					 0x00400000

#define CAMERA_MEDIA_TYPE_EFFECTIVE_PIXEL_SIZE_MASK      0x00FF0000
#define CAMERA_MEDIA_TYPE_EFFECTIVE_PIXEL_SIZE_SHIFT     16

#define CAMERA_MEDIA_TYPE_PIXEL_SIZE(type)				 (((type) & CAMERA_MEDIA_TYPE_EFFECTIVE_PIXEL_SIZE_MASK) >> CAMERA_MEDIA_TYPE_EFFECTIVE_PIXEL_SIZE_SHIFT)

#define CAMERA_MEDIA_TYPE_ID_MASK                        0x0000FFFF
#define CAMERA_MEDIA_TYPE_COUNT                          0x46



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     SDK :   Definition macros
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define MASK_2X2_HD     ( 1 << 0  )
#define MASK_3X3_HD     ( 1 << 1  )
#define MASK_4X4_HD     ( 1 << 2  )
#define MASK_5X5_HD     ( 1 << 3  )
#define MASK_6X6_HD     ( 1 << 4  )
#define MASK_7X7_HD     ( 1 << 5  )
#define MASK_8X8_HD     ( 1 << 6  )
#define MASK_9X9_HD     ( 1 << 7  )
#define MASK_10X10_HD   ( 1 << 8  )
#define MASK_11X11_HD   ( 1 << 9  )
#define MASK_12X12_HD   ( 1 << 10 )
#define MASK_13X13_HD   ( 1 << 11 )
#define MASK_14X14_HD   ( 1 << 12 )
#define MASK_15X15_HD   ( 1 << 13 )
#define MASK_16X16_HD   ( 1 << 14 )
#define MASK_17X17_HD   ( 1 << 15 )
#define MASK_2X2_SW     ( 1 << 16 )
#define MASK_3X3_SW     ( 1 << 17 )
#define MASK_4X4_SW     ( 1 << 18 )
#define MASK_5X5_SW     ( 1 << 19 )
#define MASK_6X6_SW     ( 1 << 20 )
#define MASK_7X7_SW     ( 1 << 21 )
#define MASK_8X8_SW     ( 1 << 22 )
#define MASK_9X9_SW     ( 1 << 23 )
#define MASK_10X10_SW   ( 1 << 24 )
#define MASK_11X11_SW   ( 1 << 25 )
#define MASK_12X12_SW   ( 1 << 26 )
#define MASK_13X13_SW   ( 1 << 27 )
#define MASK_14X14_SW   ( 1 << 28 )
#define MASK_15X15_SW   ( 1 << 29 )
#define MASK_16X16_SW   ( 1 << 30 )
#define MASK_17X17_SW   ( 1 << 31 )


///     Mono
#define CAMERA_MEDIA_TYPE_MONO1P                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY1BIT  | 0x0037)
#define CAMERA_MEDIA_TYPE_MONO2P                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY2BIT  | 0x0038)
#define CAMERA_MEDIA_TYPE_MONO4P                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY4BIT  | 0x0039)
#define CAMERA_MEDIA_TYPE_MONO8                     (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY8BIT  | 0x0001)
#define CAMERA_MEDIA_TYPE_MONO8S                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY8BIT  | 0x0002)
#define CAMERA_MEDIA_TYPE_MONO10                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0003)
#define CAMERA_MEDIA_TYPE_MONO10_PACKED             (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0004)
#define CAMERA_MEDIA_TYPE_MONO12                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0005)
#define CAMERA_MEDIA_TYPE_MONO12_PACKED             (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0006)
#define CAMERA_MEDIA_TYPE_MONO14                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0025)
#define CAMERA_MEDIA_TYPE_MONO16                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0007)

///     Bayer
#define CAMERA_MEDIA_TYPE_BAYGR8                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY8BIT | 0x0008)
#define CAMERA_MEDIA_TYPE_BAYRG8                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY8BIT | 0x0009)
#define CAMERA_MEDIA_TYPE_BAYGB8                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY8BIT | 0x000A)
#define CAMERA_MEDIA_TYPE_BAYBG8                    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY8BIT | 0x000B)

#define CAMERA_MEDIA_TYPE_BAYGR10_MIPI              (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY10BIT | 0x0026)
#define CAMERA_MEDIA_TYPE_BAYRG10_MIPI              (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY10BIT | 0x0027)
#define CAMERA_MEDIA_TYPE_BAYGB10_MIPI              (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY10BIT | 0x0028)
#define CAMERA_MEDIA_TYPE_BAYBG10_MIPI              (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY10BIT | 0x0029)

#define CAMERA_MEDIA_TYPE_BAYGR10                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x000C)
#define CAMERA_MEDIA_TYPE_BAYRG10                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x000D)
#define CAMERA_MEDIA_TYPE_BAYGB10                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x000E)
#define CAMERA_MEDIA_TYPE_BAYBG10                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x000F)

#define CAMERA_MEDIA_TYPE_BAYGR12                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0010)
#define CAMERA_MEDIA_TYPE_BAYRG12                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0011)
#define CAMERA_MEDIA_TYPE_BAYGB12                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0012)
#define CAMERA_MEDIA_TYPE_BAYBG12                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0013)

#define CAMERA_MEDIA_TYPE_BAYGR10_PACKED            (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0026)
#define CAMERA_MEDIA_TYPE_BAYRG10_PACKED            (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0027)
#define CAMERA_MEDIA_TYPE_BAYGB10_PACKED            (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0028)
#define CAMERA_MEDIA_TYPE_BAYBG10_PACKED            (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0029)

#define CAMERA_MEDIA_TYPE_BAYGR12_PACKED            (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x002A)
#define CAMERA_MEDIA_TYPE_BAYRG12_PACKED            (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x002B)
#define CAMERA_MEDIA_TYPE_BAYGB12_PACKED            (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x002C)
#define CAMERA_MEDIA_TYPE_BAYBG12_PACKED            (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x002D)

#define CAMERA_MEDIA_TYPE_BAYGR16                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x002E)
#define CAMERA_MEDIA_TYPE_BAYRG16                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x002F)
#define CAMERA_MEDIA_TYPE_BAYGB16                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0030)
#define CAMERA_MEDIA_TYPE_BAYBG16                   (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0031)

///     RGB
#define CAMERA_MEDIA_TYPE_RGB8                      (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY24BIT | 0x0014)
#define CAMERA_MEDIA_TYPE_BGR8                      (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY24BIT | 0x0015)
#define CAMERA_MEDIA_TYPE_RGBA8                     (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY32BIT | 0x0016)
#define CAMERA_MEDIA_TYPE_BGRA8                     (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY32BIT | 0x0017)
#define CAMERA_MEDIA_TYPE_RGB10                     (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY48BIT | 0x0018)
#define CAMERA_MEDIA_TYPE_BGR10                     (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY48BIT | 0x0019)
#define CAMERA_MEDIA_TYPE_RGB12                     (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY48BIT | 0x001A)
#define CAMERA_MEDIA_TYPE_BGR12                     (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY48BIT | 0x001B)
#define CAMERA_MEDIA_TYPE_RGB16                     (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY48BIT | 0x0033)
#define CAMERA_MEDIA_TYPE_BGR16                     (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY48BIT | 0x004B)
#define CAMERA_MEDIA_TYPE_RGBA16                    (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY64BIT | 0x0064)
#define CAMERA_MEDIA_TYPE_BGRA16                    (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY64BIT | 0x0051)
#define CAMERA_MEDIA_TYPE_RGB10V1_PACKED            (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY32BIT | 0x001C)
#define CAMERA_MEDIA_TYPE_RGB10P32                  (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY32BIT | 0x001D)
#define CAMERA_MEDIA_TYPE_RGB12V1_PACKED            (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY36BIT | 0X0034)
#define CAMERA_MEDIA_TYPE_RGB565P                   (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0035)
#define CAMERA_MEDIA_TYPE_BGR565P                   (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0X0036)

///     YUV and YCbCr
#define CAMERA_MEDIA_TYPE_YUV411_8_UYYVYY           (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x001E)
#define CAMERA_MEDIA_TYPE_YUV422_8_UYVY             (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x001F)
#define CAMERA_MEDIA_TYPE_YUV422_8                  (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0032)
#define CAMERA_MEDIA_TYPE_YUV8_UYV                  (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY24BIT | 0x0020)
#define CAMERA_MEDIA_TYPE_YCBCR8_CBYCR              (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY24BIT | 0x003A)

//CAMERA_MEDIA_TYPE_YCBCR422_8 : YYYYCbCrCbCr

#define CAMERA_MEDIA_TYPE_YCBCR422_8                (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x003B)
#define CAMERA_MEDIA_TYPE_YCBCR422_8_CBYCRY         (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0043)
#define CAMERA_MEDIA_TYPE_YCBCR411_8_CBYYCRYY       (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x003C)
#define CAMERA_MEDIA_TYPE_YCBCR601_8_CBYCR          (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY24BIT | 0x003D)
#define CAMERA_MEDIA_TYPE_YCBCR601_422_8            (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x003E)
#define CAMERA_MEDIA_TYPE_YCBCR601_422_8_CBYCRY     (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0044)
#define CAMERA_MEDIA_TYPE_YCBCR601_411_8_CBYYCRYY   (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x003F)
#define CAMERA_MEDIA_TYPE_YCBCR709_8_CBYCR          (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY24BIT | 0x0040)
#define CAMERA_MEDIA_TYPE_YCBCR709_422_8            (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0041)
#define CAMERA_MEDIA_TYPE_YCBCR709_422_8_CBYCRY     (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY16BIT | 0x0045)
#define CAMERA_MEDIA_TYPE_YCBCR709_411_8_CBYYCRYY   (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0042)

///     RGB Planar
#define CAMERA_MEDIA_TYPE_RGB8_PLANAR               (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY24BIT | 0x0021)
#define CAMERA_MEDIA_TYPE_RGB10_PLANAR              (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY48BIT | 0x0022)
#define CAMERA_MEDIA_TYPE_RGB12_PLANAR              (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY48BIT | 0x0023)
#define CAMERA_MEDIA_TYPE_RGB16_PLANAR              (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY48BIT | 0x0024)

///     12bit packed bayer
#define CAMERA_MEDIA_TYPE_BAYGR12_PACKED_MV         (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0060)
#define CAMERA_MEDIA_TYPE_BAYRG12_PACKED_MV         (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0061)
#define CAMERA_MEDIA_TYPE_BAYGB12_PACKED_MV         (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0062)
#define CAMERA_MEDIA_TYPE_BAYBG12_PACKED_MV         (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0063)

///     12bit packed monochome
#define CAMERA_MEDIA_TYPE_MONO12_PACKED_MV		    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0064)
#define CAMERA_MEDIA_TYPE_YUV420P_MV			    (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0065)

///     planar YUV 4:2:0, 12bpp, 1 plane for Y and 1 plane for the UV components, which are interleaved (first byte V and the following byte U)
#define CAMERA_MEDIA_TYPE_YUV_NV21_MV			    (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x0066)

///     H264 H265
#define CAMERA_MEDIA_TYPE_H264_MV				    (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY8BIT | 0x0067)
#define CAMERA_MEDIA_TYPE_H265_MV				    (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY8BIT | 0x0068)

///     JPEG
#define CAMERA_MEDIA_TYPE_JPEG_MV				    (CAMERA_MEDIA_TYPE_COLOR | CAMERA_MEDIA_TYPE_OCCUPY8BIT | 0x0069)

///     CXP 12bit packed
#define CAMERA_MEDIA_TYPE_BAYGR12_PACKED_CXP        (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x006A)
#define CAMERA_MEDIA_TYPE_BAYRG12_PACKED_CXP        (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x006B)
#define CAMERA_MEDIA_TYPE_BAYGB12_PACKED_CXP        (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x006C)
#define CAMERA_MEDIA_TYPE_BAYBG12_PACKED_CXP        (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x006D)
#define CAMERA_MEDIA_TYPE_MONO12_PACKED_CXP		    (CAMERA_MEDIA_TYPE_MONO | CAMERA_MEDIA_TYPE_OCCUPY12BIT | 0x006E)



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Definition basic windows types without including windows.h
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef MAX_PATH
    #define MAX_PATH 256
#endif

#ifndef FALSE
    #define FALSE 0
#endif

#ifndef TRUE
    #define TRUE 1
#endif

#ifndef NULL
    #define NULL 0
#endif


#define WINAPI      __stdcall   // __cdecl


typedef int                 INT;
typedef unsigned int        UINT;
typedef unsigned short      USHORT;
typedef float               FLOAT;
typedef unsigned short      WORD;
typedef unsigned long       DWORD;
typedef int                 BOOL;
typedef unsigned char       BYTE;
typedef void *              PVOID;
typedef void *              LPVOID;


#define MAX_CROSS_LINE 9


struct HWND__ {
    int unused;
};
typedef struct HWND__ * HWND;

struct HDC__ {
    int unused;
}; 
typedef struct HDC__ * HDC;

struct HBITMAP__ {
    int unused;
}; 
typedef struct HBITMAP__ * HBITMAP;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


typedef int CameraHandle;
typedef int CameraSdkStatus;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     SDK :   Enumerations
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// Image lookup table transformation
typedef enum {
    LUTMODE_PARAM_GEN = 0,      //  Dynamically generate LUT tables by adjusting parameters
    LUTMODE_PRESET    = 1,      //  Use a preset LUT table
    LUTMODE_USER_DEF  = 2	    //  Use a user-defined LUT table
} emSdkLutMode;

/// Camera video flow control
///     Normal preview, the captured image is displayed. (If the camera is in trigger mode, it will wait for the arrival of the trigger frame)
typedef enum {
    RUNMODE_PLAY  = 0,
    RUNMODE_PAUSE = 1,          //  Pause, will pause the camera's image output, and will not capture the image
    RUNMODE_STOP  = 2           //  Stop the camera. Camera is in stop mode after deinitialization
} emSdkRunMode;

/// How to display the internal display interface of the SDK
typedef enum {
    DISPLAYMODE_SCALE     = 0,  //  Zoom the display mode, zoom to the size of the display control
    DISPLAYMODE_REAL      = 1,  //  1:1 display mode, when the image size is larger than the size of the display control, only the local display
	DISPLAYMODE_2X        = 2,	//  Zoom in 2X
	DISPLAYMODE_4X        = 3,	//  Zoom in 4X
	DISPLAYMODE_8X        = 4,  //  Zoom in 8X
	DISPLAYMODE_16X       = 5,  //  Zoom in 16X
	DISPLAYMODE_SCALE_FIT = 6   //  Stretch zoom to fill the display area
} emSdkDisplayMode;

/// Recording status
typedef enum  {
    RECORD_STOP  = 0,       //  Stop
    RECORD_START = 1,       //  Start
    RECORD_PAUSE = 2        //  Pause
} emSdkRecordMode;

/// Image mirroring operation
typedef enum {
    MIRROR_DIRECTION_HORIZONTAL = 0,    //  Horizontal mirroring
    MIRROR_DIRECTION_VERTICAL   = 1     //  Vertical mirroring
} emSdkMirrorDirection;

/// Rotation of the image
typedef enum {
	ROTATE_DIRECTION_0   = 0,   //  Do not rotate
	ROTATE_DIRECTION_90  = 1,   //  Counterclockwise 90 degrees
	ROTATE_DIRECTION_180 = 2,   //  Counterclockwise 180 degrees
	ROTATE_DIRECTION_270 = 3,   //  Counterclockwise 270 degrees
} emSdkRotateDirection;

/// Camera video frame rate
typedef enum {
    FRAME_SPEED_LOW    = 0,     //  Low Speed
    FRAME_SPEED_NORMAL = 1,     //  Normal Speed
    FRAME_SPEED_HIGH   = 2,     //  High Speed
    FRAME_SPEED_SUPER  = 3      //  Super Speed
} emSdkFrameSpeed;

/// Save file format type
typedef enum {
    FILE_JPG		= 0x1,	    //  JPG
    FILE_BMP		= 0x2,	    //  BMP 24bit
    FILE_RAW		= 0x4,	    //  RAW
    FILE_PNG		= 0x8,	    //  PNG 24bit
    FILE_BMP_8BIT	= 0x10,	    //  BMP 8bit
    FILE_PNG_8BIT	= 0x20,	    //  PNG 8bit
	FILE_RAW_16BIT	= 0x40,	    //  RAW 16bit
	FILE_TIFF		= 0x80,	    //  TIFF
	FILE_TIFF_16BIT	= 0x100,    //  TIFF 16bit
} emSdkFileType;

/// Image Sensor Operation Mode in Camera
typedef enum  {
    CONTINUATION           = 0, //  Continuous acquisition mode
	SOFT_TRIGGER           = 1, //  Software trigger mode. After the software sends the instruction, the sensor starts to capture the image of the specified frame number. After the acquisition is completed, the output is stopped.
	EXTERNAL_TRIGGER       = 2, //  In the hardware trigger mode, when receiving an external signal, the sensor starts to capture the image of the specified frame number. After the acquisition is completed, the output is stopped.
	ROTARYENC_TRIGGER      = 3, //  Encoder trigger mode (only for line scan cameras)
	ROTARYENC_COND_TRIGGER = 4, //  Encoder condition trigger mode (only for line scan cameras)
} emSdkSnapMode;

/// Anti-strobe frequency at auto exposure
typedef enum {
    LIGHT_FREQUENCY_50HZ = 0,   //  50HZ, the general lighting is 50HZ
    LIGHT_FREQUENCY_60HZ = 1    //  60HZ, mainly refers to the monitor
} emSdkLightFrequency;

/// The camera configuration parameters are divided into groups A, B, C, and D for preservation.
typedef enum {
	PARAMETER_TEAM_DEFAULT = 0xff,  //  Default parameters
    PARAMETER_TEAM_A       = 0,	    //  Parameters A
    PARAMETER_TEAM_B       = 1,	    //  Parameters B
    PARAMETER_TEAM_C       = 2,	    //  Parameters C
    PARAMETER_TEAM_D       = 3	    //  Parameters D
} emSdkParameterTeam;

/// Camera parameter loading mode
///     You can use the above several ways to load parameters according to your own environment. For example, with
///     MV-U300 as an example, you want multiple cameras of this model to share 4 sets of parameters on your computer.
///     Use the PARAM_MODE_BY_MODEL method; if you want one or more of the MV-U300s
///     Use your own parameter file and the rest of the MV-U300 use the same parameter file again, then use
///     PARAM_MODE_BY_NAME way; if you want each MV-U300 to use a different parameter file, then
///     Use the PARAM_MODE_BY_SN method.
///     The parameter file exists in the \\Camera\\Configs directory of the installation directory, with a config extension file.
typedef enum {
	PARAM_MODE_BY_MODEL  = 0,   //  Load parameters from a file based on the camera model name, such as the MV-U300
	                            //  All ABCD four-group parameter files are shared by all cameras of the same model. Modifying a camera's parameter file will affect the entire camera model parameter loading

	PARAM_MODE_BY_NAME   = 1,	//  Load parameters from a file based on device nickname (tSdkCameraDevInfo.acFriendlyName), such as MV-U300, which can be customized
	                            //  All cameras with the same device name share the four ABCD parameter files.
	                            //  By default, when only one model of a camera is connected to the computer,
                                //  The device name is the same, and you want a camera to load
                                //  different parameter files, you can modify the device name
                                //  to have it load the specified parameter file

	PARAM_MODE_BY_SN     = 2,	//  The parameters are loaded from the file according to the unique serial number of the device. The serial number is already written to the device at the factory and each camera has a different serial number.
	                            //  The camera loads ABCD four sets of parameter files according to their unique serial number.
                                //  The serial number has been fixed in the camera at the factory, the serial number of each camera
                                //  is not the same. In this way, the parameter files for each camera are independent

	PARAM_MODE_IN_DEVICE = 3    //  Load parameters from the device's solid-state memory. Not all models support reading and writing parameters from the camera, as determined by tSdkCameraCapbility.bParamInDevice
} emSdkParameterMode;

/// SDK generated camera configuration page mask values
typedef enum  {
    PROP_SHEET_INDEX_EXPOSURE       = 0,    //  Exposure Settings
    PROP_SHEET_INDEX_ISP_COLOR      = 1,    //  Color Matrix Settings
    PROP_SHEET_INDEX_ISP_LUT        = 2,    //  LUT setting
    PROP_SHEET_INDEX_ISP_SHAPE      = 3,    //  Transform settings
    PROP_SHEET_INDEX_VIDEO_FORMAT   = 4,    //  Formatting
    PROP_SHEET_INDEX_RESOLUTION     = 5,    //  Resolution setting
    PROP_SHEET_INDEX_IO_CTRL        = 6,    //  IO control
    PROP_SHEET_INDEX_TRIGGER_SET    = 7,    //  Trigger setting
    PROP_SHEET_INDEX_OVERLAY        = 8,    //  Crosshair
    PROP_SHEET_INDEX_DEVICE_INFO    = 9,    //  Device Information
    PROP_SHEET_INDEX_OPTIONS_I      = 0,    //  Options I
    PROP_SHEET_INDEX_MULTI_EXPOSURE = 11,	//  Multi exposure
    PROP_SHEET_INDEX_SPECIAL        = 12,   //  Special settings
    PROP_SHEET_INDEX_GIGE           = 13,   //  GIGE settings
    PROP_SHEET_INDEX_GF_SETTING_I   = 14,   //  GF Settings I
    ROP_SHEET_INDEX_GF_SETTING_II   = 15,   //  GF Settings II
    PROP_SHEET_INDEX_NEW_ISP_COLOR  = 16,   //  WB Settings
    PROP_SHEET_INDEX_MULTIROI_SET   = 17,   //  MultiROI
    PROP_SHEET_INDEX_FOCUS          = 18    //  Focus settings
} emSdkPropSheetMask;

/// SDK callback camera configuration page callback message type
typedef enum {
    SHEET_MSG_LOAD_PARAM_DEFAULT  = 0,    //  After the parameter is restored to the default, the message is triggered
    SHEET_MSG_LOAD_PARAM_GROUP    = 1,    //  Load the specified parameter group and trigger the message
    SHEET_MSG_LOAD_PARAM_FROMFILE = 2,    //  Fires the message after loading parameters from the specified file
    SHEET_MSG_SAVE_PARAM_GROUP    = 3     //  Trigger this message when the current parameter group is saved
} emSdkPropSheetMsg;

/// Visualize the type of reference window
typedef enum  {
    REF_WIN_AUTO_EXPOSURE = 0,  //  Automatic exposure window
    REF_WIN_WHITE_BALANCE = 1   //  White balance window
} emSdkRefWinType;

/// Visualize the type of reference window
typedef enum  {
    RES_MODE_PREVIEW  = 0,      //  Preview
    RES_MODE_SNAPSHOT = 1 	    //  Snapshot
}emSdkResolutionMode;

/// White balance color temperature mode
typedef enum {
    CT_MODE_AUTO     = 0,       //  Automatically recognize color temperature
    CT_MODE_PRESET   = 1,       //  Use the specified preset color temperature
    CT_MODE_USER_DEF = 2	    //  Custom color temperature (gain and matrix)
} emSdkClrTmpMode;

/// LUT color channel
typedef enum {
    LUT_CHANNEL_ALL   = 0,	    //  R, B, G simultaneous adjustment of three channels
    LUT_CHANNEL_RED   = 1,	    //  Red channel
    LUT_CHANNEL_GREEN = 2,	    //  Green channel
    LUT_CHANNEL_BLUE  = 3 	    //  Blue channel
} emSdkLutChannel;

/// ISP processing unit
typedef enum {
    ISP_PROCESSSOR_PC     = 0,  //  Use software ISP module of PC
    ISP_PROCESSSOR_DEVICE = 1   //  Use the camera's own hardware ISP module
} emSdkIspProcessor;

/// Strobe signal control method
typedef enum {
    STROBE_SYNC_WITH_TRIG_AUTO    = 0,    //  Synchronized with the trigger signal, the STROBE signal is automatically generated when the camera performs exposure. At this point, the effective polarity can be set (CameraSetStrobePolarity).
    STROBE_SYNC_WITH_TRIG_MANUAL  = 1,    //  Synchronized with the trigger signal. After the trigger, STROBE is delayed by the specified time (CameraSetStrobeDelayTime) and continues for the specified time (CameraSetStrobePulseWidth). The effective polarity can be set (CameraSetStrobePolarity).
    STROBE_ALWAYS_HIGH            = 2,    //  Always high, ignoring other settings of the STROBE signal
    STROBE_ALWAYS_LOW             = 3     //  Always low, ignoring other settings of the STROBE signal
} emStrobeControl;

/// Signal types triggered by hardware
typedef enum {
	EXT_TRIG_LEADING_EDGE   = 0,    // Rising edge trigger, default is this method
	EXT_TRIG_TRAILING_EDGE  = 1,    // Falling edge trigger
	EXT_TRIG_HIGH_LEVEL     = 2,    // The high level triggers, the level width determines the exposure time, only some models of cameras support level triggering.
	EXT_TRIG_LOW_LEVEL      = 3,    // Low level trigger
	EXT_TRIG_DOUBLE_EDGE    = 4     // Bilateral trigger
} emExtTrigSignal;

///  Shutter mode when triggered by hardware
typedef enum {
    EXT_TRIG_EXP_STANDARD   = 0,    //  Standard mode, the default is this mode.
    EXT_TRIG_EXP_GRR        = 1     //  Global reset mode, part of the rolling shutter CMOS model camera supports this method, with the external mechanical shutter, you can achieve the effect of a global shutter, suitable for shooting high-speed objects
} emExtTrigShutterMode;

/// Sharpness assessment algorithm
typedef enum {
	EVALUATE_DEFINITION_DEVIATION   = 0,    //  Variance method
	EVALUATE_DEFINITION_SMD         = 1,    //  Adjacent Pixel Gray Difference Method
	EVALUATE_DEFINITION_GRADIENT    = 2,    //  Gradient statistics
	EVALUATE_DEFINITION_SOBEL       = 3,    //  Sobel
	EVALUATE_DEFINITION_ROBERT      = 4,    //  Robert
	EVALUATE_DEFINITION_LAPLACE     = 5,    //  Laplace
	EVALUATE_DEFINITION_ALG_MAX     = 6     //  The number of algorithms
} emEvaluateDefinitionAlgorith;

/// Text output flag
typedef enum {
	CAMERA_DT_VCENTER		= 0x1,      //  Vertically centered
	CAMERA_DT_BOTTOM		= 0x2,      //  Bottom alignment
	CAMERA_DT_HCENTER		= 0x4,      //  Horizontally centered
	CAMERA_DT_RIGHT			= 0x8,      //  Right alignment
	CAMERA_DT_SINGLELINE	= 0x10,     //  Single-line display
	CAMERA_DT_ALPHA_BLEND	= 0x20,     //  Alpha blend
	CAMERA_DT_ANTI_ALIASING = 0x40      //  Anti-aliasing
} emCameraDrawTextFlags;

/// GPIO Mode
typedef enum {
	IOMODE_TRIG_INPUT       = 0,    //  Trigger input
	IOMODE_STROBE_OUTPUT    = 1,    //  Strobe output
	IOMODE_GP_INPUT         = 2,    //  Universal input
	IOMODE_GP_OUTPUT        = 3,    //  Universal output
	IOMODE_PWM_OUTPUT       = 4,    //  PWM output
	IOMODE_ROTARYENC_INPUT  = 5     //  Rotary input
} emCameraGPIOMode;

///  GPIO Format
typedef enum {
	IOFORMAT_SINGLE     = 0,        //  Single ended
	IOFORMAT_RS422      = 1,        //  Differential RS422
	IOFORMAT_RS422_TERM = 2,		//  Differential RS422 and Termination Enable
	IOFORMAT_OCEP       = 3         //  Opticalcoupler equipment
} emCameraGPIOFormat;

/// Get Image priority
typedef enum {
	CAMERA_GET_IMAGE_PRIORITY_OLDEST = 0,   //  Get the oldest frame in the cache
	CAMERA_GET_IMAGE_PRIORITY_NEWEST = 1,   //  Get the latest frame in the cache (older than this frame will be discarded)
	CAMERA_GET_IMAGE_PRIORITY_NEXT   = 2	//  All frames in the cache are discarded, and if the camera is now being exposed or transmitted it will be immediately interrupted, waiting to receive the next frame
	                                        //  Some models do not support this feature. For cameras that do not support this feature this flag is equivalent to CAMERA_GET_IMAGE_PRIORITY_OLDEST
} emCameraGetImagePriority;

/// Soft trigger function flag
typedef enum {
	CAMERA_ST_CLEAR_BUFFER_BEFORE   = 0x1,	//  Empty camera-cached frames before soft triggering
} emCameraSoftTriggerExFlags;



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     SDK :   Data structures and pointers to these structures
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/// Rect
///     tSdkRect
///     tSdkRectPtr
typedef struct  {
	int     iLeft;
    int     iTop;
	int     iWidth;
    int     iHeight;
} tSdkRect;
typedef tSdkRect * tSdkRectPtr;


/// Camera device information
///     tSdkCameraDevInfo
///     tSdkCameraDevInfoPtr
typedef struct {
    char    acProductSeries[32];    //  Product Series
    char    acProductName[32];      //  Product name
    char    acFriendlyName[32];     //  Product nicknames, users can customize the nickname, saved in the camera, used to distinguish between multiple cameras at the same time, you can use the CameraSetFriendlyName interface to change the nickname, the device takes effect after restart
    char    acLinkName[32];		    // Kernel symbolic connection name, internal use
    char    acDriverVersion[32];	// Driver version
    char    acSensorType[32];		// Sensor type
    char    acPortType[32];		    // Interface Type
    char    acSn[32];				// Product unique serial number
    UINT    uInstance;				// The example index number of this model camera on this computer, used to distinguish the same model multiple cameras
} tSdkCameraDevInfo;
typedef tSdkCameraDevInfo * tSdkCameraDevInfoPtr;


/// Camera resolution setting range, can be used for component UI
///     tSdkResolutionRange
///     tSdkResolutionRangePtr
typedef struct {
    INT     iHeightMax;			    //  Maximum image height
    INT     iHeightMin;             //  Image minimum height
    INT     iWidthMax;              //  The maximum width of the image
    INT     iWidthMin;              //  The minimum width of the image
    UINT    uSkipModeMask;          //  The SKIP mode mask, which is 0, indicates that SKIP is not supported. Bit0 is 1 to indicate that SKIP 2x2 is supported; bit1 is 1 to indicate that SKIP 3x3 is supported ...
    UINT    uBinSumModeMask;        //  The BIN (sum) pattern mask, which is 0, indicates that BIN is not supported. Bit0 is 1, indicating that BIN 2x2 is supported; bit1 is 1, indicating that BIN 3x3 is supported ...
    UINT    uBinAverageModeMask;    //  The BIN (mean value) mode mask, which is 0, indicates that BIN is not supported. Bit0 is 1, indicating that BIN 2x2 is supported; bit1 is 1, indicating that BIN 3x3 is supported ...
    UINT    uResampleMask;          //  Hardware resampling mask
} tSdkResolutionRange;
typedef tSdkResolutionRange * tSdkResolutionRangePtr;


/// Camera resolution description
///     tSdkImageResolution
///     tSdkImageResolutionPtr
typedef struct {
    INT     iIndex;				//  Index number, [0, N] indicates the preset resolution (N is the maximum number of preset resolutions, generally no more than 20), OXFF indicates custom resolution (ROI)
    char    acDescription[32];  //  The description of the resolution. This information is valid only when the resolution is preset. Custom resolution ignores this information
    UINT    uBinSumMode;		//  The BIN (sum) mode cannot exceed the tSdkResolutionRange.uBinSumModeMask
    UINT    uBinAverageMode;    //  BIN (average) mode, the range cannot exceed tSdkResolutionRange.uBinAverageModeMask
    UINT    uSkipMode;			//  Whether the SKIP size is 0 indicates that the SKIP mode is disabled and the range cannot exceed the tSdkResolutionRange.uSkipModeMask
    UINT    uResampleMask;		//  Hardware resampling mask
    INT     iHOffsetFOV;        //  The horizontal offset of the acquisition field of view relative to the top left corner of the Sensor's largest field of view
    INT     iVOffsetFOV;        //  The vertical offset of the acquisition field of view relative to the upper left corner of the Sensor's largest field of view
    INT     iWidthFOV;			//  The width of the field of view
    INT     iHeightFOV;         //  The height of the field of view
    INT     iWidth;             //  The width of the final output image of the camera
    INT     iHeight;            //  The height of the final output image of the camera
    INT     iWidthZoomHd;       //  The width of the hardware zoom, resolution that does not require this operation, this variable is set to 0
    INT     iHeightZoomHd;      //  The height of the hardware zoom, resolution that does not require this operation, this variable is set to 0
    INT     iWidthZoomSw;       //  The width of the software's zoom, which does not require the resolution of this operation, this variable is set to 0
    INT     iHeightZoomSw;      //  The height of the software's zoom, which does not require the resolution of this operation, this variable is set to 0
} tSdkImageResolution;
typedef tSdkImageResolution * tSdkImageResolutionPtr;


/// Camera white balance color temperature mode description information
///     tSdkColorTemperatureDes
///     tSdkColorTemperatureDesPtr
typedef struct {
    INT     iIndex;			    //  Mode index number
    char    acDescription[32];  //  Description
} tSdkColorTemperatureDes;
typedef tSdkColorTemperatureDes * tSdkColorTemperatureDesPtr;


/// Camera frame rate description information
///     tSdkFrameSpeed
///     tSdkFrameSpeedPtr
typedef struct {
    INT     iIndex;             //  Frame rate index number, generally 0 corresponds to low speed mode, 1 corresponds to normal mode, 2 corresponds to high speed mode
    char    acDescription[32];  //  Description
} tSdkFrameSpeed;
typedef tSdkFrameSpeed * tSdkFrameSpeedPtr;


/// Camera exposure function scope definition (see tSdkCameraCapbility.sExposeDesc)
///     tSdkExpose
///     tSdkExposePtr
typedef struct {
    UINT    uiTargetMin;		//  Auto exposure brightness target minimum
    UINT    uiTargetMax;		//  Auto exposure brightness target maximum
    UINT    uiAnalogGainMin;	//  The minimum value of the analog gain in fAnalog defined in GainStep
    UINT    uiAnalogGainMax;	//  The maximum value of the analog gain in fAnalog defined in GainStep
    float   fAnalogGainStep;	//  Each increase in analog gain corresponds to an increased amplification factor. For example, uiAnalogGainMin is generally 16 and fAnalogGainStep is generally 0.125, so the minimum magnification is 16*0.125 = 2 times
    UINT    uiExposeTimeMin;	//  The minimum exposure time in manual mode, unit: line. According to CameraGetExposureLineTime can get a row of corresponding time (microseconds) to get the entire frame exposure time
    UINT    uiExposeTimeMax;    //  Maximum exposure time in manual mode, unit: line
} tSdkExpose;
typedef tSdkExpose * tSdkExposePtr;


/// Trigger mode description
///     tSdkTrigger
///     tSdkTriggerPtr
typedef struct {
    INT     iIndex;             //  Mode index number
    char    acDescription[32];  //  Description information of this mode
} tSdkTrigger;
typedef tSdkTrigger * tSdkTriggerPtr;


/// Transmission packet size description (valid for some web cameras)
///     tSdkPackLength
///     tSdkPackLengthPtr
typedef struct {
    INT     iIndex;             //  Packet size index number
    char    acDescription[32];  //  Corresponding description information
    UINT    iPackSize;          //  Packet size
} tSdkPackLength;
typedef tSdkPackLength * tSdkPackLengthPtr;


/// Preset LUT Table Description
///     tSdkPresetLut
///     tSdkPresetLutPtr
typedef struct {
    INT     iIndex;             //  Index
    char    acDescription[32];  //  Description
} tSdkPresetLut;
typedef tSdkPresetLut * tSdkPresetLutPtr;


/// AE algorithm description
///     tSdkAeAlgorithm
///     tSdkAeAlgorithmPtr
typedef struct {
    INT     iIndex;             //  Index
    char    acDescription[32];  //  Description
} tSdkAeAlgorithm;
typedef tSdkAeAlgorithm * tSdkAeAlgorithmPtr;


/// RAW to RGB algorithm description
///     tSdkBayerDecodeAlgorithm
///     tSdkBayerDecodeAlgorithmPtr
typedef struct {
    INT     iIndex;             //  Index
    char    acDescription[32];  //  Description
} tSdkBayerDecodeAlgorithm;
typedef tSdkBayerDecodeAlgorithm * tSdkBayerDecodeAlgorithmPtr;


/// Frame statistics
///     tSdkFrameStatistic
///     tSdkFrameStatisticPtr
typedef struct {
    INT     iTotal;     //  The current total number of frames collected (including error frames)
    INT     iCapture;   //  The number of valid frames currently collected
    INT     iLost;      //  Current number of dropped frames
} tSdkFrameStatistic;
typedef tSdkFrameStatistic * tSdkFrameStatisticPtr;


/// Camera output image data format
///     tSdkMediaType
///     tSdkMediaTypePtr
typedef struct {
    INT     iIndex;             //  Format type number
    char    acDescription[32];  //  Description
    UINT    iMediaType;         //  Corresponding image format encoding, such as CAMERA_MEDIA_TYPE_BAYGR8
} tSdkMediaType;
typedef tSdkMediaType * tSdkMediaTypePtr;


///  Gamma setting range
///     tGammaRange
///     tGammaRangePtr
typedef struct {
    INT     iMin;   //  Min
    INT     iMax;   //  Max
} tGammaRange;
typedef tGammaRange * tGammaRangePtr;


/// Contrast setting range
///     tContrastRange
///     tContrastRangePtr
typedef struct {
    INT     iMin;
    INT     iMax;
} tContrastRange;
typedef tContrastRange * tContrastRangePtr;


/// RGB three channel digital gain setting range
///     tRgbGainRange
///     tRgbGainRangePtr
typedef struct {
    INT     iRGainMin;  //  Red gain minimum
    INT     iRGainMax;  //  Red gain maximum
    INT     iGGainMin;  //  Green gain minimum
    INT     iGGainMax;  //  Green gain maximum
    INT     iBGainMin;  //  Blue gain minimum
    INT     iBGainMax;  //  Blue gain maximum
} tRgbGainRange;
typedef tRgbGainRange * tRgbGainRangePtr;


/// Saturation setting range
///     tSaturationRange
///     tSaturationRangePtr
typedef struct {
    INT     iMin;
    INT     iMax;
} tSaturationRange;
typedef tSaturationRange * tSaturationRangePtr;


/// Sharpening setting range
///     tSharpnessRange
///     tSharpnessRangePtr
typedef struct {
    INT     iMin;
    INT     iMax;
} tSharpnessRange;
typedef tSharpnessRange * tSharpnessRangePtr;


/// ISP module enable information
///     tSdkIspCapacity
///     tSdkIspCapacityPtr
typedef struct {
    BOOL    bMonoSensor;        //  Indicates whether this model is a black-and-white camera. If it is a black-and-white camera, color-related functions cannot be adjusted.
    BOOL    bWbOnce;            //  Indicates whether this model camera supports manual white balance function
    BOOL    bAutoWb;            //  Indicates whether this model camera supports automatic white balance function
    BOOL    bAutoExposure;      //  Indicates whether this model camera supports auto exposure function
    BOOL    bManualExposure;    //  Indicates whether this model camera supports manual exposure function
    BOOL    bAntiFlick;         //  Indicates whether this model camera supports anti-strobe function
    BOOL    bDeviceIsp;         //  Indicates whether this model camera supports hardware ISP function
    BOOL    bForceUseDeviceIsp; //  When both bDeviceIsp and bForceUseDeviceIsp are TRUE, this means that only the hardware ISP is forced and cannot be cancelled.
    BOOL    bZoomHD;            //  Whether the camera hardware supports image scaling output (can only be reduced).
} tSdkIspCapacity;
typedef tSdkIspCapacity * tSdkIspCapacityPtr;


/// Define integrated device description information that can be used to dynamically build UI
/// call CameraGetCapability to get this structure
///     tSdkCameraCapbility
///     tSdkCameraCapbilityPtr
typedef struct {
    tSdkTrigger * pTriggerDesc;                     //  Trigger mode
    INT iTriggerDesc;                               //  The number of trigger modes, that is, the size of the pTriggerDesc array

    tSdkImageResolution * pImageSizeDesc;           //  Preset resolution
    INT iImageSizeDesc;                             //  The number of preset resolutions, that is, the size of the pImageSizeDesc array

    tSdkColorTemperatureDes * pClrTempDesc;         //  Preset color temperature for white balance
    INT iClrTempDesc;                               //  The number of preset color temperatures

    tSdkMediaType * pMediaTypeDesc;                 //  Camera output image format
    INT iMediaTypdeDesc;                            //  The number of types of camera output image formats, that is, the size of the pMediaTypeDesc array.

    tSdkFrameSpeed * pFrameSpeedDesc;               //  Adjustable frame rate type, normal high speed and super three speed settings on the corresponding interface
    INT iFrameSpeedDesc;                            //  The number of frame rate types that can be adjusted, that is, the size of the pFrameSpeedDesc array.

    tSdkPackLength * pPackLenDesc;                  //  Transmission packet length, generally used for network equipment
    INT iPackLenDesc;                               //  The number of transmission packetization lengths available for selection, which is the size of the pPackLenDesc array.

    INT iOutputIoCounts;                            //  Number of programmable output IOs
    INT iInputIoCounts;                             //  Number of programmable input IOs

    tSdkPresetLut * pPresetLutDesc;                 //  Camera preset LUT table
    INT iPresetLut;                                 //  The number of LUT tables preset by the camera, that is, the size of the pPresetLutDesc array

    INT  iUserDataMaxLen;                           //  Indicates the maximum length in the camera used to save the user data area. 0 means no.
    BOOL bParamInDevice;                            //  Indicates whether the device supports reading and writing parameter groups from the device. 1 is supported, 0 is not supported.

    tSdkAeAlgorithm * pAeAlmSwDesc;                 //  Software auto exposure algorithm description
    int iAeAlmSwDesc;                               //  Software automatic exposure algorithm number

    tSdkAeAlgorithm * pAeAlmHdDesc;                 //  Hardware auto exposure algorithm description, NULL means hardware auto exposure is not supported
    int iAeAlmHdDesc;                               //  Number of hardware auto exposure algorithms, 0 means hardware auto exposure is not supported

    tSdkBayerDecodeAlgorithm * pBayerDecAlmSwDesc;  //  Algorithm Description of Software Bayer Conversion to RGB Data
    int iBayerDecAlmSwDesc;                         //  The number of algorithms that Bayer converts to RGB data

    tSdkBayerDecodeAlgorithm * pBayerDecAlmHdDesc;  //  Hardware Bayer converts to RGB data algorithm description, is not supported for NULL representation
    int iBayerDecAlmHdDesc;                         //  The number of algorithms that hardware Bayer converts to RGB data, 0 means not supported

    tSdkExpose              sExposeDesc;            //  Exposure range value
    tSdkResolutionRange     sResolutionRange;       //  Resolution range description
    tRgbGainRange           sRgbGainRange;          //  Image digital gain range description
    tSaturationRange        sSaturationRange;       //  Saturation range description
    tGammaRange             sGammaRange;            //  Gamma range description
    tContrastRange          sContrastRange;         //  Contrast range description
    tSharpnessRange         sSharpnessRange;        //  Sharpening range description
    tSdkIspCapacity         sIspCapacity;           //  ISP capability description
} tSdkCameraCapbility;
typedef tSdkCameraCapbility * tSdkCameraCapbilityPtr;


/// Image frame header information
///     tSdkFrameHead
///     tSdkFrameHeadPtr
typedef struct {
    UINT    uiMediaType;    //  Image Format
    UINT    uBytes;         //  Total bytes
    INT     iWidth;         //  The width of the image, after calling the image processing function, the variable may be dynamically modified to indicate the image size after processing
    INT     iHeight;        //  The height of the image, after calling the image processing function, the variable may be dynamically modified to indicate the image size after processing
    INT     iWidthZoomSw;   //  The width of the software zoom, which does not require software cropping. This variable is set to 0.
    INT     iHeightZoomSw;  //  Software zoom height, no software cropped image is required. This variable is set to 0.
    BOOL    bIsTrigger;     //  Is trigger
    UINT    uiTimeStamp;    //  The frame acquisition time, in units of 0.1 milliseconds
    UINT    uiExpTime;      //  Exposure of the current image in microseconds us
    float   fAnalogGain;    //  The current image's analog gain multiplier
    INT     iGamma;         //  The gamma setting value of the frame image is valid only when the LUT mode is a dynamic parameter generation, and is -1 in other modes.
    INT     iContrast;      //  The contrast setting value of the frame image is only valid when the LUT mode is generated by the dynamic parameter, and is -1 in other modes.
    INT     iSaturation;    //  The saturation value of the frame image, which is meaningless for a black and white camera, is 0
    float   fRgain;         //  The red digital gain multiple of this frame image processing is meaningless for a black and white camera and is 1
    float   fGgain;         //  The green digital gain multiplier for this frame image processing, meaning no significance for black and white cameras, is 1
    float   fBgain;         //  The blue digital gain multiplier for this frame image processing, meaning no significance for black and white cameras, is 1
} tSdkFrameHead;
typedef tSdkFrameHead * tSdkFrameHeadPtr;


/// Image frame description
///     tSdkFrame
///     tSdkFramePtr
typedef struct sCameraFrame {
    tSdkFrameHead   head;       //  Frame Head
    BYTE *          pBuffer;    //  Image Data
} tSdkFrame;
typedef tSdkFrame * tSdkFramePtr;


/// Frame Event
///     tSdkFrameEvent_
///     tSdkFrameEvent
///     tSdkFrameEventPtr
typedef struct tSdkFrameEvent_ {
	UINT    uType;          //  Event type (1 : frame start; 2 : frame end)
	UINT	uStatus;		//  Status (0 : success; non-zero : error)
	UINT 	uFrameID;		//  Frame ID
	UINT	uWidth;			//  Width
	UINT	uHeight;		//  Height
	UINT	uPixelFormat;	//  Image Format
	UINT	TimeStampL;		//  Lower 32 bits of timestamp
	UINT	TimeStampH;		//  High 32 bits of timestamp
} tSdkFrameEvent;
typedef tSdkFrameEvent * tSdkFrameEventPtr;


/// Grabber statistics
///     tSdkGrabberStat
///     tSdkGrabberStatPtr
typedef struct {
	int     Width;      //  Frame image width
	int     Height;     //  Frame image height
	int     Disp;       //  Display frame number
	int     Capture;    //  The number of valid frames collected
	int     Lost;       //  The number of dropped frames
	int     Error;      //  The number of error frames
	float   DispFps;    //  Display frame rate
	float   CapFps;     //  Capture frame rate
} tSdkGrabberStat;
typedef tSdkGrabberStat * tSdkGrabberStatPtr;




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     SDK :   Callbacks Flow
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/// Callback function definition for image capture
///
typedef void (WINAPI * CAMERA_SNAP_PROC)(
    CameraHandle    hCamera,
    BYTE *          pFrameBuffer,
    tSdkFrameHead * pFrameHead,
    PVOID           pContext
);


/// Camera configuration page message callback function definition
///
typedef void (WINAPI * CAMERA_PAGE_MSG_PROC)(
    CameraHandle    hCamera,
    UINT            MSG,
    UINT            uParam,
    PVOID           pContext
);


/// Camera connection status callback
/// \param [in] hCamera Camera handle
/// \param [in] MSG message, 0: Camera disconnected 1: Camera connection restored
/// \param [in] uParam Additional Information
/// \param [in] pContext user data
/// \return None
/// USB camera uParam value:
///     Undefined
/// Network camera uParam value:
///     When MSG=0: Undefined
///     When MSG=1:
///         0: The last dropped reason, network communication failed
///         1: The last dropped reason, the camera lost power
///
typedef void (WINAPI * CAMERA_CONNECTION_STATUS_CALLBACK)(
    CameraHandle    hCamera,
    UINT            MSG,
    UINT            uParam,
    PVOID           pContext
);


/// Callback function definition for frame event
///
typedef void (WINAPI * CAMERA_FRAME_EVENT_CALLBACK)(
    CameraHandle        hCamera,
    tSdkFrameEvent *    pEvent,
    PVOID               pContext
);


/// Callback function definition for image capture
typedef void (__stdcall * pfnCameraGrabberFrameCallback)(
    void *              Grabber,
	BYTE *              pFrameBuffer,
	tSdkFrameHead *     pFrameHead,
	void *              Context
);


/// Frame listening function definition
/// \param [in] Grabber
/// \param [in] Phase image processing phase
/// \param [in] pFrameBuffer frame data
/// \param [in] pFrameHead Frame Header
/// \param [in] Context user data
/// \return 0: Grabber will discard this frame and end all subsequent processing stages for this frame; 1: Continue to the next stage of processing
///
/// Whenever Grabber captures a frame of image, it will call FrameListener in turn in 3 stages.
/// Phase 0: RAW data processing, pFrameBuffer= Raw data
/// Phase 1: Screenshot pre-processing, pFrameBuffer=RGB data
/// Phase 2: Display preprocessing, pFrameBuffer=RGB data
/// In particular, this callback will be called when the camera is disconnected.
/// At this time, Phase = -1, pFrameBuffer = NULL, and pFrameHead = NULL
///
typedef int (__stdcall * pfnCameraGrabberFrameListener)(
	void *          Grabber,
	int             Phase,
	BYTE *          pFrameBuffer,
	tSdkFrameHead * pFrameHead,
	void *          Context
);


/// Asynchronous snapshot callback function definition
/// \warning Image needs to call CameraImage_Destroy to release
///
typedef void (__stdcall *pfnCameraGrabberSaveImageComplete)(
	void *          Grabber,
	void *          Image,
	CameraSdkStatus Status,
	void *          Context
);




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     SDK :   Calls
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///     CameraSdkInit
///
/// \brief Initialize the SDK language. This function only needs to be called once during the entire process run.
/// \param [in] iLanguageSel The language used to select the prompt information and interface of the SDK. 0: English, 1: Chinese.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSdkInit(
    int     iLanguageSel
);


///     CameraSetSysOption
///
/// \brief Configure system options (usually required before CameraInit turns on the camera)
/// \param [in] optionName option name ("NumBuffers", "3")
/// \param [in] value setting value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetSysOption(
	char const *    optionName,
	char const *    value
);


///     CameraGetSysOption
///
/// \brief Get Configure system options
/// \param [in] optionName option name
/// \param [in] return value buffer, must enusre that there is enough size.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetSysOption(
	char const *    optionName,
	char *          value
);


///     CameraEnumerateDevice
///
/// \brief Enumerate devices and establish a list of devices
/// \param [out] pCameraList Device list array pointer
/// \param [inout] piNums The number of pointers to the device, the number of elements passed to the pCameraList array at the time of the call. When the function returns, the number of devices actually found is saved.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \warning piNums The value pointed to must be initialized and does not exceed the number of pCameraList array elements, otherwise it may cause memory overflow
/// \note The list of returned camera information will be sorted according to acFriendlyName. For example, after changing the two cameras to the names of "Camera1" and "Camera2," the camera named "Camera1" will be in front, and the camera named "Camera2" will be behind the row.
///
CameraSdkStatus __stdcall CameraEnumerateDevice(
    tSdkCameraDevInfo * pCameraList,
    INT *               piNums
);


///     CameraEnumerateDeviceEx
///
/// \brief Enumerate devices and create a list of devices. Before calling @link #CameraInitEx @endlink, this function must be called to enumerate the device
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
INT __stdcall CameraEnumerateDeviceEx(
    void
);


///     CameraIsOpened
///
/// \brief Check if the device has been opened
/// \param [in] pCameraInfo Device enumeration information structure pointer, obtained by @link #CameraEnumerateDevice @endlink
/// \param [out] pOpened The device's status pointer returns whether the device is turned on. TRUE is on and FALSE is idle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraIsOpened(
  tSdkCameraDevInfo *   pCameraInfo,
  BOOL *                pOpened
);


///     CameraInit
///
/// \brief The camera is initialized. After successful initialization, other camera-related operation interfaces can be called
/// \param [in] pCameraInfo Device enumeration information structure pointer, obtained by @link #CameraEnumerateDevice @endlink
/// \param [in] emParamLoadMode The parameter loading method used when the camera is initialized. -1 means to use the parameter loading method from the last exit. Other values are defined in @link #emSdkParameterMode @endlink.
/// \param [in] emTeam Parameter group used during initialization. -1 means to load the parameter group from the last exit
/// \param [out] pCameraHandle The handle pointer of the camera, after successful initialization, returns the camera's effective handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraInit(
    tSdkCameraDevInfo * pCameraInfo,
    int                 emParamLoadMode,
    int                 emTeam,
    CameraHandle *      pCameraHandle
);


///     CameraInitEx
///
/// \brief The camera is initialized. After successful initialization, other camera-related operation interfaces can be called
/// \param [in] iDeviceIndex The camera's index number, @link #CameraEnumerateDeviceEx @endlink returns the number of cameras
/// \param [in] emParamLoadMode The parameter loading method used when the camera is initialized. -1 means to use the parameter loading method from the last exit. Other values are defined in @link #emSdkParameterMode @endlink.
/// \param [in] emTeam Parameter group used during initialization. -1 means to load the parameter group from the last exit
/// \param [out] pCameraHandle The handle pointer of the camera, after successful initialization, returns the camera's effective handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraInitEx(
    int             iDeviceIndex,
    int             emParamLoadMode,
    int             emTeam,
    CameraHandle *  pCameraHandle
);


///     CameraInitEx2
///
/// \brief The camera is initialized. After successful initialization, other camera-related operation interfaces can be called.
/// \param [in] CameraName Camera friendly name.@link #tSdkCameraDevInfo.acFriendlyName @endlink
/// \param [out] pCameraHandle The handle pointer of the camera, after successful initialization, returns the camera's effective handle.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraInitEx2(
	char *          CameraName,
	CameraHandle *  pCameraHandle
);


///     CameraSetCallbackFunction
///
/// \brief Sets the image capture's callback function. When a new frame of image data is captured, the callback function pointed to by pCallBack is called
/// \param [in] hCamera Camera handle
/// \param [in] pCallBack Callback function pointer
/// \param [in] pContext Additional parameters of the callback function, which will be passed in when the callback function is called, can be NULL. Use additional information when used with multiple cameras.
/// \param [out] pCallbackOld Returns the previously set callback function. Can be NULL
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetCallbackFunction(
    CameraHandle        hCamera,
    CAMERA_SNAP_PROC    pCallBack,
    PVOID               pContext,
    CAMERA_SNAP_PROC *  pCallbackOld
);


///     CameraUnInit
///
/// \brief The camera is deinitialized. Release resources
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraUnInit(
    CameraHandle    hCamera
);


///     CameraGetInformation
///
/// \brief Get camera description information
/// \param [in] hCamera Camera handle
/// \param [out] pbuffer Pointer to the camera description information pointer
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetInformation(
    CameraHandle    hCamera,
    char **         pbuffer
);


///     CameraImageProcess
///
/// \brief The obtained raw camera output image data is processed to superimpose processing effects such as saturation, color gain and correction, noise reduction, etc. Finally, image data of RGB888 format is obtained.
/// \param [in] hCamera Camera handle
/// \param [in] pbyIn The buffer address of the input image data cannot be NULL
/// \param [out] pbyOut The buffer address of the image output after processing cannot be NULL
/// \param [inout] pFrInfo After inputting the frame header information of the image, the image format uiMediaType in the frame header information will be changed after the processing is completed.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImageProcess(
    CameraHandle    hCamera,
    BYTE *          pbyIn,
    BYTE *          pbyOut,
    tSdkFrameHead * pFrInfo
);


///     CameraImageProcessEx
///
/// \brief The obtained raw camera output image data is processed to superimpose processing effects such as saturation, color gain and correction, noise reduction, etc. Finally, image data of RGB888 format is obtained.
/// \param [in] hCamera Camera handle
/// \param [in] pbyIn The buffer address of the input image data cannot be NULL
/// \param [out] pbyOut The buffer address of the image output after processing cannot be NULL
/// \param [inout] pFrInfo After inputting the frame header information of the image, the image format uiMediaType in the frame header information will be changed after the processing is completed.
/// \param [in] uOutFormat The output format of the image after processing. It may be one of CAMERA_MEDIA_TYPE_MONO8,CAMERA_MEDIA_TYPE_RGB,CAMERA_MEDIA_TYPE_RGBA8
/// \param [in] uReserved Reservation parameters must be set to 0
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImageProcessEx(
    CameraHandle    hCamera,
    BYTE *          pbyIn,
    BYTE *          pbyOut,
    tSdkFrameHead * pFrInfo,
    UINT            uOutFormat,
    UINT            uReserved
);


///     CameraDisplayInit
///
/// \brief Initialize the display module inside the SDK. The function must be called before calling @link #CameraDisplayRGB24 @endlink. If you use your own method for image display (do not call CameraDisplayRGB24) during secondary development, you do not need to call this function.
/// \param [in] hCamera Camera handle
/// \param [in] hWndDisplay The handle of the display window, typically the m_hWnd member of the window
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraDisplayInit(
    CameraHandle    hCamera,
    HWND            hWndDisplay
);


///     CameraDisplayRGB24
///
/// \brief Display the image. You must call @link #CameraDisplayInit @endlink before you can call this function
/// \param [in] hCamera Camera handle
/// \param [in] pFrameBuffer Image frame buffer
/// \param [in] pFrInfo The frame header information of the image
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraDisplayRGB24(
    CameraHandle    hCamera,
    BYTE *          pFrameBuffer,
    tSdkFrameHead * pFrInfo
);


///     CameraSetDisplayMode
///
/// \brief Set the display mode
/// \param [in] hCamera Camera handle
/// \param [in] iMode Display mode, see @link #emSdkDisplayMode @endlink definition
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetDisplayMode(
    CameraHandle    hCamera,
    INT             iMode
);


///     CameraSetDisplayOffset
///
/// \brief Set the starting offset of the display. This is valid only when the display mode is DISPLAY MODE_REAL. For example, the size of the display control is 320��240, and the size of the image is 640��480. When iOffsetX = 160 and iOffsetY = 120, the displayed area is the center 320��240 of the image.
/// \param [in] hCamera Camera handle
/// \param [in] iOffsetX The offset's X coordinate
/// \param [in] iOffsetY  The offset's Y coordinate
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetDisplayOffset(
    CameraHandle    hCamera,
    int             iOffsetX,
    int             iOffsetY
);


///     CameraSetDisplaySize
///
/// \brief Set the size of the display control.
/// \param [in] hCamera Camera handle.
/// \param [in] iWidth width
/// \param [in] iHeight height
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetDisplaySize(
    CameraHandle    hCamera,
    INT             iWidth,
    INT             iHeight
);


///     CameraGetImageBuffer
///
/// \brief Get a frame of image data. To improve efficiency, the SDK uses a zero-copy mechanism for image capture. This function actually obtains a buffer address in the kernel
/// \param [in] hCamera Camera handle
/// \param [out] pFrameInfo The header information pointer of the image
/// \param [out] pbyBuffer Returns the buffer pointer of the image data
/// \param [in] wTimes Timeout for grabbing an image in milliseconds. The function returns a timeout error if no image has been obtained within wTimes
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note After the function is successfully called, @link CameraReleaseImageBuffer @endlink must be called to release the buffer so that the kernel can continue to use the buffer
///
CameraSdkStatus __stdcall CameraGetImageBuffer(
    CameraHandle    hCamera,
    tSdkFrameHead * pFrameInfo,
    BYTE **         pbyBuffer,
    UINT            wTimes
);


///     CameraGetImageBufferEx
///
/// \brief Get a frame of image data. The image data obtained by this interface is already image-processed data
/// \param [in] hCamera Camera handle
/// \param [out] piWidth  returns the width of the image
/// \param [out] piHeight Returns the height of the image
/// \param [in] wTimes Timeout for grabbing an image in milliseconds. The function returns a timeout error if no image has been obtained within wTimes
/// \return On success, returns the first address of the frame data buffer, otherwise it returns 0
/// \note This function does not need to call @link CameraReleaseImageBuffer @endlink to release the buffer
///
unsigned char * __stdcall CameraGetImageBufferEx(
    CameraHandle    hCamera,
    INT *           piWidth,
    INT *           piHeight,
    UINT            wTimes
);


///     CameraSnapToBuffer
///
/// \brief Take an image into the buffer. The camera will enter snap mode and automatically switch to snap mode resolution for image capture
/// \param [in] hCamera Camera handle
/// \param [out] pFrameInfo The header information pointer of the image
/// \param [out] pbyBuffer Returns the buffer pointer of the image data
/// \param [in] wTimes Timeout for grabbing an image in milliseconds. The function returns a timeout error if no image has been obtained within wTimes
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note After the function is successfully called, @link CameraReleaseImageBuffer @endlink must be called to release the buffer so that the kernel can continue to use the buffer
/// \warning This function may switch the resolution, so the efficiency will be lower than @link #CameraGetImageBuffer @endlink. If you do not need to switch resolution capture, use @link #CameraGetImageBuffer @endlink.
///
CameraSdkStatus __stdcall CameraSnapToBuffer(
    CameraHandle    hCamera,
    tSdkFrameHead * pFrameInfo,
    BYTE **         pbyBuffer,
    UINT            wTimes
);


///     CameraSnapJpegToFile
///
/// \brief Capture a JPEG format image into the file. (Only some camera hardware supports this function)
/// \param [in] hCamera Handle of the camera
/// \param [in] lpszFileName The full path of the image file
/// \param [in] byQuality The quality factor of image saving, ranging from 1 to 100
/// \param [in] wTimes The timeout period for capturing images, in milliseconds. If the image is not obtained within wTimes, the function will return a timeout error
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSnapJpegToFile(
	CameraHandle    hCamera,
	char const *    lpszFileName,
	BYTE            byQuality,
	UINT            wTimes
);


///     CameraReleaseImageBuffer
///
/// \brief Releases the buffer obtained by @link #CameraGetImageBuffer @endlink
/// \param [in] hCamera Camera handle
/// \param [in] pbyBuffer Frame buffer address
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraReleaseImageBuffer(
    CameraHandle    hCamera,
    BYTE *          pbyBuffer
);


///     CameraPlay
///
/// \brief Put the camera into working mode and start receiving image data from the camera.
/// \param [in] hCamera Camera handle.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraPlay(
    CameraHandle    hCamera
);


///     CameraPause
///
/// \brief Put the camera into pause mode, do not receive image data from the camera, and also send a command to pause the camera output and release the transmission bandwidth. In pause mode, camera parameters can be configured and take effect immediately.
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraPause(
    CameraHandle    hCamera
);


///     CameraStop
///
/// \brief Let the camera enter the stop state. Generally, this function is called when deinitializing. The function is called and the camera parameters cannot be configured
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraStop(
    CameraHandle    hCamera
);


///     CameraInitRecord
///
/// \brief Initialize a video
/// \param [in] hCamera Camera handle
/// \param [in] iFormat Encoding format (0: no compression   1: MSCV compression   4: H264)
/// \param [in] pcSavePath The path to save the video file
/// \param [in] b2GLimit If TRUE, the file is automatically split when it is larger than 2G. (Function not implemented)
/// \param [in] dwQuality The larger the quality factor of the video, the better the quality. Range 1 to 100
/// \param [in] iFrameRate The frame rate of the video. It is recommended to set a larger frame rate than the actual acquisition so that no frames are missed
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraInitRecord(
    CameraHandle    hCamera,
    int             iFormat,
    char *          pcSavePath,
    BOOL            b2GLimit,
    DWORD           dwQuality,
    int             iFrameRate
);


///     CameraStopRecord
///
/// \brief End this video. After @link #CameraInitRecord @endlink, you can use this function to end a video and complete the file save operation
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraStopRecord(
    CameraHandle    hCamera
);


///     CameraPushFrame
///
/// \brief One frame of data is stored in the video stream. Since our frame header information carries the timestamp information of the image acquisition, the recording can be accurately time synchronized without being affected by the instability of the frame rate.
/// \param [in] hCamera Camera handle
/// \param [in] pbyImageBuffer Image data buffer
/// \param [in] pFrInfo The frame header information of the image
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraPushFrame(
    CameraHandle    hCamera,
    BYTE *          pbyImageBuffer,
    tSdkFrameHead * pFrInfo
);


///     CameraSaveImage
///
/// \brief Save the image buffer data as a picture file
/// \param [in] hCamera Camera handle
/// \param [in] lpszFileName The picture saves the full path to the file
/// \param [in] pbyImageBuffer Image data buffer
/// \param [in] pFrInfo The frame header information of the image
/// \param [in] byFileType Image save format. See the definition of @link #emSdkFileType @endlink for the range of values
/// \param [in] byQuality The quality factor of the saved image. This parameter is valid only when saving in JPG format. The range is from 1 to 100. The rest of the format can be written as 0
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Currently supports BMP, JPG, PNG, RAW four formats. Among them, RAW represents the raw data output by the camera. Saving RAW format files requires pbyImageBuffer and pFrInfo to be obtained by @link #CameraGetImageBuffer @endlink, and without @link #CameraImageProcess @endlink converting to BMP format; otherwise, if you want to save to BMP JPG or PNG format, pbyImageBuffer and pFrInfo are RGB format data processed by @link #CameraImageProcess @endlink. Specific usage can refer to Advanced's routines
///
CameraSdkStatus __stdcall CameraSaveImage(
    CameraHandle    hCamera,
    char *          lpszFileName,
    BYTE *          pbyImageBuffer,
    tSdkFrameHead * pFrInfo,
    UINT            byFileType,
    BYTE            byQuality
);


///     CameraSaveImageEx
///
/// \brief Save the image buffer data as a picture file
/// \param [in] hCamera Camera handle
/// \param [in] lpszFileName The picture saves the full path to the file
/// \param [in] pbyImageBuffer Image data buffer
/// \param [in] uImageFormat 0:8 BIT gray   1:rgb24    2:rgba32    3:bgr24    4:bgra32
/// \param [in] iWidth width
/// \param [in] iHeight height
/// \param [in] byFileType Image save format. See the definition of @link #emSdkFileType @endlink for the range of values
/// \param [in] byQuality The quality factor of the saved image. This parameter is valid only when saving in JPG format. The range is from 1 to 100. The rest of the format can be written as 0.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Same as @link #CameraSaveImage @endlink
///
CameraSdkStatus __stdcall CameraSaveImageEx(
	CameraHandle    hCamera,
	char *          lpszFileName,
	BYTE *          pbyImageBuffer,
	UINT			uImageFormat,
	int				iWidth,
	int				iHeight,
	UINT            byFileType,
	BYTE            byQuality
);


///
///
/// \brief Get the current preview resolution
/// \param [in] hCamera Camera handle
/// \param [out] psCurVideoSize Returns the current resolution
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetImageResolution(
    CameraHandle            hCamera,
    tSdkImageResolution *   psCurVideoSize
);


///     CameraGetImageResolutionEx
///
/// \brief Get the current preview resolution
/// \param [in] hCamera Camera handle
/// \param [out] iIndex Index number, [0,N] indicates the default resolution (N is the maximum number of preset resolutions, generally no more than 20), OXFF indicates custom resolution (ROI)
/// \param [out] acDescription Descriptive information for this resolution. This information is valid only when the resolution is preset. Custom resolution ignores this information
/// \param [out] Mode 0: Normal Mode 1:Sum 2:Average 3:Skip 4:Resample
/// \param [out] ModeSize ignored in normal mode, the first bit represents 2X2 the second bit represents 3X3 ...
/// \param [out] x horizontal offset
/// \param [out] y vertical offset
/// \param [out] width width
/// \param [out] height high
/// \param [out] ZoomWidth Scale width when final output, 0 means not zoom
/// \param [out] ZoomHeight Scales the height of the final output, 0 means no scaling
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetImageResolutionEx(
	CameraHandle    hCamera,
	int *           iIndex,
	char			acDescription[32],
	int *			Mode,
	UINT *			ModeSize,
	int *			x,
	int *			y,
	int *			width,
	int *			height,
	int *			ZoomWidth,
	int *			ZoomHeight
);


///     CameraSetImageResolution
///
/// \brief Sets the resolution of the preview
/// \param [in] hCamera Camera handle
/// \param [in] pImageResolution New resolution
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetImageResolution(
    CameraHandle            hCamera,
    tSdkImageResolution *   pImageResolution
);


///     CameraSetImageResolutionEx
///
/// \brief Get the current preview resolution
/// \param [in] hCamera Camera handle
/// \param [in] iIndex Index number, [0,N] indicates the default resolution (N is the maximum number of preset resolutions, generally no more than 20), OXFF indicates custom resolution (ROI)
/// \param [in] Mode 0: Normal Mode 1:Sum 2:Average 3:Skip 4:Resample
/// \param [in] ModeSize ignored in normal mode, the first bit represents 2X2 the second bit represents 3X3 ...
/// \param [in] x horizontal offset
/// \param [in] y vertical offset
/// \param [in] width width
/// \param [in] height high
/// \param [in] ZoomWidth Scale width when final output, 0 means not zoom
/// \param [in] ZoomHeight Scales the height of the final output, 0 means no scaling
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetImageResolutionEx(
	CameraHandle    hCamera,
	int				iIndex,
	int				Mode,
	UINT			ModeSize,
	int				x,
	int				y,
	int				width,
	int				height,
	int				ZoomWidth,
	int				ZoomHeight
);


///     CameraGetMediaType
///
/// \brief Gets the format index number of the camera's current output raw data
/// \param [in] hCamera Camera handle
/// \param [out] piMediaType Returns the index of the current format type
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note In the @link #tSdkCameraCapbility.pMediaTypeDesc @endlink member, the format supported by the camera is saved as an array. The index number pointed to by piMediaType is the index number of the array.
///
CameraSdkStatus __stdcall CameraGetMediaType(
    CameraHandle    hCamera,
    INT *           piMediaType
);


///     CameraSetMediaType
///
/// \brief Sets the camera's output raw data format
/// \param [in] hCamera Camera handle
/// \param [in] iMediaType The index number of the new format type
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Same as @link #CameraGetMediaType @endlink
///
CameraSdkStatus __stdcall CameraSetMediaType(
    CameraHandle    hCamera,
    INT             iMediaType
);


///     CameraGetRawMaxAvailBits
///
/// \brief Get the maximum number of significant bits of RAW data
/// \param [in] hCamera Camera handle
/// \param [out] pMaxAvailBits	returns the maximum number of significant bits of RAW data
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraGetRawMaxAvailBits(
	CameraHandle    hCamera,
	int *           pMaxAvailBits
);


///     CameraSetRawStartBit
///
/// \brief Set the output start bit of RAW data
/// \param [in] hCamera Camera handle
/// \param [in] startBit Start BIT (The high 8 bits are output by default)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetRawStartBit(
	CameraHandle    hCamera,
	int             startBit
);


///     CameraGetRawStartBit
///
/// \brief Get the output start bit of RAW data
/// \param [in] hCamera Camera handle
/// \param [out] startBit Start BIT
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetRawStartBit(
	CameraHandle    hCamera,
	int *           startBit
);


///     CameraSetAeState
///
/// \brief Set the camera exposure mode. Automatic or manual
/// \param [in] hCamera Camera handle
/// \param [in] bAeState TRUE: Auto exposure; FALSE: Manual exposure
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetAeState(
    CameraHandle    hCamera,
    BOOL            bAeState
);


///     CameraGetAeState
///
/// \brief Get the camera's current exposure mode
/// \param [in] hCamera Camera handle
/// \param [out] pAeState Returns the auto exposure's enable state
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetAeState(
    CameraHandle    hCamera,
    BOOL *          pAeState
);


///     CameraSetSharpness
///
/// \brief Sets the sharpening parameters for the processing of the image
/// \param [in] hCamera Camera handle
/// \param [in] iSharpness Sharpen parameter, generally [0,100], 0 means close sharpening
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetSharpness(
    CameraHandle    hCamera,
    int             iSharpness
);


///     CameraGetSharpness
///
/// \brief Gets the current sharpening setting
/// \param [in] hCamera Camera handle
/// \param [out] piSharpness Returns the currently set sharpened setting
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetSharpness(
    CameraHandle    hCamera,
    int *           piSharpness
);


///     CameraSetLutMode
///
/// \brief Set the camera's lookup table transformation mode LUT mode
/// \param [in] hCamera Camera handle
/// \param [in] emLutMode Defines the reference @link #emSdkLutMode @endlink type
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetLutMode(
    CameraHandle    hCamera,
    int             emLutMode
);


///     CameraGetLutMode
///
/// \brief Obtain the look-up table conversion mode LUT mode of the camera
/// \param [in] hCamera Camera handle
/// \param [out] pemLutMode Returns the current LUT mode
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetLutMode(
    CameraHandle    hCamera,
    int *           pemLutMode
);


///     CameraSelectLutPreset
///
/// \brief Select the LUT table in the preset LUT mode
/// \param [in] hCamera Camera handle
/// \param [in] iSel The index number of the lut table. The number of tables is obtained by @link #tSdkCameraCapbility.iPresetLut @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Must use @link #CameraSetLutMode @endlink to set LUT mode to preset mode
///
CameraSdkStatus __stdcall CameraSelectLutPreset(
    CameraHandle    hCamera,
    int             iSel
);


///     CameraGetLutPresetSel
///
/// \brief The LUT table index number in the preset LUT mode is obtained
/// \param [in] hCamera Camera handle
/// \param [out] piSel Returns the index number of the table
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetLutPresetSel(
    CameraHandle    hCamera,
    int *           piSel
);


///     CameraSetCustomLut
///
/// \brief Set up a custom LUT table
/// \param [in] hCamera Camera handle
/// \param [in] iChannel Specifies the LUT color channel to be set. When @link #LUT_CHANNEL_ALL @endlink, the three-channel LUTs will be replaced at the same time. @see emSdkLutChannel
/// \param [in] pLut pointer to the address of the LUT table. The LUT table is an unsigned short integer array, and the array size is 4096, which is the mapping value corresponding to the code color channel from 0 to 4096 (12 bit color accuracy).
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note You must use @link #CameraSetLutMode @endlink to set the LUT mode to custom mode
///
CameraSdkStatus __stdcall CameraSetCustomLut(
    CameraHandle    hCamera,
    int             iChannel,
    USHORT *        pLut
);


///     CameraGetCustomLut
///
/// \brief Get the currently used custom LUT table
/// \param [in] hCamera Camera handle
/// \param [in] iChannel Specifies the LUT color channel to be obtained. When @link #LUT_CHANNEL_ALL @endlink, returns the LUT table of the red channel. @see emSdkLutChannel
/// \param [out] pLut points to the address of the LUT table. The LUT table is an unsigned short integer array, and the array size is 4096, which is the mapping value corresponding to the code color channel from 0 to 4096 (12 bit color accuracy).
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetCustomLut(
    CameraHandle    hCamera,
    int             iChannel,
    USHORT *        pLut
);


///     CameraGetCurrentLut
///
/// \brief Obtain the camera's current LUT table, which can be called in any LUT mode, to intuitively observe changes in the LUT curve
/// \param [in] hCamera Camera handle
/// \param [in] iChannel Specifies the LUT color channel to be obtained. When @link #LUT_CHANNEL_ALL @endlink, returns the LUT table of the red channel. @see emSdkLutChannel
/// \param [out] pLut points to the address of the LUT table. The LUT table is an unsigned short integer array, and the array size is 4096, which is the mapping value corresponding to the code color channel from 0 to 4096 (12 bit color accuracy).
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetCurrentLut(
    CameraHandle    hCamera,
    int             iChannel,
    USHORT *        pLut
);


///     CameraSetWbMode
///
/// \brief Set camera white balance mode. Divided into manual and automatic two ways
/// \param [in] hCamera Camera handle
/// \param [in] bAuto TRUE to enable auto mode. FALSE indicates that using manual mode, a white balance is performed by calling @link #CameraSetOnceWB @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetWbMode(
    CameraHandle    hCamera,
    BOOL            bAuto
);


///     CameraGetWbMode
///
/// \brief Get the current white balance mode
/// \param [in] hCamera Camera handle
/// \param [out] pbAuto pointer, return TRUE for automatic mode, FALSE for manual mode
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetWbMode(
    CameraHandle    hCamera,
    BOOL *          pbAuto
);


///     CameraSetPresetClrTemp
///
/// \brief Select the specified preset color temperature mode
/// \param [in] hCamera Camera handle
/// \param [in] iSel The mode index number of the preset color temperature, starting from 0
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Call @link #CameraSetClrTempMode @endlink set to preset mode
///
CameraSdkStatus __stdcall CameraSetPresetClrTemp(
    CameraHandle    hCamera,
    int             iSel
);


///     CameraGetPresetClrTemp
///
/// \brief Get the currently selected preset color temperature mode
/// \param [in] hCamera Camera handle
/// \param [out] piSel Returns the selected preset color temperature index number
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetPresetClrTemp(
    CameraHandle    hCamera,
    int *           piSel
);


///     CameraSetUserClrTempGain
///
/// \brief Set digital gain in custom color temperature mode
/// \param [in] hCamera Camera handle
/// \param [in] iRgain Red gain, range 0 to 400, 0 to 4 times
/// \param [in] iGgain Green gain, range 0 to 400, 0 to 4 times
/// \param [in] iBgain Blue gain, range 0 to 400, 0 to 4 times
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Call @link #CameraSetClrTempMode @endlink set to custom mode
///
CameraSdkStatus __stdcall CameraSetUserClrTempGain(
    CameraHandle    hCamera,
    int             iRgain,
    int             iGgain,
    int             iBgain
);


///     CameraGetUserClrTempGain
///
/// \brief Get digital gain in custom color temperature mode
/// \param [in] hCamera Camera handle
/// \param [out] piRgain pointer, returning red gain, range 0 to 400, 0 to 4 times
/// \param [out] piGgain pointer, return green gain, range 0 to 400, 0 to 4 times
/// \param [out] piBgain pointer, returns blue gain, range 0 to 400, 0 to 4 times
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetUserClrTempGain(
    CameraHandle    hCamera,
    int *           piRgain,
    int *           piGgain,
    int *           piBgain
);


///     CameraSetUserClrTempMatrix
///
/// \brief Set the color matrix in custom color temperature mode
/// \param [in] hCamera Camera handle
/// \param [in] pMatrix points to the first address of an array of float[3][3]
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Call @link #CameraSetClrTempMode @endlink set to custom mode
///
CameraSdkStatus __stdcall CameraSetUserClrTempMatrix(
    CameraHandle    hCamera,
    float *         pMatrix
);


///     CameraGetUserClrTempMatrix
///
/// \brief Get the color matrix in a custom color temperature mode
/// \param [in] hCamera Camera handle
/// \param [out] pMatrix points to the first address of an array of float[3][3]
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetUserClrTempMatrix(
    CameraHandle    hCamera,
    float *         pMatrix
);


///     CameraSetClrTempMode
///
/// \brief Color temperature mode used when setting white balance
/// \param [in] hCamera Camera handle
/// \param [in] iMode mode, can only be defined by @link #emSdkClrTmpMode @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note There are three supported modes, automatic, preset, and custom
/// \note Automatic mode will automatically select the appropriate color temperature mode
/// \note In preset mode, user-specified color temperature mode is used
/// \note custom-defined color temperature digital gain and matrix
///
CameraSdkStatus __stdcall CameraSetClrTempMode(
    CameraHandle    hCamera,
    int             iMode
);


///     CameraGetClrTempMode
///
/// \brief The color temperature mode used when obtaining white balance. Refer to the function description section of @link #CameraSetClrTempMode @endlink
/// \param [in] hCamera Camera handle
/// \param [out] pimode pointer, return mode selection, reference @link #emSdkClrTmpMode @endlink type definition
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetClrTempMode(
    CameraHandle    hCamera,
    int *           pimode
);


///     CameraSetOnceWB
///
/// \brief In manual white balance mode, calling this function will perform a white balance. The effective time is when the next frame of image data is received
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetOnceWB(
    CameraHandle    hCamera
);


///     CameraSetOnceBB
///
/// \brief Performs a black balance operation. (Requires camera support for this feature)
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetOnceBB(
    CameraHandle    hCamera
);


///     CameraSetAeTarget
///
/// \brief Sets the brightness target for auto exposure. Setting range [@link #tSdkExpose.uiTargetMin @endlink, @link #tSdkExpose.uiTargetMax @endlink]
/// \param [in] hCamera Camera handle
/// \param [in] iAeTarget Brightness target value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetAeTarget(
    CameraHandle    hCamera,
    int             iAeTarget
);


///     CameraGetAeTarget
///
/// \brief Get the auto exposure's brightness target value
/// \param [in] hCamera Camera handle
/// \param [out] piAeTarget pointer, return target value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetAeTarget(
    CameraHandle    hCamera,
    int *           piAeTarget
);


///     CameraSetAeExposureRange
///
/// \brief Setting the exposure time adjustment range of the automatic exposure mode
/// \param [in] hCamera Camera handle
/// \param [in] fMinExposureTime Minimum exposure time (microseconds)
/// \param [in] fMaxExposureTime Maximum exposure time (microseconds)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetAeExposureRange(
	CameraHandle    hCamera,
	double          fMinExposureTime,
	double			fMaxExposureTime
);


///     CameraGetAeExposureRange
///
/// \brief Exposure time adjustment range for automatic exposure mode
/// \param [in] hCamera Camera handle
/// \param [out] fMinExposureTime Minimum exposure time (microseconds)
/// \param [out] fMaxExposureTime Maximum exposure time (microseconds)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetAeExposureRange(
	CameraHandle    hCamera,
	double *        fMinExposureTime,
	double *		fMaxExposureTime
);


///     CameraSetAeAnalogGainRange
///
/// \brief Setting the gain adjustment range of the automatic exposure mode
/// \param [in] hCamera Camera handle
/// \param [in] iMinAnalogGain minimum gain
/// \param [in] iMaxAnalogGain maximum gain
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetAeAnalogGainRange(
	CameraHandle    hCamera,
	int				iMinAnalogGain,
	int				iMaxAnalogGain
);


///     CameraGetAeAnalogGainRange
///
/// \brief Gain adjustment range for automatic exposure mode
/// \param [in] hCamera Camera handle
/// \param [out] iMinAnalogGain minimum gain
/// \param [out] iMaxAnalogGain maximum gain
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetAeAnalogGainRange(
	CameraHandle    hCamera,
	int *			iMinAnalogGain,
	int *			iMaxAnalogGain
);


///     CameraSetAeThreshold
///
/// \brief Set the adjustment threshold for auto exposure mode
/// \param [in] hCamera Camera handle
/// \param [in] iThreshold Stops automatic adjustment if abs (target brightness - image brightness) < iThreshold
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetAeThreshold(
	CameraHandle    hCamera,
	int				iThreshold
);


///     CameraGetAeThreshold
///
/// \brief Get adjustment threshold for auto exposure mode
/// \param [in] hCamera Camera handle
/// \param [out] iThreshold Read Threshold
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraGetAeThreshold(
	CameraHandle    hCamera,
	int *		    iThreshold
);


///     CameraSetExposureTime
///
/// \brief Set the exposure time. The unit is microseconds
/// \param [in] hCamera Camera handle
/// \param [in] fExposureTime Exposure time in microseconds
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note For CMOS sensors, the unit of exposure is calculated in rows, so the exposure time cannot be continuously adjusted in microseconds. Instead, the entire line will be chosen. After calling this function to set the exposure time, it is recommended to call @link #CameraGetExposureTime @endlink to get the actual set value.
CameraSdkStatus __stdcall CameraSetExposureTime(
    CameraHandle    hCamera,
    double          fExposureTime
);


///     CameraGetExposureLineTime
///
/// \brief Get a line of exposure time
/// \param [in] hCamera Camera handle
/// \param [out] pfLineTime returns the exposure time of one line in microseconds
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note For CMOS sensors, the unit of exposure is calculated in rows, so the exposure time cannot be continuously adjusted in microseconds. Instead, the entire line will be chosen. The function of this function is to return the CMOS camera exposure one line corresponding time.
///
CameraSdkStatus __stdcall CameraGetExposureLineTime(
    CameraHandle    hCamera,
    double *        pfLineTime
);


///     CameraGetExposureTime
///
/// \brief Get camera exposure time
/// \param [in] hCamera Camera handle
/// \param [out] pfExposureTime returns the current exposure time in microseconds
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetExposureTime
///
CameraSdkStatus __stdcall CameraGetExposureTime(
    CameraHandle    hCamera,
    double *        pfExposureTime
);


///     CameraGetExposureTimeRange
///
/// \brief Get camera exposure time range
/// \param [in] hCamera Camera handle
/// \param [out] pfMin Returns the minimum exposure time in microseconds
/// \param [out] pfMax Returns the maximum exposure time in microseconds
/// \param [out] pfStep Returns the exposure time in microseconds
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetExposureTimeRange(
	CameraHandle    hCamera,
	double *        pfMin,
	double *        pfMax,
	double *        pfStep
);


///     CameraSetMultiExposureTime
///
/// \brief Set the multiple exposure time. The unit is microseconds. (This feature is only supported by line camera)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [in] fExposureTime Exposure time in microseconds
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note For CMOS sensors, the unit of exposure is calculated in rows, so the exposure time cannot be continuously adjusted in microseconds. Instead, the entire line will be chosen. After calling this function to set the exposure time, it is recommended to call @link #CameraGetMultiExposureTime @endlink to get the actual set value.
///
CameraSdkStatus __stdcall CameraSetMultiExposureTime(
	CameraHandle    hCamera,
	int				index,
	double          fExposureTime
);


///     CameraGetMultiExposureTime
///
/// \brief Get the multiple exposure time. The unit is microseconds. (This feature is only supported by line camera)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [out] fExposureTime Returns exposure time in microseconds
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetMultiExposureTime(
	CameraHandle    hCamera,
	int			    index,
	double *        fExposureTime
);


///     CameraSetMultiExposureGain
///
/// \brief Sets the gain value for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [in] iGamma The gain to be set
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note The set value will be stored in the SDK immediately, but it will only take effect when the camera is in LUT mode generated by dynamic parameters. Please refer to the function description part of @link #CameraSetLutMode @endlink.
///
CameraSdkStatus __stdcall CameraSetMultiExposureGain(
	CameraHandle    hCamera,
	int				index,
	int             iGain
);


///     CameraGetMultiExposureGain
///
/// \brief Get the gain value for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [out] piGamma Returns the gain value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetMultiExposureGain
///
CameraSdkStatus __stdcall CameraGetMultiExposureGain(
	CameraHandle    hCamera,
	int				index,
	int *           piGain
);


///     CameraSetMultiExposureGamma
///
/// \brief Sets the gamma value for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [in] iGamma The gamma to be set
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note The set value will be stored in the SDK immediately, but it will only take effect when the camera is in LUT mode generated by dynamic parameters. Please refer to the function description part of @link #CameraSetLutMode @endlink.
///
CameraSdkStatus __stdcall CameraSetMultiExposureGamma(
	CameraHandle    hCamera,
	int				index,
	int             iGamma
);


///     CameraGetMultiExposureGamma
///
/// \brief Get the gamma value for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [out] piGamma Returns the gamma value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetMultiExposureGamma
///
CameraSdkStatus __stdcall CameraGetMultiExposureGamma(
	CameraHandle    hCamera,
	int				index,
	int *           piGamma
);


///     CameraSetMultiExposureExpDelay
///
/// \brief Set the exposure delay value for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [in] fExpDelay The exposure delay value to be set
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraSetMultiExposureExpDelay(
	CameraHandle    hCamera,
	int				index,
	double          fExpDelay
);


///     CameraGetMultiExposureExpDelay
///
/// \brief Get the exposure delay value for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [out] pfExpDelay pointer, return exposure delay value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetMultiExposureExpDelay
///
CameraSdkStatus __stdcall CameraGetMultiExposureExpDelay(
	CameraHandle    hCamera,
	int				index,
	double *        pfExpDelay
);


///     CameraSetMultiExposureStrobeWidth
///
/// \brief Set the strobe pulse width for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [in] fStrobeWidth The strobe pulse width value to be set
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraSetMultiExposureStrobeWidth(
	CameraHandle    hCamera,
	int				index,
	double          fStrobeWidth
);


///     CameraGetMultiExposureStrobeWidth
///
/// \brief Get the strobe pulse width for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [out] pfStrobeWidth pointer, return strobe pulse width value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetMultiExposureStrobeWidth
///
CameraSdkStatus __stdcall CameraGetMultiExposureStrobeWidth(
	CameraHandle    hCamera,
	int				index,
	double *        pfStrobeWidth
);


///     CameraSetMultiExposureStrobeOutSel
///
/// \brief Set the strobe output selection for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [in] uStrobeOutSel The strobe output selection value to be set
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraSetMultiExposureStrobeOutSel(
	CameraHandle    hCamera,
	int				index,
	UINT			uStrobeOutSel
);


///     CameraGetMultiExposureStrobeOutSel
///
/// \brief Get the strobe output selection for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [in] index Exposure index
/// \param [out] puStrobeOutSel pointer, returns the strobe output selection value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetMultiExposureStrobeOutSel
///
CameraSdkStatus __stdcall CameraGetMultiExposureStrobeOutSel(
	CameraHandle    hCamera,
	int				index,
	UINT *			puStrobeOutSel
);


///     CameraSetMultiExposureCount
///
/// \brief Set the number of multiple exposure enable. (This feature is only supported by line camera)
/// \param [in] hCamera Camera handle
/// \param [in] count The number of exposures enabled
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetMultiExposureCount(
	CameraHandle    hCamera,
	int				count
);


///     CameraGetMultiExposureCount
/// \brief Get the number of multiple exposure enable. (This feature is only supported by line camera)
/// \param [in] hCamera Camera handle
/// \param [out] count The number of exposures enabled
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetMultiExposureCount(
	CameraHandle    hCamera,
	int *			count
);


///     CameraGetMultiExposureMaxCount
///
/// \brief Get the maximum number of exposures for multiple exposures. (This feature is only supported by line camera)
/// \param [in] hCamera Camera handle
/// \param [out] max_count The maximum number of exposures supported
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetMultiExposureMaxCount(
	CameraHandle    hCamera,
	int *			max_count
);


///     CameraGetMultiExposureSupported
///
/// \brief Get the function support bits for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [out] pSupported Supported functions. (bit0: gamma)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetMultiExposureSupported(
	CameraHandle    hCamera,
	UINT *			pSupported
);


///     CameraGetMultiExposureBlendingSupported
///
/// \brief Get the blend function support bit for multiple exposures. (This function is only supported by line scan cameras)
/// \param [in] hCamera Camera handle
/// \param [out] pSupported The number of mixes supported. (bit0=1 supports the mixing of 2 exposures, bit1=1 supports 3 exposures...)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetMultiExposureBlendingSupported(
	CameraHandle    hCamera,
	UINT *			pSupported
);


///     CameraSetMultiExposureBlendingEnable
///
/// \brief Enables and disables the blending function for multiple exposures
/// \param [in] hCamera Camera handle
/// \param [in] bEnable Whether to enable
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetMultiExposureBlendingEnable(
	CameraHandle    hCamera,
	BOOL			bEnable
);


///     CameraGetMultiExposureBlendingEnable
///
/// \brief Get whether the blending function of multiple exposures is enabled
/// \param [in] hCamera Camera handle
/// \param [out] pbEnable returns enable status
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraGetMultiExposureBlendingEnable(
	CameraHandle    hCamera,
	BOOL *			pbEnable
);


///     CameraSetMultiExposureBlendingRatios
///
/// \brief set the multi-exposure blend coefficient
/// \param [in] hCamera Camera handle
/// \param [in] pRatios coefficient pointer (The coefficient value range is 0-100, which means %0-%100)
/// \param [in] iNumRatios Number of coefficients (The number of coefficients = the number of exposures - 1. For example, for 3 exposures, you only need to configure 2 coefficients, coefficient 3 = 100 - (coefficient 1 + coefficient 2))
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetMultiExposureBlendingRatios(
	CameraHandle    hCamera,
	int *			pRatios,
	int				iNumRatios
);


///     CameraGetMultiExposureBlendingRatios
///
/// \brief Get the coefficient of multiple exposure blending
/// \param [in] hCamera Camera handle
/// \param [out] pRatios coefficient pointer
/// \param [inout] piNumRatios number of coefficients, input: set to pRatios array size before calling; Output: return the number of coefficients read (number of exposures - 1)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetMultiExposureBlendingRatios(
	CameraHandle    hCamera,
	int *			pRatios,
	int *			piNumRatios
);


///     CameraSetAnalogGain
///
/// \brief Set the camera's image analog gain value
/// \param [in] hCamera Camera handle
/// \param [in] iAnalogGain gain value set
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note This value is multiplied by @link #tSdkExpose.fAnalogGainStep @endlink to get the actual image signal magnification
/// \note @link CameraSetAnalogGainX @endlink takes the magnification as the unit
///
CameraSdkStatus __stdcall CameraSetAnalogGain(
    CameraHandle    hCamera,
    INT             iAnalogGain
);


///     CameraGetAnalogGain
///
/// \brief Obtain the analog gain value of the image signal
/// \param [in] hCamera Camera handle
/// \param [out] piAnalogGain Returns the current analog gain value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note CameraGetAnalogGainX takes the magnification as the unit
/// \see CameraSetAnalogGain
///
CameraSdkStatus __stdcall CameraGetAnalogGain(
    CameraHandle    hCamera,
    INT*            piAnalogGain
);


///     CameraSetAnalogGainX
///
/// \brief Set the image gain magnification of the camera
/// \param [in] hCamera Camera handle
/// \param [in] fGain Gain magnification
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetAnalogGainX(
	CameraHandle    hCamera,
	float    		fGain
);


///     CameraGetAnalogGainX
///
/// \brief Obtain the gain magnification of the image signal
/// \param [in] hCamera Camera handle
/// \param [out] pfGain pointer, returns the current gain magnification.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetAnalogGainX
///
CameraSdkStatus __stdcall CameraGetAnalogGainX(
	CameraHandle    hCamera,
	float *         pfGain
);


///     CameraGetAnalogGainXRange
///
/// \brief Get the value range of the camera's gain magnification
/// \param [in] hCamera	Camera handle
/// \param [out] pfMin pointer, returns the minimum multiple
/// \param [out] pfMax pointer, returns the maximum multiple
/// \param [out] pfStep pointer, returns the step value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraGetAnalogGainXRange(
	CameraHandle	hCamera,
	float *			pfMin,
	float *			pfMax,
	float *			pfStep
);


///     CameraSetGain
///
/// \brief Set the digital gain of the image
/// \param [in] hCamera Camera handle
/// \param [in] iRGain The gain value of the red channel
/// \param [in] iGGain Gain value of green channel
/// \param [in] iBGain The gain value of the blue channel
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note The set scope is described by the @link #tRgbGainRange @endlink member. The actual magnification is the setting /100
///
CameraSdkStatus __stdcall CameraSetGain(
    CameraHandle    hCamera,
    int             iRGain,
    int             iGGain,
    int             iBGain
);


///     CameraGetGain
///
/// \brief Get the digital gain of image processing
/// \param [in] hCamera Camera handle
/// \param [out] piRGain Returns the digital gain value of the red channel
/// \param [out] piGGain Returns the digital gain value of the green channel
/// \param [out] piBGain Returns the digital gain value of the blue channel
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetGain
CameraSdkStatus __stdcall CameraGetGain(
    CameraHandle    hCamera,
    int *           piRGain,
    int *           piGGain,
    int *           piBGain
);


///     CameraSetGamma
///
/// \brief Set the gamma value in LUT dynamic generation mode
/// \param [in] hCamera Camera handle
/// \param [in] iGamma The gamma to be set
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note The set value will be stored in the SDK immediately, but it will only take effect when the camera is in LUT mode generated by dynamic parameters. Please refer to the function description part of @link #CameraSetLutMode @endlink.
///
CameraSdkStatus __stdcall CameraSetGamma(
    CameraHandle    hCamera,
    int             iGamma
);


///     CameraGetGamma
///
/// \brief Get gamma value in LUT dynamic generation mode
/// \param [in] hCamera Camera handle
/// \param [out] piGamma Returns the current gamma value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetGamma
///
CameraSdkStatus __stdcall CameraGetGamma(
    CameraHandle    hCamera,
    int *           piGamma
);


///     CameraSetContrast
///
/// \brief Sets the contrast value in LUT dynamic generation mode
/// \param [in] hCamera Camera handle
/// \param [in] iContrast Contrast value set by iContrast
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note The set value will be stored in the SDK immediately, but it will only take effect when the camera is in LUT mode generated by dynamic parameters. Please refer to the function description part of @link #CameraSetLutMode @endlink.
///
CameraSdkStatus __stdcall CameraSetContrast(
    CameraHandle    hCamera,
    int             iContrast
);


///     CameraGetContrast
///
/// \brief Get the contrast value in LUT dynamic generation mode
/// \param [in] hCamera Camera handle
/// \param [out] piContrast Returns the current contrast value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetContrast
///
CameraSdkStatus __stdcall CameraGetContrast(
    CameraHandle    hCamera,
    int *           piContrast
);


///     CameraSetSaturation
///
/// \brief Sets the saturation of image processing
/// \param [in] hCamera Camera handle
/// \param [in] iSaturation saturation value
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note is not valid for black and white cameras. The setting range is obtained by @link #tSaturationRange @endlink. 100 represents the original color and is not enhanced
///
CameraSdkStatus __stdcall CameraSetSaturation(
    CameraHandle    hCamera,
    int             iSaturation
);


///     CameraGetSaturation
///
/// \brief Get image processing saturation
/// \param [in] hCamera Camera handle
/// \param [out] piSaturation Returns the saturation value of the current image processing
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetSaturation
///
CameraSdkStatus __stdcall CameraGetSaturation(
    CameraHandle    hCamera,
    int *           piSaturation
);


///     CameraSetMonochrome
///
/// \brief Set the color to mono function enable
/// \param [in] hCamera Camera handle
/// \param [in] bEnable TRUE to change the color image to black and white
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetMonochrome(
    CameraHandle    hCamera,
    BOOL            bEnable
);


///     CameraGetMonochrome
///
/// \brief Get the status of enabling black and white color conversion
/// \param [in] hCamera Camera handle
/// \param [out] pbEnable Returns TRUE to enable the conversion of a color image to a mono image
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetMonochrome
///
CameraSdkStatus __stdcall CameraGetMonochrome(
    CameraHandle    hCamera,
    BOOL *          pbEnable
);


///     CameraSetInverse
///
/// \brief Set the enable for the color image color flip function
/// \param [in] hCamera Camera handle
/// \param [in] bEnable TRUE, means that the image color flip function is enabled, and the effect of similar film negatives can be obtained
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetInverse(
    CameraHandle    hCamera,
    BOOL            bEnable
);


///     CameraGetInverse
///
/// \brief Get the status of the image color inversion function
/// \param [in] hCamera Camera handle
/// \param [out] pbEnable Returns this function enable state
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetInverse(
    CameraHandle    hCamera,
    BOOL *          pbEnable
);


///     CameraSetAntiFlick
///
/// \brief Set the anti-strobe function's enable state during auto exposure
/// \param [in] hCamera Camera handle
/// \param [in] bEnable TRUE, enable anti-strobe function; FALSE, disable this function
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Not valid for manual exposure mode
///
CameraSdkStatus __stdcall CameraSetAntiFlick(
    CameraHandle    hCamera,
    BOOL            bEnable
);


///     CameraGetAntiFlick
///
/// \brief Get the anti-strobe function's enable state during auto exposure
/// \param [in] hCamera Camera handle
/// \param [out] pbEnable Returns the enable state of this function
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetAntiFlick(
    CameraHandle    hCamera,
    BOOL *          pbEnable
);


///     CameraGetLightFrequency
///
/// \brief When the auto exposure is obtained, the frequency of the deflashing is selected
/// \param [in] hCamera Camera handle
/// \param [out] piFrequencySel Returns the selected index number. 0:50HZ 1:60HZ
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraGetLightFrequency(
    CameraHandle    hCamera,
    int *           piFrequencySel
);


///     CameraSetLightFrequency
///
/// \brief Sets the frequency at which the flash disappears during auto exposure
/// \param [in] hCamera Camera handle
/// \param [in] iFrequencySel 0:50HZ , 1:60HZ
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraSetLightFrequency(
    CameraHandle    hCamera,
    int             iFrequencySel
);


///     CameraSetFrameSpeed
///
/// \brief Sets the frame rate of the camera output image
/// \param [in] hCamera Camera handle
/// \param [in] iFrameSpeed Frame rate index, ranging from 0 to tSdkCameraCapbility.iFrameSpeedDesc - 1
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetFrameSpeed(
    CameraHandle    hCamera,
    int             iFrameSpeed
);


///     CameraGetFrameSpeed
///
/// \brief Obtain the frame rate selection index number of the camera output image
/// \param [in] hCamera Camera handle
/// \param [out] piFrameSpeed Returns the selected frame rate mode index number
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetFrameSpeed
///
CameraSdkStatus __stdcall CameraGetFrameSpeed(
    CameraHandle    hCamera,
    int *           piFrameSpeed
);


///     CameraSetFrameRate
///
/// \brief Set the frame frequency (area) or line frequency (line scan). (only supported by some gige camera)
/// \param [in] hCamera Camera handle
/// \param [in] RateHZ frame rate or line rate (<=0 means maximum frequency)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetFrameRate(
	CameraHandle    hCamera,
	int             RateHZ
);


///     CameraGetFrameRate
///
/// \brief Get the frame frequency (area) or line frequency (line scan)
/// \param [in] hCamera Camera handle
/// \param [out] RateHZ frame rate or line rate (<=0 means maximum frequency)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetFrameRate(
	CameraHandle    hCamera,
	int *            RateHZ
);


///     CameraSetParameterMode
///
/// \brief Sets the target object for parameter access
/// \param [in] hCamera Camera handle
/// \param [in] iMode The object accessed by the iMode parameter. Reference @link #emSdkParameterMode @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetParameterMode(
    CameraHandle    hCamera,
    int             iMode
);


///     CameraGetParameterMode
///
/// \brief Gets the target object for the parameter access
/// \param [in] hCamera Camera handle
/// \param [out] piTarget Returns the object accessed by the parameter. Reference @link #emSdkParameterMode @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetParameterMode(
    CameraHandle    hCamera,
    int *           piTarget
);


///     CameraSetParameterMask
///
/// \brief Sets the mask for parameter access. When the parameters are loaded and saved, the mask is used to determine whether each module parameter is loaded or saved
/// \param [in] hCamera Camera handle
/// \param [in] uMask mask. Reference @link #emSdkPropSheetMask @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetParameterMask(
    CameraHandle    hCamera,
    UINT            uMask
);


///     CameraSaveParameter
///
/// \brief Save current camera parameters to the specified parameter group. The camera provides A, B, C, D four sets of space for parameter preservation
/// \param [in] hCamera Camera handle
/// \param [in] iTeam parameter group, refer to @link #emSdkParameterTeam @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSaveParameter(
    CameraHandle    hCamera,
    int             iTeam
);


///     CameraSaveParameterToFile
///
/// \brief Saves the current camera parameters to the specified file. This file can be copied to another computer for loading by other cameras, or it can be used for parameter backup
/// \param [in] hCamera Camera handle
/// \param [in] sFileName Full path to the sFileName parameter file
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSaveParameterToFile(
    CameraHandle    hCamera,
    char *          sFileName
);


///     CameraReadParameterFromFile
///
/// \brief Load parameters from the parameter file specified on the PC. Our camera parameters are saved on the PC as a .config suffix file, which is located in the Camera\\Configs folder under installation.
/// \param [in] hCamera Camera handle
/// \param [in] sFileName Full path to the sFileName parameter file
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraReadParameterFromFile(
    CameraHandle    hCamera,
    char *          sFileName
);


///     CameraLoadParameter
///
/// \brief Loads the parameters of the specified group into the camera
/// \param [in] hCamera Camera handle
/// \param [in] iTeam parameter group, refer to @link #emSdkParameterTeam @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraLoadParameter(
    CameraHandle    hCamera,
    int             iTeam
);


///     CameraGetCurrentParameterGroup
///
/// \brief Get the currently selected parameter group
/// \param [in] hCamera Camera handle
/// \param [in] piTeam Returns the currently selected parameter group
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetCurrentParameterGroup(
    CameraHandle    hCamera,
    int *           piTeam
);


///     CameraSetTransPackLen
///
/// \brief Sets the packet size of the camera's transmitted image data
/// \param [in] hCamera Camera handle
/// \param [in] iPackSel Index number of the iPackSel packet length selection. The packet length can be expressed by the @link #tSdkCameraCapbility.pPackLenDesc @endlink member in the camera attribute structure. The @link #tSdkCameraCapbility.iPackLenDesc @endlink member represents the maximum number of optional packet modes.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note In the current SDK version, this interface is only valid for GIGE interface cameras and is used to control the packet size of the network transmission
/// \note For NICs that support Jumbo Frames, we recommend choosing an 8K packet size that can effectively reduce the CPU processing time taken by the transfer
/// \warning New version of the SDK does not need to call this function, the SDK will automatically negotiate the optimal packet size according to the network conditions
///
CameraSdkStatus __stdcall CameraSetTransPackLen(
    CameraHandle    hCamera,
    INT             iPackSel
);


///     CameraGetTransPackLen
///
/// \brief Gets the selected index number of the camera's current transmission packet size
/// \param [in] hCamera Camera handle
/// \param [out] piPackSel Returns the currently selected packet size index number
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetTransPackLen
///
CameraSdkStatus __stdcall CameraGetTransPackLen(
    CameraHandle    hCamera,
    INT *           piPackSel
);


///     CameraIsAeWinVisible
///
/// \brief Gets the display status of the auto exposure reference window
/// \param [in] hCamera Camera handle
/// \param [out] pbIsVisible returns TRUE, indicating that the current window will be overlaid on the image content
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraIsAeWinVisible(
    CameraHandle    hCamera,
    BOOL *          pbIsVisible
);


///     CameraSetAeWinVisible
///
/// \brief Sets the display status of the auto exposure reference window
/// \param [in] hCamera Camera handle
/// \param [in] bIsVisible TRUE, set to show; FALSE, not show
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note When the window state is set to display, after calling @link #CameraImageOverlay @endlink, the window position can be superimposed on the image in a rectangular manner
///
CameraSdkStatus __stdcall CameraSetAeWinVisible(
    CameraHandle    hCamera,
    BOOL            bIsVisible
);


///     CameraGetAeWindow
///
/// \brief Get the position of the auto exposure reference window
/// \param [in] hCamera Camera handle
/// \param [out] piHOff Returns the abscissa of the upper-left corner of the window
/// \param [out] piVOff Returns the ordinate value in the upper left corner of the window
/// \param [out] piWidth Returns the width of the window
/// \param [out] piHeight Returns the height of the window
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetAeWindow(
    CameraHandle    hCamera,
    INT *           piHOff,
    INT *           piVOff,
    INT *           piWidth,
    INT *           piHeight
);


///     CameraSetAeWindow
///
/// \brief Set the reference window for auto exposure
/// \param [in] hCamera Camera handle
/// \param [in] iHOff The horizontal axis of the window in the upper left corner
/// \param [in] iVOff The ordinate of the top left corner of the window
/// \param [in] iWidth width of window
/// \param [in] iHeight Height of window
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note If iHOff, iVOff, iWidth, and iHeight are all 0, the window is set to the center 1/2 size for each resolution. It can follow changes as the resolution changes
/// \note If the window position range determined by iHOff, iVOff, iWidth, and iHeight exceeds the current resolution range, the centered 1/2 size window is automatically used
///
CameraSdkStatus __stdcall CameraSetAeWindow(
    CameraHandle    hCamera,
    int             iHOff,
    int             iVOff,
    int             iWidth,
    int             iHeight
);


///     CameraSetMirror
///
/// \brief Set image mirroring operation. The mirroring operation is divided into horizontal and vertical directions
/// \param [in] hCamera Camera handle
/// \param [in] iDir Indicates the direction of the mirror. 0 means horizontal direction; 1 means vertical direction
/// \param [in] bEnable TRUE to enable mirroring; FALSE to disable mirroring
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetMirror(
    CameraHandle    hCamera,
    int             iDir,
    BOOL            bEnable
);


///     CameraGetMirror
///
/// \brief Get the mirrored state of the image
/// \param [in] hCamera Camera handle
/// \param [in] iDir Indicates the mirroring direction to be obtained. 0 means horizontal direction; 1 means vertical direction
/// \param [out] pbEnable Returns TRUE, indicating that the direction mirror image of iDir is enabled
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetMirror(
    CameraHandle    hCamera,
    int             iDir,
    BOOL *          pbEnable
);


///     CameraSetHardwareMirror
///
/// \brief Set up the hardware mirror. Divided into two directions, horizontal and vertical. (Only some GigE and U3 cameras support this feature)
/// \param [in] hCamera Camera handle
/// \param [in] iDir Indicates the direction of the mirror. 0 means horizontal direction; 1 means vertical direction
/// \param [in] bEnable TRUE to enable mirroring; FALSE to disable mirroring
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetHardwareMirror(
	CameraHandle    hCamera,
	int             iDir,
	BOOL            bEnable
);


///
///
/// \brief Get the hardware mirrored state of the image
/// \param [in] hCamera Camera handle
/// \param [in] iDir Indicates the mirroring direction to be obtained. 0 means horizontal direction; 1 means vertical direction
/// \param [out] pbEnable Returns TRUE, indicating that the direction mirror image of iDir is enabled
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetHardwareMirror(
	CameraHandle    hCamera,
	int             iDir,
	BOOL *          pbEnable
);


///     CameraSetRotate
///
/// \brief Set image rotation operation
/// \param [in] hCamera Camera handle
/// \param [in] iRot rotation angle (counterclockwise) (0: no rotation 1:90 degrees 2:180 degrees 3:270 degrees)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetRotate(
	CameraHandle    hCamera,
	int             iRot
);


///     CameraGetRotate
///
/// \brief Get the rotation state of the image
/// \param [in] hCamera Camera handle
/// \param [out] iRot Indicates the direction of rotation to get. (Counterclockwise) (0: Do not rotate 1:90 degree 2: 180 degree 3: 270 degree)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetRotate(
	CameraHandle    hCamera,
	int *           iRot
);


///     CameraGetWbWindow
///
/// \brief Get the position of the white balance reference window
/// \param [in] hCamera Camera handle
/// \param [out] PiHOff Returns the top-left abscissa of the reference window
/// \param [out] PiVOff Returns the upper-left ordinate of the reference window
/// \param [out] PiWidth Returns the width of the reference window
/// \param [out] PiHeight Returns the height of the reference window
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetWbWindow(
    CameraHandle    hCamera,
    INT *           PiHOff,
    INT *           PiVOff,
    INT *           PiWidth,
    INT *           PiHeight
);


///     CameraSetWbWindow
///
/// \brief Sets the position of the white balance reference window
/// \param [in] hCamera Camera handle
/// \param [in] iHOff The upper left corner of the reference window
/// \param [in] iVOff The upper left ordinate of the reference window
/// \param [in] iWidth Width of the reference window
/// \param [in] iHeight The height of the reference window
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetWbWindow(
    CameraHandle    hCamera,
    INT             iHOff,
    INT             iVOff,
    INT             iWidth,
    INT             iHeight
);


///     CameraIsWbWinVisible
///
/// \brief Get the display status of the white balance window
/// \param [in] hCamera Camera handle
/// \param [out] pbShow returns TRUE, indicating that the window is visible
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraIsWbWinVisible(
    CameraHandle    hCamera,
    BOOL *          pbShow
);


///     CameraSetWbWinVisible
///
/// \brief Sets the display status of the white balance window
/// \param [in] hCamera Camera handle
/// \param [in] bShow TRUE indicates that the setting is visible
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note After calling @link #CameraImageOverlay @endlink, the white balance reference window's position will be overlaid on the image content in a rectangular manner
///
CameraSdkStatus __stdcall CameraSetWbWinVisible(
    CameraHandle    hCamera,
    BOOL            bShow
);


///     CameraImageOverlay
///
/// \brief The cross-line, white balance reference window, auto exposure reference window, etc. are superimposed on the input image data. Only crosshairs and reference windows that are set to visible can be overlaid.
/// \param [in] hCamera Camera handle
/// \param [in] pRgbBuffer image data buffer
/// \param [in] pFrInfo Frame header information for the image
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImageOverlay(
    CameraHandle    hCamera,
    BYTE *          pRgbBuffer,
    tSdkFrameHead * pFrInfo
);


///     CameraSetCrossLine
///
/// \brief Set the parameters for the specified crosshairs
/// \param [in] hCamera Camera handle
/// \param [in] iLine Indicates the status of the first few crosshairs. The range is [0,8] for a total of 9
/// \param [in] x The abscissa of the crosshair center position
/// \param [in] y The y-axis value of the crosshair center position
/// \param [in] uColor The color of the crosshair in the format (R|(G<<8)|(B<<16))
/// \param [in] bVisible Crosshair display status. TRUE, indicates the display
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Only crosshairs set to display state will be superimposed on the image after calling @link #CameraImageOverlay @endlink
///
CameraSdkStatus __stdcall CameraSetCrossLine(
    CameraHandle    hCamera,
    int             iLine,
    INT             x,
    INT             y,
    UINT            uColor,
    BOOL            bVisible
);


///     CameraGetCrossLine
///
/// \brief Get the status of the designated crosshairs
/// \param [in] hCamera Camera handle
/// \param [in] iLine Indicates the status of the first few crosshairs to get. The range is [0,8] for a total of 9
/// \param [out] px Returns the abscissa of the center of the crosshair
/// \param [out] py Returns the abscissa of the center of the crosshair
/// \param [out] pcolor Returns the color of this crosshair in the format (R|(G<<8)|(B<<16))
/// \param [out] pbVisible returns TRUE, indicating that the crosshairs are visible
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetCrossLine(
    CameraHandle    hCamera,
    INT             iLine,
    INT *           px,
    INT *           py,
    UINT *          pcolor,
    BOOL *          pbVisible
);


///
///
/// \brief Get the camera's characteristic description structure. This structure contains range information of various parameters that the camera can set. Determines the return of parameters for related functions and can also be used to dynamically create camera configuration interfaces.
/// \param [in] hCamera Camera handle
/// \param [out] pCameraInfo Returns the structure of the camera's property description
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetCapability(
    CameraHandle            hCamera,
    tSdkCameraCapbility *   pCameraInfo
);


///     CameraGetCapabilityEx
///
/// @brief
/// @param sDeviceModel
/// @param pCameraInfo
/// @param hCameraHandle
/// @return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetCapabilityEx(
    char *                  sDeviceModel,
    tSdkCameraCapbility *   pCameraInfo,
    PVOID                   hCameraHandle
);


///     CameraWriteSN
///
/// \brief Set the camera's serial number
/// \param [in] hCamera Camera handle
/// \param [in] pbySN The buffer for the serial number
/// \param [in] iLevel The serial number to be set can only be 1 or 2
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Our company camera serial number is divided into 3 levels. Level 0 is our company's custom camera serial number, which has been set at the factory and cannot be modified. Levels 1 and 2 are reserved for secondary development. Each serial number length is 32 bytes.
///
CameraSdkStatus __stdcall CameraWriteSN(
    CameraHandle    hCamera,
    BYTE *          pbySN,
    INT             iLevel
);


///     CameraReadSN
///
/// \brief Reads the camera's assigned level serial number
/// \param [in] hCamera Camera handle
/// \param [in] pbySN The buffer for the serial number
/// \param [in] iLevel The sequence number to read. Can be 0, 1 and 2
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraWriteSN
///
CameraSdkStatus __stdcall CameraReadSN(
    CameraHandle    hCamera,
    BYTE *          pbySN,
    INT             iLevel
);


///     CameraSetTriggerDelayTime
///
/// \brief Set the trigger delay time in hardware trigger mode, in microseconds
/// \param [in] hCamera Camera handle
/// \param [in] uDelayTimeUs Hard trigger delay. Units microseconds
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note When the hard trigger signal arrives, after a specified delay, it begins to capture the image
///
CameraSdkStatus __stdcall CameraSetTriggerDelayTime(
    CameraHandle    hCamera,
    UINT            uDelayTimeUs
);


///     CameraGetTriggerDelayTime
///
/// \brief Get the currently set hard trigger delay time
/// \param [in] hCamera Camera handle
/// \param [out] puDelayTimeUs Returns the delay time in microseconds
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetTriggerDelayTime(
    CameraHandle    hCamera,
    UINT *          puDelayTimeUs
);


///     CameraSetTriggerCount
///
/// \brief Sets the number of trigger frames in the trigger mode. Valid for both software and hardware trigger modes. The default is 1 frame, that is, one trigger signal captures a frame of image.
/// \param [in] hCamera Camera handle
/// \param [in] iCount The number of frames triggered at a time
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetTriggerCount(
    CameraHandle    hCamera,
    INT             iCount
);


///     CameraGetTriggerCount
///
/// \brief Get the number of trigger frames
/// \param [in] hCamera Camera handle
/// \param [out] piCount The number of frames to trigger signal acquisition at one time
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetTriggerCount(
    CameraHandle    hCamera,
    INT *           piCount
);


///     CameraSoftTrigger
///
/// \brief Perform a soft trigger. After execution, the number of frames specified by @link #CameraSetTriggerCount @endlink is triggered
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetTriggerMode
///
CameraSdkStatus __stdcall CameraSoftTrigger(
    CameraHandle    hCamera
);


///     CameraSetTriggerMode
///
/// \brief Set the camera's trigger mode
/// \param [in] hCamera Camera handle
/// \param [in] iModeSel mode selects the index number. 0: continuous acquisition; 1: software trigger; 2: hardware trigger (line scan is frame trigger); 3: line trigger (encoder trigger) (line scan only); 4: conditional line trigger (line scan only);
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetTriggerMode(
    CameraHandle    hCamera,
    int             iModeSel
);


///     CameraGetTriggerMode
///
/// \brief Get the camera's trigger mode
/// \param [in] hCamera Camera handle
/// \param [out] piModeSel Returns the index of the currently selected camera trigger mode
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetTriggerMode(
    CameraHandle    hCamera,
    INT *           piModeSel
);


///     CameraSetStrobeMode
///
/// \brief Set the STROBE signal on the IO pin terminal. This signal can be used for flash control or external mechanical shutter control
/// \param [in] hCamera Camera handle
/// \param [in] iMode strobe mode, refer to @link #emStrobeControl @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraSetStrobeMode(
    CameraHandle    hCamera,
    INT             iMode
);


///     CameraGetStrobeMode
///
/// \brief Gets the mode of the current STROBE signal setting
/// \param [in] hCamera Camera handle
/// \param [out] piMode Return Mode
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraGetStrobeMode(
    CameraHandle    hCamera,
    INT *           piMode
);


///     CameraSetStrobeDelayTime
///
/// \brief When the STROBE signal is in STROBE_SYNC_WITH_TRIG, set its relative trigger signal delay time by this function
/// \param [in] hCamera Camera handle
/// \param [in] uDelayTimeUs Delay time relative to the trigger signal, in units of us. Can be 0, but it cannot be negative
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraSetStrobeDelayTime(
    CameraHandle    hCamera,
    UINT            uDelayTimeUs
);


///     CameraGetStrobeDelayTime
///
/// \brief When the STROBE signal is in STROBE_SYNC_WITH_TRIG, the relative trigger signal delay time is obtained through this function
/// \param [in] hCamera Camera handle
/// \param [out] upDelayTimeUs Returns the delay time in us
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraGetStrobeDelayTime(
    CameraHandle    hCamera,
    UINT *          upDelayTimeUs
);


///     CameraSetStrobePulseWidth
///
/// \brief When the STROBE signal is in STROBE_SYNC_WITH_TRIG, set its pulse width by this function
/// \param [in] hCamera Camera handle
/// \param [in] uTimeUs The width of the pulse in units of time us
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraSetStrobePulseWidth(
    CameraHandle    hCamera,
    UINT            uTimeUs
);


///     CameraGetStrobePulseWidth
///
/// \brief When the STROBE signal is at STROBE_SYNC_WITH_TRIG, its pulse width is obtained by this function
/// \param [in] hCamera Camera handle
/// \param [out] upTimeUs Returns the pulse width. The unit is us
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraGetStrobePulseWidth(
    CameraHandle    hCamera,
    UINT *          upTimeUs
);


///     CameraSetStrobePolarity
///
/// \brief When the STROBE signal is at STROBE_SYNC_WITH_TRIG, the polarity of its active level is set by this function. The default is high active. When the trigger signal arrives, the STROBE signal is pulled high.
/// \param [in] hCamera Camera handle
/// \param [in] uPolarity Polarity of STROBE signal, 0 is active low and 1 is active high. The default is active high
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraSetStrobePolarity(
    CameraHandle    hCamera,
    INT             uPolarity
);


///     CameraGetStrobePolarity
///
/// \brief Obtain the effective polarity of the camera's current STROBE signal. The default is active high
/// \param [in] hCamera Camera handle
/// \param [in] upPolarity Returns the current effective polarity of the STROBE signal
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraGetStrobePolarity(
    CameraHandle    hCamera,
    INT *           upPolarity
);


///     CameraSetExtTrigSignalType
///
/// \brief Set the type of trigger signal outside the camera. Upper edge, lower edge, or high and low level
/// \param [in] hCamera Camera handle
/// \param [in] iType External trigger signal type, refer to @link #emExtTrigSignal @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraSetExtTrigSignalType(
    CameraHandle    hCamera,
    INT             iType
);


///     CameraGetExtTrigSignalType
///
/// \brief Get the type of camera's current external trigger signal
/// \param [in] hCamera Camera handle
/// \param [out] ipType Returns the type of external trigger signal, see @link #emExtTrigSignal @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraGetExtTrigSignalType(
    CameraHandle    hCamera,
    INT *           ipType
);


///     CameraSetExtTrigShutterType
///
/// \brief In the external trigger mode, the camera shutter mode defaults to the standard shutter mode. Part of the rolling shutter CMOS camera supports GRR mode
/// \param [in] hCamera Camera handle
/// \param [in] iType triggers the shutter. Reference @link #emExtTrigShutterMode @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraSetExtTrigShutterType(
    CameraHandle    hCamera,
    INT             iType
);


///     CameraGetExtTrigShutterType
///
/// \brief Get the camera shutter mode in external trigger mode
/// \param [in] hCamera Camera handle
/// \param [out] ipType Returns the currently set external trigger shutter mode.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetExtTrigShutterType
///
CameraSdkStatus __stdcall  CameraGetExtTrigShutterType(
    CameraHandle    hCamera,
    INT *           ipType
);


///     CameraSetExtTrigDelayTime
///
/// \brief Set the delay time of external trigger signal. The default is 0 and the unit is microsecond
/// \param [in] hCamera Camera handle
/// \param [in] uDelayTimeUs Delay time in microseconds. Default is 0
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraSetExtTrigDelayTime(
    CameraHandle    hCamera,
    UINT            uDelayTimeUs
);


///     CameraGetExtTrigDelayTime
///
/// \brief Get the set external trigger signal delay time, the default is 0, the unit is microseconds
/// \param [in] hCamera Camera handle
/// \param [out] upDelayTimeUs trigger delay
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraGetExtTrigDelayTime(
    CameraHandle    hCamera,
    UINT *          upDelayTimeUs
);


///     CameraSetExtTrigBufferedDelayTime
///
/// \brief Set the delay activation time of the external trigger signal. The default is 0, and the unit is microsecond. When the set value uDelayTimeUs is not 0, after the camera receives the external trigger signal, it will delay uDelayTimeUs for several microseconds before performing image capture. And the trigger signal received during the delay period will be buffered, and the buffered signal will also take effect after a delay of uDelayTimeUs (the maximum number of buffers is 128).
/// \param [in] hCamera Camera handle
/// \param [in] uDelayTimeUs Delay time in microseconds. Default is 0
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetExtTrigBufferedDelayTime(
	CameraHandle    hCamera,
	UINT            uDelayTimeUs
);


///     CameraGetExtTrigBufferedDelayTime
///
/// \brief Gets the delay activation time of the external trigger signal. The default is 0 and the unit is microsecond
/// \param [in] hCamera Camera handle
/// \param [out] puDelayTimeUs trigger delay
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetExtTrigBufferedDelayTime(
	CameraHandle    hCamera,
	UINT *          puDelayTimeUs
);


///     CameraSetExtTrigIntervalTime
///
/// \brief Set the interval time of external trigger signal. The default is 0 and the unit is microsecond
/// \param [in] hCamera Camera handle
/// \param [in] uTimeUs Interval time in microseconds. Default is 0
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraSetExtTrigIntervalTime(
	CameraHandle    hCamera,
	UINT            uTimeUs
);


///     CameraGetExtTrigIntervalTime
///
/// \brief Get the set external trigger signal interval time, the default is 0, the unit is microseconds
/// \param [in] hCamera Camera handle
/// \param [out] upTimeUs trigger interval
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraGetExtTrigIntervalTime(
	CameraHandle    hCamera,
	UINT *          upTimeUs
);


///     CameraSetExtTrigJitterTime
///
/// \brief Sets the debouncing time of the trigger signal outside the camera. The default is 0 and the unit is microseconds
/// \param [in] hCamera Camera handle
/// \param [in] uTimeUs time
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraSetExtTrigJitterTime(
    CameraHandle    hCamera,
    UINT            uTimeUs
);


///     CameraGetExtTrigJitterTime
///
/// \brief Get the set camera trigger debounce time, the default is 0. The unit is microseconds
/// \param [in] hCamera Camera handle
/// \param [out] upTimeUs time
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraGetExtTrigJitterTime(
    CameraHandle    hCamera,
    UINT *          upTimeUs
);


///     CameraGetExtTrigCapability
///
/// \brief Get the triggering attribute mask outside the camera
/// \param [in] hCamera Camera handle
/// \param [out] puCapabilityMask Returns the mask of the camera's triggering property, masked by the macro definition at the beginning of EXT_TRIG_MASK_ in CameraDefine.h
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraGetExtTrigCapability(
    CameraHandle    hCamera,
    UINT *          puCapabilityMask
);


///     CameraPauseLevelTrigger
///
/// \brief When the external trigger signal is in level mode, it temporarily stops triggering the camera until the level signal jumps and continues to trigger
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall  CameraPauseLevelTrigger(
	CameraHandle    hCamera
);


///     CameraGetResolutionForSnap
///
/// \brief Get the resolution selection index number in snap mode
/// \param [in] hCamera Camera handle
/// \param [out] pImageResolution Pointer to return the resolution of the snap mode
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetResolutionForSnap(
    CameraHandle            hCamera,
    tSdkImageResolution *   pImageResolution
);


///     CameraSetResolutionForSnap
///
/// \brief Sets the resolution of the camera's output image in snap shot mode
/// \param [in] hCamera Camera handle
/// \param [in] pImageResolution Resolution
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note If pImageResolution->iWidth = pImageResolution->iHeight = 0, then it is set to follow the current preview resolution. The resolution of the captured image will be the same as the currently set preview resolution.
///
CameraSdkStatus __stdcall CameraSetResolutionForSnap(
    CameraHandle            hCamera,
    tSdkImageResolution *   pImageResolution
);


///     CameraCustomizeResolution
///
/// \brief Open the resolution custom panel and configure a custom resolution visually
/// \param [in] hCamera Camera handle
/// \param [out] pImageCustom Returns the custom resolution
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraCustomizeResolution(
    CameraHandle            hCamera,
    tSdkImageResolution *   pImageCustom
);


///     CameraCustomizeReferWin
///
/// \brief Open the reference window custom panel. And through a visual way to get a custom window location. It is generally a reference window with custom white balance and auto exposure
/// \param [in] hCamera Camera handle
/// \param [in] iWinType Purpose of the reference window to be generated. 0: Auto exposure reference window; 1: White balance reference window
/// \param [in] hParent The handle of the window that called the function. Can be NULL
/// \param [out] piHOff Returns the upper left-hand abscissa of the custom window
/// \param [out] piVOff Returns the upper left ordinate of the custom window
/// \param [out] piWidth Returns the width of the custom window
/// \param [out] piHeight Returns the height of the custom window
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraCustomizeReferWin(
    CameraHandle    hCamera,
    INT             iWinType,
    HWND            hParent,
    INT *           piHOff,
    INT *           piVOff,
    INT *           piWidth,
    INT *           piHeight
);


///     CameraShowSettingPage
///
/// \brief Set the camera property configuration window display status
/// \param [in] hCamera Camera handle
/// \param [in] bShow TRUE, show; FALSE, hide
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note You must call @link #CameraCreateSettingPage @endlink successfully to create the camera property configuration window before calling this function to display
///
CameraSdkStatus __stdcall CameraShowSettingPage(
    CameraHandle    hCamera,
    BOOL            bShow
);


///     CameraCreateSettingPage
///
/// \brief Create the camera's property configuration window. Call this function, the SDK will help you create a camera configuration window, eliminating the need to redevelop the camera configuration interface. It is strongly recommended that you use this function to have the SDK create a configuration window for you.
/// \param [in] hCamera Camera handle
/// \param [in] hParent Handle to the main window of the application. Can be NULL
/// \param [in] pWinText string pointer, window title bar
/// \param [in] pCallbackFunc Callback function of window message. The function pointed to by pCallbackFunc will be called when the corresponding event occurs
/// \param [in] pCallbackCtx Additional parameters for the callback function. Can be NULL
/// \param [in] uReserved Reserved. Must be set to 0
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///

CameraSdkStatus __stdcall CameraCreateSettingPage(
    CameraHandle            hCamera,
    HWND                    hParent,
    char *                  pWinText,
    CAMERA_PAGE_MSG_PROC    pCallbackFunc,
    PVOID                   pCallbackCtx,
    UINT                    uReserved
);


///     CameraCreateSettingPageEx
///
/// \brief Use the default parameters to create the camera's property configuration window
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraCreateSettingPageEx(
    CameraHandle            hCamera
);


///     CameraSetActiveSettingSubPage
///
/// \brief Sets the camera configuration window's activation page. The camera configuration window is composed of multiple sub-pages. This function can set which sub-page is currently active and displayed at the forefront.
/// \param [in] hCamera Camera handle
/// \param [in] index The index number of the subpage. Reference @link #emSdkPropSheetMask @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetActiveSettingSubPage(
    CameraHandle    hCamera,
    INT             index
);


///     CameraSetSettingPageParent
///
/// \brief Sets the camera configuration page to child window style and specifies its parent window
/// \param [in] hCamera Camera handle
/// \param [in] hParentWnd The parent window handle, NULL (0) restores the configuration page to a popup window
/// \param [in] Flags function flag, bit0: Hide title bar, bit1-31: Reserved (must be 0)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetSettingPageParent(
	CameraHandle    hCamera,
	HWND            hParentWnd,
	DWORD			Flags
);


///     CameraGetSettingPageHWnd
///
/// \brief Gets the window handle of the camera configuration page
/// \param [in] hCamera Camera handle
/// \param [out] hWnd Returns the window handle of the configuration page
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetSettingPageHWnd(
	CameraHandle    hCamera,
	HWND *          hWnd
);


///
///
/// \brief Refresh camera configuration page
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraUpdateSettingPage(
	CameraHandle    hCamera
);


///     CameraSpecialControl
///
/// @brief
/// @param hCamera Camera handle
/// @param dwCtrlCode
/// @param dwParam
/// @param lpData
/// @return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSpecialControl(
    CameraHandle    hCamera,
    DWORD           dwCtrlCode,
    DWORD           dwParam,
    LPVOID          lpData
);


///     CameraGetFrameStatistic
///
/// \brief Get the frame rate statistics of the camera, including error frame and frame loss
/// \param [in] hCamera Camera handle
/// \param [out] psFrameStatistic Returns statistics
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetFrameStatistic(
    CameraHandle            hCamera,
    tSdkFrameStatistic *    psFrameStatistic
);


///     CameraSetNoiseFilter
///
/// \brief Enable 2D noise reduction
/// \param [in] hCamera Camera handle
/// \param [in] bEnable TRUE, enable; FALSE, disable
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetNoiseFilter(
    CameraHandle    hCamera,
    BOOL            bEnable
);


///     CameraGetNoiseFilterState
///
/// \brief Get 2D noise reduction enable status
/// \param [in] hCamera Camera handle
/// \param [out] pEnable Returns status. TRUE, to enable
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetNoiseFilterState(
    CameraHandle    hCamera,
    BOOL *          pEnable
);


///     CameraRstTimeStamp
///
/// \brief Resets the time stamp of the image acquisition, starting from 0
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraRstTimeStamp(
    CameraHandle    hCamera
);


///     CameraSaveUserData
///
/// \brief Save user-defined data to the camera's non-volatile memory
/// \param [in] hCamera Camera handle
/// \param [in] uStartAddr Start address, starting from 0
/// \param [in] pbData data buffer pointer
/// \param [in] ilen The length of the write data, ilen + uStartAddr must be less than the maximum length of the user area
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note The maximum length of the user data area that each model of camera may support is different. This length information can be obtained from the device's feature description
///
CameraSdkStatus __stdcall CameraSaveUserData(
    CameraHandle    hCamera,
    UINT            uStartAddr,
    BYTE *          pbData,
    int             ilen
);


///     CameraLoadUserData
///
/// \brief Read user-defined data from the camera's non-volatile memory
/// \param [in] hCamera Camera handle
/// \param [in] uStartAddr Start address, starting from 0
/// \param [out] pbData data buffer pointer
/// \param [in] ilen The length of the data, ilen + uStartAddr must be less than the maximum length of the user area
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraLoadUserData(
    CameraHandle    hCamera,
    UINT            uStartAddr,
    BYTE *          pbData,
    int             ilen
);


///     CameraGetFriendlyName
///
/// \brief Read user-defined device nicknames
/// \param [in] hCamera Camera handle
/// \param [out] pName returns a string that points to the end of 0, the device nickname does not exceed 32 bytes, so the buffer pointed to by this pointer must be greater than or equal to 32 bytes.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetFriendlyName(
  CameraHandle  hCamera,
  char *        pName
);


///     CameraSetFriendlyName
///
/// \brief Set user-defined device nicknames
/// \param [in] hCamera Camera handle
/// \param [in] pName A string that ends with 0, the device nickname does not exceed 32 bytes, so the pointer to the string must be less than or equal to 32 bytes
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetFriendlyName(
  CameraHandle  hCamera,
  char *        pName
);


///     CameraSdkGetVersionString
///
/// \brief Read the SDK version number
/// \param [out] pVersionString Returns the SDK version string. The buffer pointed to by this pointer must be larger than 32 bytes
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSdkGetVersionString(
  char *    pVersionString
);


///     CameraCheckFwUpdate
///
/// @brief
/// @param hCamera Camera handle
/// @param pNeedUpdate
/// @return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraCheckFwUpdate(
  CameraHandle  hCamera,
  BOOL *        pNeedUpdate
);


///     CameraGetFirmwareVersion
///
/// \brief Get the firmware version string
/// \param [in] hCamera Camera handle
/// \param [out] pVersion must point to a buffer larger than 32 bytes and return the firmware version string
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetFirmwareVersion(
    CameraHandle    hCamera,
	char *          pVersion
);


///     CameraGetFirmwareVision
///
/// @brief Same function as CameraGetFirmwareVersion. Version misspelled, reserved for compatibility
/// @param hCamera Camera handle
/// @param pVersion
/// @return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetFirmwareVision(
    CameraHandle    hCamera,
    char *          pVersion
);


///     CameraGetEnumInfo
///
/// \brief Get enumeration information for the specified device
/// \param [in] hCamera Camera handle
/// \param [out] pCameraInfo Returns the enumeration information for the device
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetEnumInfo(
    CameraHandle        hCamera,
    tSdkCameraDevInfo * pCameraInfo
);


///     CameraGetInerfaceVersion
///
/// \brief Get the version of the specified device interface
/// \param [in] hCamera Camera handle
/// \param [out] pVersion points to a buffer larger than 32 bytes and returns the interface version string
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetInerfaceVersion(
    CameraHandle    hCamera,
    char *          pVersion
);


///     CameraSetIOState
///
/// \brief Set the level state of the specified IO. IO is the output IO. The number of programmable output IOs for the camera is determined by @link #tSdkCameraCapbility.iOutputIoCounts @endlink.
/// \param [in] hCamera Camera handle
/// \param [in] iOutputIOIndex IO index, starting from 0
/// \param [in] uState The state to set(GE��SUA: 0(high)  1(low))
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Obsolete, use CameraSetIOStateEx, which has a unified output state value of 1 high and 0 low for all models of cameras
///
CameraSdkStatus __stdcall CameraSetIOState(
    CameraHandle    hCamera,
    INT             iOutputIOIndex,
    UINT            uState
);


///     CameraSetIOStateEx
///
/// \brief Set the level state of the specified IO. IO is the output IO. The number of programmable output IOs for the camera is determined by @link #tSdkCameraCapbility.iOutputIoCounts @endlink.
/// \param [in] hCamera Camera handle
/// \param [in] iOutputIOIndex IO index, starting from 0
/// \param [in] uState The state to set, 1 is high, 0 is low
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetIOStateEx(
	CameraHandle    hCamera,
	INT             iOutputIOIndex,
	UINT            uState
);


///     CameraGetOutPutIOState
///
/// \brief Read the level state of the specified IO. IO is the output IO. The number of programmable output IOs for the camera is determined by @link #tSdkCameraCapbility.iOutputIoCounts @endlink.
/// \param [in] hCamera Camera handle
/// \param [in] iOutputIOIndex IO index, starting from 0
/// \param [out] puState return IO state(GE��SUA: 0(high)  1(low))
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Obsolete, use CameraGetOutPutIOStateEx, which has a unified output state value of 1 high and 0 low for all models of cameras
///
CameraSdkStatus __stdcall CameraGetOutPutIOState(
	CameraHandle    hCamera,
	INT             iOutputIOIndex,
	UINT *          puState
);


///     CameraGetOutPutIOStateEx
///
/// \brief Read the level state of the specified IO. IO is the output IO. The number of programmable output IOs for the camera is determined by @link #tSdkCameraCapbility.iOutputIoCounts @endlink.
/// \param [in] hCamera Camera handle
/// \param [in] iOutputIOIndex IO index, starting from 0
/// \param [out] puState return IO state, 1 is high, 0 is low
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetOutPutIOStateEx(
	CameraHandle    hCamera,
	INT             iOutputIOIndex,
	UINT *          puState
);


///     CameraGetIOState
///
/// \brief Read the level state of the specified IO, IO is input type IO, the number of programmable output IOs that the camera reserves is decided by @link #tSdkCameraCapbility.iInputIoCounts @endlink.
/// \param [in] hCamera Camera handle
/// \param [in] iInputIOIndex IO index, starting from 0
/// \param [out] puState returns IO state(GE��SUA: 0(high)  1(low))
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Obsolete, use CameraGetIOStateEx, which has a unified input state value of 1 high and 0 low for all models of cameras
///
CameraSdkStatus __stdcall CameraGetIOState(
    CameraHandle    hCamera,
    INT             iInputIOIndex,
    UINT *          puState
);


///     CameraGetIOStateEx
///
/// \brief Read the level state of the specified IO, IO is input type IO, the number of programmable output IOs that the camera reserves is decided by @link #tSdkCameraCapbility.iInputIoCounts @endlink.
/// \param [in] hCamera Camera handle
/// \param [in] iInputIOIndex IO index, starting from 0
/// \param [out] puState returns IO state, 1 is high, 0 is low
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetIOStateEx(
	CameraHandle    hCamera,
	INT             iInputIOIndex,
	UINT *          puState
);


///     CameraSetInPutIOMode
///
/// \brief Set the input IO mode
/// \param [in] hCamera Camera handle
/// \param [in] iInputIOIndex IO index, starting from 0
/// \param [in] iMode IO mode, reference @link #emCameraGPIOMode @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetInPutIOMode(
	CameraHandle    hCamera,
	INT             iInputIOIndex,
	INT			    iMode
);


///     CameraGetInPutIOMode
///
/// \brief Get the input IO mode
/// \param [in] hCamera Camera handle
/// \param [in] iInputIOIndex IO index, starting from 0
/// \param [out] piMode IO mode, reference @link #emCameraGPIOMode @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetInPutIOMode(
	CameraHandle    hCamera,
	INT				iInputIOIndex,
	INT *			piMode
);


///     CameraSetOutPutIOMode
///
/// \brief Set the output IO mode
/// \param [in] hCamera Camera handle
/// \param [in] iOutputIOIndex IO index, starting from 0
/// \param [in] iMode IO mode, reference @link #emCameraGPIOMode @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetOutPutIOMode(
	CameraHandle    hCamera,
	INT             iOutputIOIndex,
	INT			    iMode
);


///     CameraGetOutPutIOMode
///
/// \brief Get the output IO mode
/// \param [in] hCamera Camera handle
/// \param [in] iOutputIOIndex IO index, starting from 0
/// \param [out] piMode IO mode, reference @link #emCameraGPIOMode @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetOutPutIOMode(
	CameraHandle    hCamera,
	INT             iOutputIOIndex,
	INT *		    piMode
);


///     CameraGetInPutIOModeCapbility
///
/// \brief Get the mode support capability of the input IO
/// \param [in] hCamera Camera handle
/// \param [in] iInputIOIndex IO index, starting from 0
/// \param [out] piCapbility IO mode support bit mask
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetInPutIOModeCapbility(
	CameraHandle    hCamera,
	INT				iInputIOIndex,
	UINT *			piCapbility
);


///     CameraGetOutPutIOModeCapbility
///
/// \brief Get the mode support capability of the output IO
/// \param [in] hCamera Camera handle
/// \param [in] iOutputIOIndex IO index, starting from 0
/// \param [out] piCapbility IO mode support bit mask
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetOutPutIOModeCapbility(
	CameraHandle    hCamera,
	INT				iOutputIOIndex,
	UINT *			piCapbility
);


///     CameraSetOutPutPWM
///
/// \brief Set the PWM output parameters
/// \param [in] hCamera Camera handle
/// \param [in] iOutputIOIndex IO index, starting from 0
/// \param [in] iCycle Cycle of PWM, unit (us)
/// \param [in] uDuty Occupancy ratio, 1% ~ 99%
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetOutPutPWM(
	CameraHandle    hCamera,
	INT             iOutputIOIndex,
	UINT		    iCycle,
	UINT		    uDuty
);


///     CameraSetRotaryEncDir
///
/// \brief Set the effective direction of the rotary encoder
/// \param [in] hCamera Camera handle
/// \param [in] dir Valid direction (0: Both positive and negative are valid    1: Clockwise (A phase leads B)    2: Counterclockwise)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetRotaryEncDir(
	CameraHandle    hCamera,
	INT				dir
);


///     CameraGetRotaryEncDir
///
/// \brief Get the effective direction of the rotary encoder
/// \param [in] hCamera Camera handle
/// \param [out] dir Valid direction (0: Both positive and negative are valid    1: Clockwise (A phase leads B)    2: Counterclockwise)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetRotaryEncDir(
	CameraHandle    hCamera,
	INT *			dir
);


///     CameraSetRotaryEncFreq
///
/// \brief Set the frequency of the rotary encoder
/// \param [in] hCamera Camera handle
/// \param [in] mul frequency multiplier
/// \param [in] div frequency division
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetRotaryEncFreq(
	CameraHandle    hCamera,
	INT             mul,
	INT             div
);


///     CameraGetRotaryEncFreq
///
/// \brief Get the frequency of the rotary encoder
/// \param [in] hCamera Camera handle
/// \param [out] mul frequency multiplier
/// \param [out] div frequency division
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetRotaryEncFreq(
	CameraHandle    hCamera,
	INT *		    mul,
	INT *		    div
);


///     CameraSetInPutIOFormat
///
/// \brief Set the input IO format
/// \param [in] hCamera Camera handle
/// \param [in] iInputIOIndex IO index, starting from 0
/// \param [in] iFormat IO format, reference @link #emCameraGPIOFormat @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetInPutIOFormat(
	CameraHandle    hCamera,
	INT         iInputIOIndex,
	INT			iFormat
);


///     CameraGetInPutIOFormat
///
/// \brief Get the input IO format
/// \param [in] hCamera Camera handle
/// \param [in] iInputIOIndex IO index, starting from 0
/// \param [out] piFormat IO format, reference @link #emCameraGPIOFormat @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetInPutIOFormat(
	CameraHandle    hCamera,
	INT				iInputIOIndex,
	INT *			piFormat
);


///     CameraSetOutPutIOFormat
///
/// \brief Set the output IO format
/// \param [in] hCamera Camera handle
/// \param [in] iOutputIOIndex IO index, starting from 0
/// \param [in] iFormat IO format, reference @link #emCameraGPIOFormat @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetOutPutIOFormat(
	CameraHandle    hCamera,
	INT             iOutputIOIndex,
	INT			    iFormat
);


///     CameraGetOutPutIOFormat
///
/// \brief Get the output IO format
/// \param [in] hCamera Camera handle
/// \param [in] iOutputIOIndex IO index, starting from 0
/// \param [out] piFormat IO format, reference @link #emCameraGPIOFormat @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetOutPutIOFormat(
	CameraHandle    hCamera,
	INT				iOutputIOIndex,
	INT *			piFormat
);


///     CameraGetInPutIOFormatCapbility
///
/// \brief Get the format support capability of the input IO
/// \param [in] hCamera Camera handle
/// \param [in] iInputIOIndex IO index, starting from 0
/// \param [out] piCapbility IO format support bit mask
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetInPutIOFormatCapbility(
	CameraHandle    hCamera,
	INT				iInputIOIndex,
	UINT *			piCapbility
);


///     CameraGetOutPutIOFormatCapbility
///
/// \brief Get the format support capability of the output IO
/// \param [in] hCamera Camera handle
/// \param [in] iOutputIOIndex IO index, starting from 0
/// \param [out] piCapbility IO format support bit mask
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetOutPutIOFormatCapbility(
	CameraHandle    hCamera,
	INT				iOutputIOIndex,
	UINT *			piCapbility
);


///     CameraSetAeAlgorithm
///
/// \brief The algorithm selected when setting up the automatic exposure, different algorithms are suitable for different scenes
/// \param [in] hCamera Camera handle
/// \param [in] iIspProcessor Select the object to execute the algorithm, refer to @link #emSdkIspProcessor @endlink
/// \param [in] iAeAlgorithmSel The algorithm number to select. From 0, the maximum value is determined by @link #tSdkCameraCapbility.iAeAlmSwDesc @endlink and @link #tSdkCameraCapbility.iAeAlmHdDesc @endlink.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetAeAlgorithm(
    CameraHandle    hCamera,
    INT             iIspProcessor,
    INT             iAeAlgorithmSel
);


///     CameraGetAeAlgorithm
///
/// \brief Get the current auto exposure selected algorithm
/// \param [in] hCamera Camera handle
/// \param [in] iIspProcessor Select the object to execute the algorithm, refer to @link #emSdkIspProcessor @endlink
/// \param [out] piAlgorithmSel Returns the currently selected algorithm number
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetAeAlgorithm(
    CameraHandle    hCamera,
    INT             iIspProcessor,
    INT *           piAlgorithmSel
);


///     CameraSetBayerDecAlgorithm
///
/// \brief Set Bayer data to color algorithm
/// \param [in] hCamera Camera handle
/// \param [in] iIspProcessor Select the object to execute the algorithm, refer to @link #emSdkIspProcessor @endlink
/// \param [in] iAlgorithmSel The algorithm number to select. From 0, the maximum value is determined by tSdkCameraCapbility.iBayerDecAlmSwDesc and tSdkCameraCapbility.iBayerDecAlmHdDesc
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetBayerDecAlgorithm(
    CameraHandle    hCamera,
    INT             iIspProcessor,
    INT             iAlgorithmSel
);


///     CameraGetBayerDecAlgorithm
///
/// \brief Get the algorithm chosen by Bayer data to color
/// \param [in] hCamera Camera handle
/// \param [in] iIspProcessor Select the object to execute the algorithm, refer to @link #emSdkIspProcessor @endlink
/// \param [in] piAlgorithmSel Returns the currently selected algorithm number
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetBayerDecAlgorithm(
    CameraHandle    hCamera,
    INT             iIspProcessor,
    INT *           piAlgorithmSel
);


///     CameraSetIspProcessor
///
/// \brief Sets the algorithm execution object of the image processing unit. The algorithm is executed by the PC or the camera. When executed by the camera, the CPU usage of the PC is reduced
/// \param [in] hCamera Camera handle
/// \param [in] iIspProcessor Reference @link #emSdkIspProcessor @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetIspProcessor(
    CameraHandle    hCamera,
    INT             iIspProcessor
);


///     CameraGetIspProcessor
///
/// \brief Get the image processing unit's algorithm execution object
/// \param [in] hCamera Camera handle
/// \param [out] piIspProcessor returns the selected object
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetIspProcessor(
    CameraHandle    hCamera,
    INT *           piIspProcessor
);


///     CameraSetBlackLevel
///
/// \brief Sets the black level reference of the image. The default value is 0
/// \param [in] hCamera Camera handle
/// \param [in] iBlackLevel The value to set. The range is 0 to 255.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetBlackLevel(
    CameraHandle    hCamera,
    INT             iBlackLevel
);


///     CameraGetBlackLevel
///
/// \brief Get the black level of the image, the default value is 0
/// \param [in] hCamera Camera handle
/// \param [out] piBlackLevel Returns the current black level value. The range is 0 to 255
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetBlackLevel(
    CameraHandle    hCamera,
    INT *           piBlackLevel
);


///     CameraSetWhiteLevel
///
/// \brief Sets the white level reference of the image. The default value is 255
/// \param [in] hCamera Camera handle
/// \param [in] iWhiteLevel The level to be set. The range is 0 to 255
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetWhiteLevel(
    CameraHandle    hCamera,
    INT             iWhiteLevel
);


///     CameraGetWhiteLevel
///
/// \brief Get the white level of the image, the default value is 255
/// \param [in] hCamera Camera handle
/// \param [out] piWhiteLevel Returns the current white level value. The range is 0 to 255
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetWhiteLevel(
    CameraHandle    hCamera,
    INT *           piWhiteLevel
);


///     CameraSetIspOutFormat
///
/// \brief Sets the output format of image processing for the @link #CameraImageProcess @endlink function
/// \param [in] hCamera Camera handle
/// \param [in] uFormat output format
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Supported formats: CAMERA_MEDIA_TYPE_MONO8, CAMERA_MEDIA_TYPE_MONO16, CAMERA_MEDIA_TYPE_RGB8, CAMERA_MEDIA_TYPE_RGBA8, CAMERA_MEDIA_TYPE_BGR8, CAMERA_MEDIA_TYPE_BGRA8
///
CameraSdkStatus __stdcall CameraSetIspOutFormat(
    CameraHandle    hCamera,
    UINT            uFormat
);


///     CameraGetIspOutFormat
///
/// \brief Get output format
/// \param [in] hCamera Camera handle
/// \param [out] puFormat returns the current output format
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSetIspOutFormat
///
CameraSdkStatus __stdcall CameraGetIspOutFormat(
    CameraHandle    hCamera,
    UINT *          puFormat
);


///     CameraGetIspOutDirection
///
/// \brief Get the direction of the output image
/// \param [in] hCamera Camera handle
/// \param [out] piHoriDir returns the horizontal direction   0: from left to right    1: from right to left
/// \param [out] piVertDir returns the vertical direction     0: from top to bottom    1: from bottom to top
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetIspOutDirection(
	CameraHandle    hCamera,
	int *			piHoriDir,
	int *			piVertDir
);


///     CameraGetErrorString
///
/// \brief Get the description string corresponding to the error code
/// \param [in] iStatusCode error code. (Defined in CameraStatus.h)
/// When the return is successful, the first address of the string corresponding to the error code is returned; otherwise it returns NULL
char * __stdcall CameraGetErrorString(
    CameraSdkStatus iStatusCode
);


///     CameraGetImageBufferEx2
///
/// \brief Get a frame of image data. The image obtained by this interface is the processed RGB format
/// \param [in] hCamera Camera handle
/// \param [out] pImageData The buffer to receive the image data, the size must match the format specified by uOutFormat, otherwise the data will overflow
/// \param [in] uOutFormat output format 0:Mono8 1:rgb24 2:rgba32 3:bgr24 4:bgra32
/// \param [out] piWidth Returns the width of the image
/// \param [out] piHeight Returns the height of the image
/// \param [in] wTimes The time-out time for capturing images
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note does not need to call @link #CameraReleaseImageBuffer @endlink
///
CameraSdkStatus __stdcall CameraGetImageBufferEx2(
    CameraHandle    hCamera,
    BYTE *          pImageData,
    UINT            uOutFormat,
    int *           piWidth,
    int *           piHeight,
    UINT            wTimes
);


///     CameraGetImageBufferEx3
///
/// \brief Get a frame of image data. The image obtained by this interface is the processed RGB format
/// \param [in] hCamera Camera handle
/// \param [out] pImageData The buffer to receive the image data, the size must match the format specified by uOutFormat, otherwise the data will overflow
/// \param [in] uOutFormat output format 0:Mono8 1:rgb24 2:rgba32 3:bgr24 4:bgra32
/// \param [out] piWidth Returns the width of the image
/// \param [out] piHeight Returns the height of the image
/// \param [out] puTimeStamp returns image timestamp
/// \param [in] wTimes The time-out time for capturing images
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note does not need to call @link #CameraReleaseImageBuffer @endlink
///
CameraSdkStatus __stdcall CameraGetImageBufferEx3(
	CameraHandle    hCamera,
	BYTE *          pImageData,
	UINT            uOutFormat,
	int *           piWidth,
	int *           piHeight,
	UINT *          puTimeStamp,
	UINT            wTimes
);


///     CameraGetCapabilityEx2
///
/// \brief Get some of the camera's features
/// \param [in] hCamera Camera handle
/// \param [out] pMaxWidth Returns the width of the camera's maximum resolution
/// \param [out] pMaxHeight Returns the height of the camera's maximum resolution
/// \param [out] pbColorCamera Returns whether the camera is a color camera. 1 indicates a color camera, 0 indicates a black and white camera
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetCapabilityEx2(
    CameraHandle    hCamera,
    int *           pMaxWidth,
    int *           pMaxHeight,
    int *           pbColorCamera
);


///     CameraReConnect
///
/// \brief Reconnect the device to manually reconnect after the connection is restored
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \warning The camera automatically enables reconnection by default. Do not call this function in auto reconnect mode. @see CameraSetAutoConnect
///
CameraSdkStatus __stdcall CameraReConnect(
    CameraHandle    hCamera
);


///     CameraConnectTest
///
/// \brief Test camera connection status to detect if camera is dropped
/// \param [in] hCamera Camera handle
/// \return The connection normally returns CAMERA_STATUS_SUCCESS(0). Otherwise it is dropped
CameraSdkStatus __stdcall CameraConnectTest(
    CameraHandle    hCamera
);


///     CameraSetLedEnable
///
/// \brief Set the camera's LED enable status, without the LED's model, this function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] index The index of the LED, starting from 0. If there is only one LED that can control the brightness, this parameter is 0
/// \param [in] enable enable state
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetLedEnable(
	CameraHandle    hCamera,
	int             index,
	BOOL            enable
);


///     CameraGetLedEnable
///
/// \brief Get the camera's LED enable status, without the LED's model, this function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] index The index of the LED, starting from 0. If there is only one LED that can control the brightness, this parameter is 0
/// \param [out] enable Return LED enable status
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetLedEnable(
	CameraHandle    hCamera,
	int             index,
	BOOL *          enable
);


///     CameraSetLedOnOff
///
/// \brief Set the camera's LED switch status, without the LED's model, this function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] index The index of the LED, starting from 0. If there is only one LED that can control the brightness, this parameter is 0
/// \param [in] onoff LED on/off status
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetLedOnOff(
	CameraHandle    hCamera,
	int             index,
	BOOL            onoff
);


///     CameraGetLedOnOff
///
/// \brief Get the camera's LED switch status, without the LED model, this function returns an error code that does not support
/// \param [in] hCamera Camera handle
/// \param [in] index The index of the LED, starting from 0. If there is only one LED that can control the brightness, this parameter is 0
/// \param [out] onoff Returns LED switch status
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetLedOnOff(
	CameraHandle    hCamera,
	int             index,
	BOOL *          onoff
);


///     CameraSetLedDuration
///
/// \brief Set the camera's LED duration, without the LED model, this function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] index The index of the LED, starting from 0. If there is only one LED that can control the brightness, this parameter is 0
/// \param [in] duration LED duration in milliseconds
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetLedDuration(
	CameraHandle    hCamera,
	int             index,
	UINT            duration
);


///     CameraGetLedDuration
///
/// \brief Get the camera's LED duration, without the LED model, this function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] index The index of the LED, starting from 0. If there is only one LED that can control the brightness, this parameter is 0
/// \param [out] duration Returns the LED duration in milliseconds
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetLedDuration(
	CameraHandle    hCamera,
	int             index,
	UINT *          duration
);


///     CameraSetLedBrightness
///
/// \brief Set the camera's LED brightness, without the LED model, this function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] index The index of the LED, starting from 0. If there is only one LED that can control the brightness, this parameter is 0
/// \param [in] uBrightness LED brightness value, range 0 to 255. 0 means off, 255 brightest
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetLedBrightness(
    CameraHandle    hCamera,
    int             index,
    UINT            uBrightness
);


///     CameraGetLedBrightness
///
/// \brief Get the camera's LED brightness, without the LED model, this function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] index The index of the LED, starting from 0. If there is only one LED that can control the brightness, this parameter is 0
/// \param [out] uBrightness Returns the LED brightness value in the range 0 to 255. 0 means off, 255 is the brightest
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetLedBrightness(
    CameraHandle    hCamera,
    int             index,
    UINT *          uBrightness
);


///     CameraEnableTransferRoi
///
/// \brief Enables or disables the camera's multi-zone transfer function. For models without this function, this function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] uEnableMask Area enable mask. The corresponding bit is 1 to enable. 0 is prohibited. Currently, the SDK supports four editable regions. The index range is 0 to 3, that is, bit0, bit1, bit2, and bit3 control the enabling status of the four regions
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note This function is mainly used to split the entire picture collected on the camera side and only transmit specified multiple areas to increase the transmission frame rate. After multiple areas are transferred to the PC, they will be automatically spliced into an entire frame. Parts that have not been transmitted will be filled with black
///
CameraSdkStatus __stdcall CameraEnableTransferRoi(
    CameraHandle    hCamera,
    UINT            uEnableMask
);


///     CameraGetTransferRoiEnable
///
/// \brief Get the multi-region transmission enable status of the camera
/// \param [in] hCamera Camera handle
/// \param [out] puEnableMask Get area enable mask. The corresponding bit is 1 to enable. 0 is prohibited. Currently, the SDK supports four editable regions. The index range is 0 to 3, that is, bit0, bit1, bit2, and bit3 control the enabling status of the four regions
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetTransferRoiEnable(
	CameraHandle    hCamera,
	UINT *          puEnableMask
);


///     CameraSetTransferRoi
///
/// \brief Sets the clipping area for camera transmission. On the camera side, after the image is captured from the sensor, it will be cropped to the specified area for transmission. This function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] index The index number of the ROI region, starting at 0
/// \param [in] X1 The X coordinate of the upper left corner of ROI area
/// \param [in] Y1 The Y coordinate of the upper left corner of ROI area
/// \param [in] X2 The X coordinate of the lower right corner of ROI area
/// \param [in] Y2 The Y coordinate of the lower right corner of ROI area
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetTransferRoi(
    CameraHandle    hCamera,
    int             index,
    UINT            X1,
    UINT            Y1,
    UINT            X2,
    UINT            Y2
);


///     CameraGetTransferRoi
///
/// \brief Get the cropped area of the camera transmission. On the camera side, after the image is captured from the sensor, it will be cropped to the specified area for transmission. This function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] index The index number of the ROI region, starting at 0
/// \param [out] pX1 Returns the X coordinate of the upper left corner of the ROI area
/// \param [out] pY1 Returns the Y coordinate of the upper left corner of the ROI area
/// \param [out] pX2 Returns the X coordinate of the lower right corner of the ROI area
/// \param [out] pY2 Returns the Y coordinate of the lower right corner of the ROI area
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetTransferRoi(
    CameraHandle    hCamera,
    int             index,
    UINT *          pX1,
    UINT *          pY1,
    UINT *          pX2,
    UINT *          pY2
);


///     CameraAlignMalloc
///
/// \brief Apply for an aligned memory space. The function is similar to malloc, but the returned memory is aligned with the number of bytes specified by align
/// \param [in] size Size of the space
/// \param [in] align The number of aligned bytes
/// \return Successful a non-zero value is returned indicating the first address of the memory. Fails to return NULL
/// \note Memory allocated must be freed using @link #CameraAlignFree @endlink
///
BYTE * __stdcall CameraAlignMalloc(
    int size,
    int align
);


///     CameraAlignFree
///
/// \brief Releases the memory space allocated by the @link #CameraAlignMalloc @endlink function
/// \param [in] membuffer memory address
///
void __stdcall CameraAlignFree(
    BYTE *  membuffer
);


///     CameraSetAutoConnect
///
/// \brief Enables or disables automatic reconnection. The default is enabled
/// \param [in] hCamera Camera handle
/// \param [in] bEnable Enables the camera to reconnect. When TRUE, the SDK automatically detects if the camera is dropped and reconnects itself after disconnection.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetAutoConnect(
    CameraHandle    hCamera,
    BOOL            bEnable
);


///     CameraGetAutoConnect
///
/// \brief Get Automatic Reconnect Enable Status
/// \param [in] hCamera Camera handle
/// \param [out] pbEnable Returns the camera's auto reconnect status
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetAutoConnect(
    CameraHandle    hCamera,
    BOOL *          pbEnable
);


///     CameraGetReConnectCounts
///
/// \brief Get the number of times the camera automatically reconnects, provided @link #CameraSetAutoConnect @endlink enables automatic camera reconnection. The default is enabled
/// \param [in] hCamera Camera handle
/// \param [out] puCounts returns the number of automatic reconnections
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetReConnectCounts(
    CameraHandle    hCamera,
    UINT *          puCounts
);


///     CameraSetSingleGrabMode
///
/// \brief Enables or disables single-frame crawl mode, which is disabled by default. (This function is only supported by USB2.0 camera)
/// \param [in] hCamera Camera handle
/// \param [in] bEnable enables single-frame mode
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Whenever a frame is successfully captured, the SDK enters a pause state, so that it no longer occupies the USB bandwidth. It is mainly used in scenes where multiple cameras take pictures
///
CameraSdkStatus __stdcall CameraSetSingleGrabMode(
    CameraHandle    hCamera,
    BOOL            bEnable
);


///     CameraGetSingleGrabMode
///
/// \brief Get the camera's single frame capture enable status
/// \param [in] hCamera Camera handle
/// \param [out] pbEnable Returns the camera's single frame capture mode enable status
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetSingleGrabMode(
    CameraHandle    hCamera,
    BOOL *          pbEnable
);


///     CameraRestartGrab
///
/// \brief When the camera is in the single frame capture mode, the SDK will enter a pause state after successfully capturing a frame. Calling this function will cause the SDK to exit the pause state and start to grab the next frame
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraRestartGrab(
    CameraHandle    hCamera
);


///     CameraEvaluateImageDefinition
///
/// \brief Image clarity assessment
/// \param [in] hCamera Camera handle
/// \param [in] iAlgorithSel The currently used evaluation algorithm, see @link emEvaluateDefinitionAlgorith @endlink
/// \param [in] pbyIn The buffer address of the input image data. Cannot be NULL
/// \param [in] pFrInfo input image frame header information
/// \param [out] DefinitionValue Returns the sharpness value (greater the clearer)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraEvaluateImageDefinition(
	CameraHandle    hCamera,
	INT				iAlgorithSel,
	BYTE *          pbyIn,
	tSdkFrameHead * pFrInfo,
	double *		DefinitionValue
	);


///     CameraDrawText
///
/// \brief Draw text in the input image data
/// \param [inout] pRgbBuffer image data buffer
/// \param [in] pFrInfo frame header information
/// \param [in] pFontFileName font file name
/// \param [in] FontWidth font width
/// \param [in] FontHeight font height
/// \param [in] pText Text to output
/// \param [in] Left text output rectangle
/// \param [in] Top text output rectangle
/// \param [in] Width Output rectangle of text
/// \param [in] Height the output rectangle of the text
/// \param [in] TextColor Text Color RGB
/// \param [in] uFlags output flags, as defined in @link #emCameraDrawTextFlags @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraDrawText(
	BYTE *          pRgbBuffer,
	tSdkFrameHead * pFrInfo,
	char const *	pFontFileName,
	UINT			FontWidth,
	UINT			FontHeight,
	char const *	pText,
	INT				Left,
	INT				Top,
	UINT			Width,
	UINT			Height,
	UINT			TextColor,
	UINT			uFlags
);


///     CameraGigeEnumerateDevice
///
/// \brief Enumerates GIGE devices from the specified IP and builds a device list (applicable when the camera and computer are not on the same network segment)
/// \param [in] ppIpList target IP
/// \param [in] numIp number of target IPs
/// \param [out] pCameraList Device list array pointer
/// \param [inout] piNums The number of pointers to the device, the number of elements passed to the pCameraList array at the time of the call. When the function returns, the number of devices actually found is saved
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \warning piNums The value pointed to must be initialized and does not exceed the number of pCameraList array elements, otherwise it may cause memory overflow
/// \note The list of returned camera information will be sorted according to acFriendlyName. For example, after changing the two cameras to the names of "Camera1" and "Camera2," the camera named "Camera1" will be in front, and the camera named "Camera2" will be behind the row
///
CameraSdkStatus __stdcall CameraGigeEnumerateDevice(
	char const **       ppIpList,
	int                 numIp,
	tSdkCameraDevInfo * pCameraList,
	int *               piNums
);


///     CameraGigeGetIp
///
/// \brief Get the GIGE camera's IP address
/// \param [in] pCameraInfo camera's device description information can be obtained by @link #CameraEnumerateDevice @endlink function
/// \param [out] CamIp camera IP (Note: must ensure that the incoming buffer is greater than or equal to 16 bytes)
/// \param [out] CamMask camera subnet mask (Note: must ensure that the incoming buffer is greater than or equal to 16 bytes)
/// \param [out] CamGateWay camera gateway (Note: must ensure that the incoming buffer is greater than or equal to 16 bytes)
/// \param [out] EtIp network card IP (Note: must ensure that the incoming buffer is greater than or equal to 16 bytes)
/// \param [out] EtMask subnet mask (Note: must ensure that the incoming buffer is greater than or equal to 16 bytes)
/// \param [out] EtGateWay NIC Gateway (Note: must ensure that the incoming buffer is greater than or equal to 16 bytes)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGigeGetIp(
	tSdkCameraDevInfo * pCameraInfo,
	char *              CamIp,
	char *              CamMask,
	char *              CamGateWay,
	char *              EtIp,
	char *              EtMask,
	char *              EtGateWay
);


///     CameraGigeSetIp
///
/// \brief Set the GIGE camera's IP address
/// \param [in] pCameraInfo camera's device description information can be obtained by @link #CameraEnumerateDevice @endlink function.
/// \param [in] Ip camera IP (eg 192.168.1.100)
/// \param [in] SubMask camera subnet mask (eg 255.255.255.0)
/// \param [in] GateWay Camera Gateway (eg 192.168.1.1)
/// \param [in] bPersistent TRUE: Set camera to fixed IP, FALSE: Set camera to assign IP automatically (ignoring parameters Ip, SubMask, GateWay)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGigeSetIp(
	tSdkCameraDevInfo * pCameraInfo,
	char const *        Ip,
	char const *        SubMask,
	char const *        GateWay,
	BOOL                bPersistent
);


///     CameraGigeGetMac
///
/// \brief Select the LUT table in the preset LUT mode.
/// \param [in] pCameraInfo camera's device description information can be obtained by @link #CameraEnumerateDevice @endlink function.
/// \param [out] CamMac camera MAC (Note: must ensure that the incoming buffer is greater than or equal to 18 bytes)
/// \param [out] EtMac network card MAC (Note: must ensure that the incoming buffer is greater than or equal to 18 bytes)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code .
CameraSdkStatus __stdcall CameraGigeGetMac(
	tSdkCameraDevInfo * pCameraInfo,
	char *              CamMac,
	char *              EtMac
);


///     CameraEnableFastResponse
///
/// \brief Enable quick response
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraEnableFastResponse(
	CameraHandle hCamera
);


///     CameraSetCorrectDeadPixel
///
/// \brief Enable dead pixel correction
/// \param [in] hCamera Camera handle
/// \param [in] bEnable TRUE: Enable dead pixel correction FALSE: Turn off dead pixel correction
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetCorrectDeadPixel(
	CameraHandle    hCamera,
	BOOL            bEnable
);


///     CameraGetCorrectDeadPixel
///
/// \brief Get dead pixel correction enabled
/// \param [in] hCamera Camera handle
/// \param [out] pbEnable Returns enable state
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetCorrectDeadPixel(
	CameraHandle    hCamera,
	BOOL *          pbEnable
);


///     CameraFlatFieldingCorrectSetEnable
///
/// \brief Enable flat field correction
/// \param [in] hCamera Camera handle
/// \param [in] bEnable TRUE: Enable flat field correction FALSE: Turn off flat field correction
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraFlatFieldingCorrectSetEnable(
	CameraHandle    hCamera,
	BOOL            bEnable
);


///     CameraFlatFieldingCorrectGetEnable
///
/// \brief Get Plane Correction Enable Status
/// \param [in] hCamera Camera handle
/// \param [out] pbEnable Returns enable state
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraFlatFieldingCorrectGetEnable(
	CameraHandle    hCamera,
	BOOL *          pbEnable
);


///     CameraFlatFieldingCorrectSetParameter
///
/// \brief Set flat field correction parameters
/// \param [in] hCamera Camera handle
/// \param [in] pDarkFieldingImage dark field image
/// \param [in] pDarkFieldingFrInfo dark field image information
/// \param [in] pLightFieldingImage Brightfield image
/// \param [in] pLightFieldingFrInfo Brightfield image information
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraFlatFieldingCorrectSetParameter(
	CameraHandle            hCamera,
	BYTE const *            pDarkFieldingImage,
	tSdkFrameHead const *   pDarkFieldingFrInfo,
	BYTE const *            pLightFieldingImage,
	tSdkFrameHead const *   pLightFieldingFrInfo
);


///     CameraFlatFieldingCorrectSetParameterEx
///
/// \brief Set flat field correction parameters
/// \param [in] hCamera Camera handle
/// \param [in] pDarkFieldingImage dark field image
/// \param [in] pDarkFieldingFrInfo dark field image information
/// \param [in] pLightFieldingImage Brightfield image
/// \param [in] pLightFieldingFrInfo Brightfield image information
/// \param [in] pRefRegion reference region (the brightness average is used as the target brightness of the flat field, NULL represents the center region of the reference image)
/// \param [in] pActRegion Action area (the flat field acts on this area, NULL means the whole picture)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraFlatFieldingCorrectSetParameterEx(
	CameraHandle            hCamera,
	BYTE const *            pDarkFieldingImage,
	tSdkFrameHead const *   pDarkFieldingFrInfo,
	BYTE const *            pLightFieldingImage,
	tSdkFrameHead const *   pLightFieldingFrInfo,
	tSdkRect const *        pRefRegion,
	tSdkRect const *        pActRegion
);


///     CameraFlatFieldingCorrectGetParameterState
///
/// \brief Get status of flat field correction parameters
/// \param [in] hCamera Camera handle
/// \param [out] pbValid Return whether the parameter is valid
/// \param [out] pFilePath Returns the path of the parameter file
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraFlatFieldingCorrectGetParameterState(
	CameraHandle    hCamera,
	BOOL *          pbValid,
	char *          pFilePath
);


///     CameraFlatFieldingCorrectSaveParameterToFile
///
/// \brief Save flat correction parameters to file
/// \param [in] hCamera Camera handle
/// \param [in] pszFileName file path
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraFlatFieldingCorrectSaveParameterToFile(
	CameraHandle    hCamera,
	char const *    pszFileName
);


///     CameraFlatFieldingCorrectLoadParameterFromFile
///
/// \brief Load flat field correction parameters from file
/// \param [in] hCamera Camera handle
/// \param [in] pszFileName file path
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraFlatFieldingCorrectLoadParameterFromFile(
	CameraHandle    hCamera,
	char const *    pszFileName
);


///     CameraFlatFieldingCorrectGetCoefficients
///
/// \brief Get the correction coefficient of the flat field
/// \param [in] hCamera The handle of the camera
/// \param [out] pCoefficients coefficients (NULL can be passed in when only getting the number of coefficients)
/// \param [inout] pNumCoefficient number of coefficients (when passed in, it represents the size of pCoefficients, and when returned, it represents the number of coefficients obtained)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraFlatFieldingCorrectGetCoefficients(
	CameraHandle    hCamera,
	float *         pCoefficients,
	int *           pNumCoefficient
);


///     CameraFlatFieldingCorrectSetCoefficients
///
/// \brief Set the correction coefficient of the flat field
/// \param [in] hCamera The handle of the camera
/// \param [in] pCoefficients coefficients
/// \param [in] iNumCoefficient number of coefficients
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraFlatFieldingCorrectSetCoefficients(
	CameraHandle    hCamera,
	float *         pCoefficients,
	int             iNumCoefficient
);


///     CameraCommonCall
///
/// \brief
/// \param [in] hCamera The handle of the camera
/// \param pszCall
/// \param pszResult
/// \param [in] uResultBufSize
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraCommonCall(
	CameraHandle    hCamera,
	char const *	pszCall,
	char *			pszResult,
	UINT			uResultBufSize
);


///     CameraSetDenoise3DParams
///
/// \brief Set 3D noise reduction parameters
/// \param [in] hCamera Camera handle
/// \param [in] bEnable enable or disable
/// \param [in] nCount Noise reduction using several pictures (2-8)
/// \param [in] Weights Noise reduction weight, such as when using 3 pictures for noise reduction, this parameter can be passed in 3 floating points (0.3, 0.3, 0.4). The weight of the last picture is larger than the first 2 pictures. If you do not need to use weights, then pass this parameter to 0, indicating that all images have the same weight (0.33, 0.33, 0.33)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetDenoise3DParams(
	CameraHandle    hCamera,
	BOOL			bEnable,
	int				nCount,
	float *         Weights
);


///     CameraGetDenoise3DParams
///
/// \brief Get current 3D noise reduction parameters
/// \param [in] hCamera Camera handle
/// \param [out] bEnable enable or disable
/// \param [out] nCount uses several pictures for noise reduction
/// \param [out] bUseWeight whether to use noise reduction weights
/// \param [out] Weights Noise Reduction Weights
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetDenoise3DParams(
	CameraHandle    hCamera,
	BOOL *          bEnable,
	int *           nCount,
	BOOL *          bUseWeight,
	float *         Weights
);


///     CameraManualDenoise3D
///
/// \brief Perform a noise reduction on a group of frames
/// \param [in] InFramesHead input frame header
/// \param [in] InFramesData input frame data
/// \param [in] nCount Number of input frames
/// \param [in] Weights Noise Reduction Weight
/// \param [out] OutFrameHead output frame header
/// \param [out] OutFrameData output frame data
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraManualDenoise3D(
	tSdkFrameHead * InFramesHead,
	BYTE **         InFramesData,
	int				nCount,
	float *         Weights,
	tSdkFrameHead * OutFrameHead,
	BYTE *          OutFrameData
);


///     CameraCustomizeDeadPixels
///
/// \brief Open the dead pixels editing panel
/// \param [in] hCamera Camera handle
/// \param [in] hParent The handle of the window that called the function. Can be NULL
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraCustomizeDeadPixels(
	CameraHandle	hCamera,
	HWND			hParent
);


///     CameraReadDeadPixels
///
/// \brief Reading camera dead pixels
/// \param [in] hCamera Camera handle
/// \param [out] pRows dead pixels y coordinates
/// \param [out] pCols bad x coordinate
/// \param [out] pNumPixel Inputs the size of the row and column buffers. When returned, it indicates the number of bad pixels returned in the row and column buffers.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note When pRows or pCols is NULL, the function will return the camera's current number of dead pixels through pNumPixel
///
CameraSdkStatus __stdcall CameraReadDeadPixels(
	CameraHandle    hCamera,
	USHORT *		pRows,
	USHORT *		pCols,
	UINT *			pNumPixel
);


///     CameraAddDeadPixels
///
/// \brief Add camera dead pixels
/// \param [in] hCamera Camera handle
/// \param [in] pRows dead point y coordinates
/// \param [in] pCols bad x coordinate
/// \param [in] NumPixel Number of dead pixels in row buffer
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraAddDeadPixels(
	CameraHandle    hCamera,
	USHORT *		pRows,
	USHORT *		pCols,
	UINT			NumPixel
);


///     CameraRemoveDeadPixels
///
/// \brief Delete camera specified dead pixels
/// \param [in] hCamera Camera handle
/// \param [in] pRows dead point y coordinates
/// \param [in] pCols bad x coordinate
/// \param [in] NumPixel Number of dead pixels in row buffer
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraRemoveDeadPixels(
	CameraHandle    hCamera,
	USHORT *		pRows,
	USHORT *		pCols,
	UINT			NumPixel
);



///     CameraRemoveAllDeadPixels
///
/// \brief Remove all camera's dead pixels
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraRemoveAllDeadPixels(
	CameraHandle    hCamera
);


///     CameraSaveDeadPixels
///
/// \brief Save camera dead pixels to camera memory
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSaveDeadPixels(
	CameraHandle    hCamera
);


///     CameraSaveDeadPixelsToFile
///
/// \brief Save Camera Dead Points to File
/// \param [in] hCamera Camera handle
/// \param [in] sFileName Full path to the file
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSaveDeadPixelsToFile(
	CameraHandle    hCamera,
	char const *	sFileName
);


///     CameraLoadDeadPixelsFromFile
///
/// \brief Loading camera dead pixels from file
/// \param [in] hCamera Camera handle
/// \param [in] sFileName Full path to the file
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraLoadDeadPixelsFromFile(
	CameraHandle    hCamera,
	char const *	sFileName
);


///     CameraGetImageBufferPriority
///
/// \brief Get a frame of image data
/// \param [in] hCamera Camera handle
/// \param [out] pFrameInfo Frame header information pointer
/// \param [out] pbyBuffer Pointer to the buffer of data for the image
/// \param [in] wTimes The time-out time for capturing images
/// \param [in] Priority map priority See: @link #emCameraGetImagePriority @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Same as @link #CameraGetImageBuffer @endlink except one more priority parameter
///
CameraSdkStatus __stdcall CameraGetImageBufferPriority(
	CameraHandle    hCamera,
	tSdkFrameHead * pFrameInfo,
	BYTE **         pbyBuffer,
	UINT            wTimes,
	UINT            Priority
);


///     CameraGetImageBufferPriorityEx
///
/// \brief Get a frame of image data. The image obtained by this interface is the processed RGB format
/// \param [in] hCamera Camera handle
/// \param [out] piWidth Returns the width of the image
/// \param [out] piHeight Returns the height of the image
/// \param [in] wTimes The time-out time for capturing images. The unit is milliseconds
/// \param [in] Priority map priority See: @link #emCameraGetImagePriority @endlink
/// \return Returns the first address of the RGB data buffer when successful; otherwise returns 0
/// \note Same as @link #CameraGetImageBufferEx @endlink except one more priority parameter
///
unsigned char* __stdcall CameraGetImageBufferPriorityEx(
	CameraHandle    hCamera,
	INT *           piWidth,
	INT *           piHeight,
	UINT            wTimes,
	UINT            Priority
);


///     CameraGetImageBufferPriorityEx2
///
/// \brief Get a frame of image data. The image obtained by this interface is the processed RGB format
/// \param [in] hCamera Camera handle
/// \param [out] pImageData The buffer to receive the image data, the size must match the format specified by uOutFormat, otherwise the data will overflow
/// \param [in] uOutFormat Output Format 0:Mono8 1:rgb24 2:rgba32 3:bgr24 4:bgra32
/// \param [out] piWidth Returns the width of the image
/// \param [out] piHeight Returns the height of the image
/// \param [in] wTimes The time-out time for capturing images. The unit is milliseconds
/// \param [in] Priority map priority See: @link #emCameraGetImagePriority @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Same as @link #CameraGetImageBufferEx2 @endlink except one more priority parameter
///
CameraSdkStatus __stdcall CameraGetImageBufferPriorityEx2(
	CameraHandle    hCamera,
	BYTE *          pImageData,
	UINT            uOutFormat,
	int *           piWidth,
	int *           piHeight,
	UINT            wTimes,
	UINT			Priority
);



///     CameraGetImageBufferPriorityEx3
///
/// \brief Get a frame of image data. The image obtained by this interface is the processed RGB format
/// \param [in] hCamera Camera handle
/// \param [out] pImageData The buffer to receive the image data, the size must match the format specified by uOutFormat, otherwise the data will overflow
/// \param [in] uOutFormat output format 0:Mono8 1:rgb24 2:rgba32 3:bgr24 4:bgra32
/// \param [out] piWidth Returns the width of the image
/// \param [out] piHeight Returns the height of the image
/// \param [out] puTimeStamp returns image timestamp
/// \param [in] wTimes The time-out time for capturing images
/// \param [in] Priority map priority See: @link #emCameraGetImagePriority @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Same as @link #CameraGetImageBufferEx3 @endlink except one more priority parameter
///
CameraSdkStatus __stdcall CameraGetImageBufferPriorityEx3(
    CameraHandle    hCamera,
	BYTE *          pImageData,
	UINT            uOutFormat,
	int *           piWidth,
	int *           piHeight,
	UINT *          puTimeStamp,
	UINT            wTimes,
	UINT            Priority
);


///     CameraClearBuffer
///
/// \brief Clear all cached frames in the camera
/// \param [in] hCamera Camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraClearBuffer(
	CameraHandle    hCamera
);


///     CameraSoftTriggerEx
///
/// \brief Perform a soft trigger
/// \param [in] hCamera Camera handle
/// \param [in] uFlags function flags, as defined in @link #emCameraSoftTriggerExFlags @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraSoftTrigger
///
CameraSdkStatus __stdcall CameraSoftTriggerEx(
	CameraHandle    hCamera,
	UINT            uFlags
);


///     CameraSetHDR
///
/// \brief Setting the HDR of the camera requires camera support. Models without the HDR function. This function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] value HDR coefficient, range 0.0 to 1.0
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetHDR(
	CameraHandle    hCamera,
	float           value
);


///     CameraGetHDR
///
/// \brief Get camera HDR, need camera support, model without HDR function, this function returns an error code, indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [out] value HDR coefficient, range 0.0 to 1.0
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetHDR(
	CameraHandle    hCamera,
	float *         value
);


///     CameraGetFrameID
///
/// \brief The ID of the current frame needs to be supported by the camera (supported by the full range of network ports). This function returns an error code indicating that it is not supported.
/// \param [in] hCamera Camera handle
/// \param [out] id Frame ID
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraGetFrameID(
	CameraHandle    hCamera,
	UINT *          id
);


///     CameraGetFrameTimeStamp
///
/// \brief Get the timestamp of the current frame (in microseconds)
/// \param [in] hCamera Camera handle
/// \param [out] TimeStampL timestamp low 32 bits
/// \param [out] TimeStampH Timestamp high 32 bits
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code 
///
CameraSdkStatus __stdcall CameraGetFrameTimeStamp(
	CameraHandle    hCamera,
	UINT *          TimeStampL,
	UINT *			TimeStampH
);


///     CameraSetHDRGainMode
///
/// \brief Setting the camera's gain mode requires camera support. Models without the gain mode switching function. This function returns an error code indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [in] value 0: low gain 1: high gain
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetHDRGainMode(
	CameraHandle    hCamera,
	int				value
);


///     CameraGetHDRGainMode
///
/// \brief Get camera's gain mode, need camera support, model without gain mode switching function, this function returns error code, indicating that it is not supported
/// \param [in] hCamera Camera handle
/// \param [out] value 0: low gain 1: high gain
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetHDRGainMode(
	CameraHandle    hCamera,
	int *			value
);


///     CameraCreateDIBitmap
///
/// \brief Create HBITMAP from Frame Data
/// \param [in] hDC Handle to a device context (parameter hdc of WIN32 API CreateDIBitmap)
/// \param [in] pFrameBuffer Frame data
/// \param [in] pFrameHead Frame Header
/// \param [out] outBitmap newly created HBITMAP (need to call WIN32 API DeleteObject after use)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraCreateDIBitmap(
	HDC             hDC,
	BYTE *          pFrameBuffer,
	tSdkFrameHead * pFrameHead,
	HBITMAP *       outBitmap
);


///     CameraDrawFrameBuffer
///
/// \brief Draw frames to the specified window
/// \param [in] pFrameBuffer frame data
/// \param [in] pFrameHead Frame Header
/// \param [in] hWnd destination window
/// \param [in] Algorithm scaling algorithm 0: fast but slightly worse quality 1 slower but better quality
/// \param [in] Mode Zoom Mode 0: Scale 1: Scale Zoom
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraDrawFrameBuffer(
	BYTE *          pFrameBuffer,
	tSdkFrameHead * pFrameHead,
	HWND            hWnd,
	int             Algorithm,
	int             Mode
);


///     CameraFlipFrameBuffer
///
/// \brief Flip frame data
/// \param [inout] pFrameBuffer frame data
/// \param [in] pFrameHead Frame Header
/// \param [in] Flags 1: Up and down 2: Around 3: Up and down, left and right are all flipped (equivalent to 180 degrees rotation)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraFlipFrameBuffer(
	BYTE *          pFrameBuffer,
	tSdkFrameHead * pFrameHead,
	int             Flags
);


///     CameraConvertFrameBufferFormat
///
/// \brief Conversion frame data format
/// \param [in] hCamera Camera handle.
/// \param [in] pInFrameBuffer input frame data
/// \param [out] pOutFrameBuffer output frame data
/// \param [in] outWidth output width
/// \param [in] outHeight output height
/// \param [in] outMediaType output format @see CameraSetIspOutFormat
/// \param [inout] pFrameHead frame header information (after successful conversion, the information inside will be modified to output frame information)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraConvertFrameBufferFormat(
	CameraHandle    hCamera,
	BYTE *          pInFrameBuffer,
	BYTE *          pOutFrameBuffer,
	int             outWidth,
	int             outHeight,
	UINT            outMediaType,
	tSdkFrameHead * pFrameHead
);


///     CameraSetConnectionStatusCallback
///
/// \brief Sets the callback notification function for camera connection state changes. When the camera is disconnected and reconnected, the callback function pointed to by pCallBack will be called.
/// \param [in] hCamera Camera handle
/// \param [in] pCallBack callback function pointer
/// \param [in] pContext Additional parameter of the callback function. This additional parameter will be passed in when the callback function is called. It can be NULL
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetConnectionStatusCallback(
	CameraHandle                        hCamera,
	CAMERA_CONNECTION_STATUS_CALLBACK   pCallBack,
	PVOID                               pContext
);


///     CameraSetLightingControllerMode
///
/// \brief Set the output mode of the light controller (Smart camera series and hardware support required)
/// \param [in] hCamera Camera handle
/// \param [in] index controller index
/// \param [in] mode output mode (0: follow strobe 1: manual)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraSetLightingControllerMode(
	CameraHandle    hCamera,
	int             index,
	int				mode
);


///     CameraSetLightingControllerState
///
/// \brief Set the output status of the light controller (Smart camera series and hardware support required)
/// \param [in] hCamera Camera handle
/// \param [in] index controller index
/// \param [in] state output state (0: off 1: on)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetLightingControllerState(
	CameraHandle    hCamera,
	int             index,
	int             state
);


///     CameraSetFrameResendCount
///
/// \brief When the camera is in the trigger mode (soft trigger or hard trigger), the camera sends a frame to the PC. If the camera does not receive the reception confirmation from the PC, the camera can retransmit the frame several times. Use this function to set the number of camera resends. (only supported by Gige camera)
/// \param [in] hCamera Camera handle
/// \param [in] count number of resends (<=0 means disable resends)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetFrameResendCount(
	CameraHandle    hCamera,
	int             count
);


///     CameraSetUndistortParams
///
/// \brief Set undistort parameters
/// \param [in] hCamera Camera handle
/// \param [in] width image width
/// \param [in] height image height
/// \param [in] cameraMatrix internal matrix(fx, fy, cx, cy)
/// \param [in] distCoeffs distortion coefficient (k1, k2, p1, p2, k3)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetUndistortParams(
	CameraHandle	hCamera,
	int				width,
	int				height,
	double			cameraMatrix[4],    //  возможно, что тут надо передать указатель на массив из 4 элементов
	double			distCoeffs[5]       //  возможно, что тут надо передать указатель на массив из 5 элементов
);


///     CameraGetUndistortParams
///
/// \brief Get undistort parameters
/// \param [in] hCamera Camera handle
/// \param [out] width image width
/// \param [out] height image height
/// \param [out] cameraMatrix internal matrix(fx, fy, cx, cy)
/// \param [out] distCoeffs distortion coefficient (k1, k2, p1, p2, k3)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetUndistortParams(
	CameraHandle	hCamera,
	int *           width,
	int *           height,
	double			cameraMatrix[4],    //  возможно, что тут надо передать указатель на массив из 4 элементов
	double			distCoeffs[5]       //  возможно, что тут надо передать указатель на массив из 5 элементов
);


///     CameraSetUndistortEnable
///
/// \brief Set undistort enable status
/// \param [in] hCamera Camera handle.
/// \param [in] bEnable enable status
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetUndistortEnable(
	CameraHandle	hCamera,
	BOOL			bEnable
);


///     CameraGetUndistortEnable
///
/// \brief Get undistort enable status
/// \param [in] hCamera Camera handle.
/// \param [out] bEnable enable status
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetUndistortEnable(
	CameraHandle	hCamera,
	BOOL *			bEnable
);


///     CameraCustomizeUndistort
///
/// \brief Open the undistort editing panel
/// \param [in] hCamera Camera handle
/// \param [in] hParent The handle of the window that called the function. Can be NULL
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraCustomizeUndistort(
	CameraHandle	hCamera,
	HWND			hParent
);


///     CameraGetEyeCount
///
/// \brief Get the number of eyes in the camera
/// \param [in] hCamera Camera handle
/// \param [out] EyeCount eye count
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetEyeCount(
	CameraHandle    hCamera,
	int *			EyeCount
);


///     CameraMultiEyeImageProcess
///
/// \brief Do ISP for a certain monocular in the multi-camera frame
/// \param [in] hCamera Camera handle
/// \param [in] iEyeIndex eye index
/// \param [in] pbyIn Input the buffer address of the image data, which cannot be NULL
/// \param [in] pInFrInfo Input the frame header of the image data, which cannot be NULL
/// \param [out] pbyOut The buffer address of the image output after processing, cannot be NULL
/// \param [out] pOutFrInfo The header information of the processed image cannot be NULL
/// \param [in] uOutFormat The output format of the image after processing
/// \param [in] uReserved Reservation parameters must be set to 0
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraMultiEyeImageProcess(
	CameraHandle    hCamera,
	int             iEyeIndex,
	BYTE *          pbyIn,
	tSdkFrameHead * pInFrInfo,
	BYTE *          pbyOut,
	tSdkFrameHead * pOutFrInfo,
	UINT            uOutFormat,
	UINT            uReserved
);


///     CameraGetRegionAverageGray
///
/// \brief Calculate the average gray value of the area
/// \param [in] pFrameBuffer frame data
/// \param [in] pFrameHead Frame Header
/// \param [in] Left The starting x coordinate of the rectangular area
/// \param [in] Top The starting y coordinate of the rectangular area
/// \param [in] Width The width of the rectangular area
/// \param [in] Height The Height of the rectangular area
/// \param [out] AvgGray returns the result of the calculation
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Width or Height is 0, then ignore Left, Top and return the average gray value of the entire frame
///
CameraSdkStatus __stdcall CameraGetRegionAverageGray(
	BYTE *          pFrameBuffer,
	tSdkFrameHead * pFrameHead,
	int             Left,
	int             Top,
	int             Width,
	int             Height,
	int *           AvgGray
);


///     CameraGetMediaCapability
///
/// \brief Get the feature support of the output format. (For example: H264, H265 support setting bit rate)
/// \param [in] hCamera Handle of the camera
/// \param [in] iMediaType output format index
/// \param [out] uCap feature support
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetMediaCapability(
	CameraHandle    hCamera,
	int				iMediaType,
	UINT *          uCap
);


///     CameraSetMediaBitRate
///
/// \brief Set the bit rate. (Only some output formats are supported, such as H264, H265)
/// \param [in] hCamera Handle of the camera
/// \param [in] iMediaType output format index
/// \param [in] uRate bit rate
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
CameraSdkStatus __stdcall CameraSetMediaBitRate(
	CameraHandle    hCamera,
	int				iMediaType,
	UINT			uRate
);


///     CameraGetMediaBitRate
///
/// \brief Get the bit rate. (Only some output formats are supported, such as H264, H265)
/// \param [in] hCamera Handle of the camera
/// \param [in] iMediaType output format index
/// \param [out] uRate bit rate
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetMediaBitRate(
	CameraHandle    hCamera,
	int             iMediaType,
	UINT *          uRate
);


///     CameraSetFrameEventCallback
///
/// \brief Set the camera frame event callback function. When the frame starts and when the frame is completed, the callback function pointed to by pCallBack will be called
/// \param [in] hCamera Camera handle
/// \param [in] pCallBack callback function pointer
/// \param [in] pContext Additional parameter of the callback function. This additional parameter will be passed in when the callback function is called. It can be NULL
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note For the start of the global shutter camera frame, it means the end of a frame exposure
///
CameraSdkStatus __stdcall CameraSetFrameEventCallback(
	CameraHandle                hCamera,
	CAMERA_FRAME_EVENT_CALLBACK pCallBack,
	PVOID                       pContext
);


///     CameraSetNoiseReductionValue
///
/// \brief Set the noise reduction coefficient
/// \param [in] hCamera Camera handle
/// \param [in] value [0, 7]
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetNoiseReductionValue(
	CameraHandle    hCamera,
	int				value
);


///     CameraGetNoiseReductionValue
///
/// \brief Get the noise reduction coefficient
/// \param [in] hCamera Camera handle
/// \param [out] value  [0, 7]
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetNoiseReductionValue(
	CameraHandle    hCamera,
	int *			value
);


///     CameraSetLogarithmicCurveValue
///
/// \brief Set logarithmic curve value
/// \param [in] hCamera Camera handle
/// \param [in] value   [0, 255]
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetLogarithmicCurveValue(
	CameraHandle    hCamera,
	int				value
);


///     CameraGetLogarithmicCurveValue
///
/// \brief Get logarithmic curve value
/// \param [in] hCamera Camera handle
/// \param [out] value  [0, 255]
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetLogarithmicCurveValue(
	CameraHandle    hCamera,
	int *			value
);


///     CameraSetSpliceLines
///
/// \brief Set the number of splicing lines, extract the specified number of lines from multiple frames and splice them into one frame (only support line scan series)
/// \param [in] hCamera Camera handle
/// \param [in] numLines Number of splicing lines (default is 0, 0 means no splicing processing)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetSpliceLines(
	CameraHandle    hCamera,
	int             numLines
);


///     CameraGetSpliceLines
///
/// \brief Get the number of splicing lines
/// \param [in] hCamera Camera handle
/// \param [in] numLines Number of splicing lines (default is 0, 0 means no splicing processing)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetSpliceLines(
	CameraHandle    hCamera,
	int *           numLines
);


///     CameraSnapChannelBuffer
///
/// \brief Get data from the specified channel. (Only some camera hardware supports this function)
/// \param [in] hCamera Handle of the camera
/// \param [in] pszChannelName Channel name
/// \param [out] pFrameInfo The header information pointer of the image
/// \param [out] pbyBuffer Returns the buffer pointer of the image data
/// \param [in] wTimes Timeout for grabbing an image in milliseconds. The function returns a timeout error if no image has been obtained within wTimes
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSnapChannelBuffer(
	CameraHandle    hCamera,
	char const *    pszChannelName,
	tSdkFrameHead * pFrameInfo,
	BYTE **         pbyBuffer,
	UINT            wTimes
);


///     CameraReleaseChannelBuffer
///
/// \brief Releases the buffer obtained by @link #CameraSnapChannelBuffer @endlink
/// \param [in] hCamera Camera handle
/// \param [in] pszChannelName Channel name
/// \param [in] pbyBuffer Frame buffer address
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraReleaseChannelBuffer(
	CameraHandle    hCamera,
	char const *    pszChannelName,
	BYTE *          pbyBuffer
);


///     CameraSetRotaryEncTrigger
///
/// \brief Trigger the encoder. When the line scan camera is in the conditional line mode, if the trigger mode is level, after calling this function to activate the encoder, the camera starts to receive encoder signal acquisition, until this function is called again to stop responding to the encoder. If the trigger mode is edge, after calling this function to activate the encoder, the camera starts to receive encoder signal acquisition, and after collecting the set number of lines (resolution height * number of trigger frames at a time), the camera automatically stops responding to the encoder.
/// \param [in] hCamera Camera handle
/// \param [in] action 0: stop responding to the encoder 1: activate the encoder
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraSetRotaryEncTrigger(
	CameraHandle    hCamera,
	int             action
);


///     CameraGetRotaryEncTrigger
///
/// \brief Get the encoder trigger status
/// \param [in] hCamera Camera handle
/// \param [out] action returns the trigger status
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGetRotaryEncTrigger(
	CameraHandle    hCamera,
	int *           action
);


///     CameraSubmitUserBufferSnap
///
/// \brief Submit a capture request, and the image data will be directly stored in the buffer provided by the user after the capture is completed
/// \param [in] hCamera Camera handle
/// \param [inout] pUserBuffer The buffer used to receive images
/// \param [inout] pUserBufferSize buffer size, if the size is not enough, the submission will fail, and the minimum buffer size required under the current configuration will be returned. If pUserBuffer=NULL, the minimum required buffer size is also returned.
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note After the request is submitted successfully, you need to call @link CameraWaitUserBufferSnap @endlink to end the request
///
CameraSdkStatus __stdcall CameraSubmitUserBufferSnap(
	CameraHandle    hCamera,
	BYTE *			pUserBuffer,
	UINT *			pUserBufferSize
);


///     CameraCancelUserBufferSnap
///
/// \brief cancels the submitted snapshot request
/// \param [in] hCamera Camera handle
/// \param [in] pUserBuffer The user buffer used by the capture request
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note After successful cancellation, you still need to call @link CameraWaitUserBufferSnap @endlink to end the request
///
CameraSdkStatus __stdcall CameraCancelUserBufferSnap(
	CameraHandle	hCamera,
	BYTE *			pUserBuffer
);


///     CameraWaitUserBufferSnap
///
/// \brief Submit a capture request, and the image data will be directly stored in the buffer provided by the user after the capture is completed
/// \param [in] hCamera Camera handle
/// \param [in] pUserBuffer The user buffer used by the capture request
/// \param [out] pSnapStatus Returns the snapshot status, CAMERA_STATUS_SUCCESS indicates that the snapshot is successful, and other values indicate that the snapshot is wrong
/// \param [out] pFrameInfo The header information pointer of the image
/// \param [out] ppImgStart Return image data start pointer
/// \param [in] wTimes Timeout for grabbing an image in milliseconds. The function returns a timeout error if no image has been obtained within wTimes
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Since the image data may contain some additional header information, the starting position of the image data may not be equal to the first address of the buffer provided by the user. Always use the address returned by ppImgStart to access the image data.
///
CameraSdkStatus __stdcall CameraWaitUserBufferSnap(
	CameraHandle	hCamera,
	BYTE *			pUserBuffer,
	INT *			pSnapStatus,
	tSdkFrameHead *	pFrameInfo,
	BYTE **			ppImgStart,
	UINT			wTimes
);



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     SDK :   CAMERA GRABBER
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///     CameraGrabber_CreateFromDevicePage
///
/// \brief Pop-up camera list allows the user to select the camera to open
/// \param [out] Grabber returns newly created grabber
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note This function uses @link CameraInit @endlink internally to open the camera, so you can use @link CameraGrabber_GetCameraHandle @endlink to get the camera handle and use other SDK APIs to operate the camera.
///
CameraSdkStatus __stdcall CameraGrabber_CreateFromDevicePage(
	void ** Grabber
);


///     CameraGrabber_CreateByIndex
///
/// \brief Creating a Grabber Using a Camera List Index
/// \param [out] Grabber returns newly created grabber
/// \param [in] Index Camera index
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note This function uses @link CameraInit @endlink internally to open the camera, so you can use @link CameraGrabber_GetCameraHandle @endlink to get the camera handle and use other SDK APIs to operate the camera.
///
CameraSdkStatus __stdcall CameraGrabber_CreateByIndex(
	void ** Grabber,
	int     Index
);


///     CameraGrabber_CreateByName
///
/// \brief Create a Grabber with a Camera Name
/// \param [out] Grabber returns newly created grabber
/// \param [in] Name Camera name.@link #tSdkCameraDevInfo.acFriendlyName @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note This function uses @link CameraInit @endlink internally to open the camera, so you can use @link CameraGrabber_GetCameraHandle @endlink to get the camera handle and use other SDK APIs to operate the camera.
///
CameraSdkStatus __stdcall CameraGrabber_CreateByName(
	void ** Grabber,
	char *  Name
);


///     CameraGrabber_Create
///
/// \brief Create Grabber from device info
/// \param [out] Grabber returns newly created grabber
/// \param [in] pDevInfo device information. @link #CameraEnumerateDevice @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note This function uses @link CameraInit @endlink internally to open the camera, so you can use @link CameraGrabber_GetCameraHandle @endlink to get the camera handle and use other SDK APIs to operate the camera.
///
CameraSdkStatus __stdcall CameraGrabber_Create(
	void **             Grabber,
	tSdkCameraDevInfo * pDevInfo
);


///     CameraGrabber_Destroy
///
/// \brief Destroy Grabber
/// \param [in] Grabber
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGrabber_Destroy(
	void * Grabber
);


///     CameraGrabber_SetHWnd
///
/// \brief Set the preview video display window
/// \param [in] Grabber
/// \param [in] hWnd window handle of the display window
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGrabber_SetHWnd(
	void *  Grabber,
	HWND    hWnd
);


///
///
/// \brief Sets the priority used by Grabber when fetching graphs
/// \param [in] Grabber
/// \param [in] Priority GetImageBuffer priority, For details see: @link #emCameraGetImagePriority @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGrabber_SetPriority(
	void *  Grabber,
	UINT    Priority
);


///     CameraGrabber_StartLive
///
/// \brief Start Grabber
/// \param [in] Grabber
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \note Grabber must enter the acquisition state, grab callbacks, snapshot and other functions in order to function properly
///
CameraSdkStatus __stdcall CameraGrabber_StartLive(
	void * Grabber
);


///     CameraGrabber_StopLive
///
/// \brief Stop Grabber
/// \param [in] Grabber
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \warning This function will wait for all callbacks to end before returning to the caller,And it will dispatch windows messages while waiting
///
CameraSdkStatus __stdcall CameraGrabber_StopLive(
	void *  Grabber
);


///     CameraGrabber_SaveImage
///
/// \brief Synchronized snapshot
/// \param [in] Grabber
/// \param [out] Image Returns Captured Image \note Need to Call @link #CameraImage_Destroy @endlink Release
/// \param [in] TimeOut Timeout (milliseconds)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGrabber_SaveImage(
	void *  Grabber,
	void ** Image,
	DWORD   TimeOut
);


///     CameraGrabber_SaveImageAsync
///
/// \brief Submit an asynchronous snapshot request, complete the user's completion function after the completion of the submission
/// \param [in] Grabber
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraGrabber_SetSaveImageCompleteCallback
/// 
CameraSdkStatus __stdcall CameraGrabber_SaveImageAsync(
	void * Grabber
);


///     CameraGrabber_SaveImageAsyncEx
///
/// \brief Submit an asynchronous snapshot request, complete the user's completion function after the completion of the submission
/// \param [in] Grabber
/// \param [in] UserData user data, which can be obtained from Image using @link CameraImage_GetUserData @endlink
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraGrabber_SetSaveImageCompleteCallback
///
CameraSdkStatus __stdcall CameraGrabber_SaveImageAsyncEx(
	void *  Grabber,
	void *  UserData
);


///     CameraGrabber_SetSaveImageCompleteCallback
///
/// \brief Set the completion function of asynchronous mode snapshot
/// \param [in] Grabber
/// \param [in] Callback Callback is called when the asynchronous snapshot task completes
/// \param [in] Context Passed as a parameter when the Callback is invoked
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
/// \see CameraGrabber_SaveImageAsync CameraGrabber_SaveImageAsyncEx
///
CameraSdkStatus __stdcall CameraGrabber_SetSaveImageCompleteCallback(
	void *                              Grabber,
	pfnCameraGrabberSaveImageComplete   Callback,
	void *                              Context
);


///     CameraGrabber_SetFrameListener
///
/// \brief Set frame listening function
/// \param [in] Grabber
/// \param [in] Listener listener function
/// \param [in] Context Passed as a parameter when the Listener is invoked
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGrabber_SetFrameListener(
	void *                          Grabber,
	pfnCameraGrabberFrameListener   Listener,
	void *                          Context
);


///     CameraGrabber_SetRawCallback
///
/// \brief Set RAW data callback function
/// \param [in] Grabber
/// \param [in] Callback Raw data callback function
/// \param [in] Context Passed as a parameter when the Callback is invoked
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGrabber_SetRawCallback(
	void *                          Grabber,
	pfnCameraGrabberFrameCallback   Callback,
	void *                          Context
);


///     CameraGrabber_SetRGBCallback
///
/// \brief Set RGB callback function
/// \param [in] Grabber
/// \param [in] Callback RGB data callback function
/// \param [in] Context Passed as a parameter when the Callback is invoked
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGrabber_SetRGBCallback(
	void *                          Grabber,
	pfnCameraGrabberFrameCallback   Callback,
	void *                          Context
);


///     CameraGrabber_GetCameraHandle
///
/// \brief Get camera handle
/// \param [in] Grabber
/// \param [out] hCamera returned camera handle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGrabber_GetCameraHandle(
	void *          Grabber,
	CameraHandle *  hCamera
);


///     CameraGrabber_GetStat
///
/// \brief Get frame statistics
/// \param [in] Grabber
/// \param [out] stat returned statistics
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGrabber_GetStat(
	void *              Grabber,
	tSdkGrabberStat *   stat
);


///     CameraGrabber_GetCameraDevInfo
///
/// \brief Get Camera DevInfo
/// \param [in] Grabber
/// \param [out] DevInfo Returns Camera DevInfo
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraGrabber_GetCameraDevInfo(
	void *              Grabber,
	tSdkCameraDevInfo * DevInfo
);



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     SDK :   CAMERA IMAGE
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///     CameraImage_Create
///
/// \brief Create a new Image
/// \param [out] Image Newly Created Image
/// \param [in] pFrameBuffer frame data
/// \param [in] pFrameHead Frame Header
/// \param [in] bCopy TRUE: Copy a new frame data FALSE: Do not copy, directly use the buffer pointed to by pFrameBuffer
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_Create(
	void **         Image,
	BYTE *          pFrameBuffer, 
	tSdkFrameHead * pFrameHead,
	BOOL            bCopy
);


///     CameraImage_CreateEmpty
///
/// \brief Create an empty Image
/// \param [out] Image Newly Created Image
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_CreateEmpty(
	void ** Image
);


///     CameraImage_Destroy
///
/// \brief Destroy Image
/// \param [in] Image
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_Destroy(
	void *  Image
);


///     CameraImage_GetData
///
/// \brief Get frame data and frame header from Image
/// \param [in] Image
/// \param [out] DataBuffer Frame Data
/// \param [out] Head header
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_GetData(
	void *              Image,
	BYTE **             DataBuffer,
	tSdkFrameHead **    Head
);


///     CameraImage_GetUserData
///
/// \brief Get User's Custom Data of Image
/// \param [in] Image
/// \param [out] UserData returns user-defined data
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_GetUserData(
	void *  Image,
	void ** UserData
);


///     CameraImage_SetUserData
///
/// \brief Set user-defined data for Image
/// \param [in] Image
/// \param [in] UserData User-defined data
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_SetUserData(
	void *  Image,
	void *  UserData
);


///     CameraImage_IsEmpty
///
/// \brief Determine if an Image is empty
/// \param [in] Image
/// \param [out] IsEmpty Empty Returns: TRUE(1) Otherwise returns: FALSE(0)
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_IsEmpty(
	void *  Image,
	BOOL *  IsEmpty
);


///     CameraImage_Draw
///
/// \brief Draw Image to the specified window
/// \param [in] Image
/// \param [in] hWnd destination window
/// \param [in] Algorithm scaling algorithm 0:fast but slightly worse quality  1:slower but better quality
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_Draw(
	void *  Image,
	HWND    hWnd,
	int     Algorithm
);


///     CameraImage_DrawFit
///
/// \brief Pull up drawing Image to the specified window
/// \param [in] Image
/// \param [in] hWnd destination window
/// \param [in] Algorithm scaling algorithm 0:fast but slightly worse quality  1:slower but better quality
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_DrawFit(
	void *  Image,
	HWND    hWnd,
	int     Algorithm
);


///     CameraImage_DrawToDC
///
/// \brief Draw Image to specified DC
/// \param [in] Image
/// \param [in] hDC destination DC
/// \param [in] Algorithm scaling algorithm 0:fast but slightly worse quality   1:slower but better quality
/// \param [in] xDst The X coordinate of the upper left corner of the target rectangle
/// \param [in] yDst The Y coordinate of the upper left corner of the target rectangle
/// \param [in] cxDst Width of target rectangle
/// \param [in] cyDst Height of target rectangle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code 
///
CameraSdkStatus __stdcall CameraImage_DrawToDC(
	void *  Image,
	HDC     hDC,
	int     Algorithm,
	int     xDst,
	int     yDst,
	int     cxDst,
	int     cyDst
);


///     CameraImage_DrawToDCFit
///
/// \brief Pull up drawing Image to specified DC
/// \param [in] Image
/// \param [in] hDC destination DC
/// \param [in] Algorithm scaling algorithm 0:fast but slightly worse quality   1:slower but better quality
/// \param [in] xDst The X coordinate of the upper left corner of the target rectangle
/// \param [in] yDst The Y coordinate of the upper left corner of the target rectangle
/// \param [in] cxDst Width of target rectangle
/// \param [in] cyDst Height of target rectangle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code 
///
CameraSdkStatus __stdcall CameraImage_DrawToDCFit(
	void *  Image,
	HDC     hDC,
	int     Algorithm,
	int     xDst,
	int     yDst,
	int     cxDst,
	int     cyDst
);


///     CameraImage_BitBlt
///
/// \brief Draw Image to specified window (without scaling)
/// \param [in] Image
/// \param [in] hWnd destination window
/// \param [in] xDst The X coordinate of the upper left corner of the target rectangle
/// \param [in] yDst The Y coordinate of the upper left corner of the target rectangle
/// \param [in] cxDst Width of target rectangle
/// \param [in] cyDst Height of target rectangle
/// \param [in] xSrc X coordinate of the upper left corner of the image rectangle
/// \param [in] ySrc Y coordinate of the upper left corner of the image rectangle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_BitBlt(
	void *  Image,
	HWND    hWnd,
	int     xDst,
	int     yDst,
	int     cxDst,
	int     cyDst,
	int     xSrc,
	int     ySrc
);


///     CameraImage_BitBltToDC
///
/// \brief Draw Image to specified DC (without scaling)
/// \param [in] Image
/// \param [in] hDC destination DC
/// \param [in] xDst The X coordinate of the upper left corner of the target rectangle
/// \param [in] yDst The Y coordinate of the upper left corner of the target rectangle
/// \param [in] cxDst Width of target rectangle
/// \param [in] cyDst Height of target rectangle
/// \param [in] xSrc X coordinate of the upper left corner of the image rectangle
/// \param [in] ySrc Y coordinate of the upper left corner of the image rectangle
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_BitBltToDC(
	void *  Image,
	HDC     hDC,
	int     xDst,
	int     yDst,
	int     cxDst,
	int     cyDst,
	int     xSrc,
	int     ySrc
);


///     CameraImage_SaveAsBmp
///
/// \brief Save Image as bmp
/// \param [in] Image
/// \param [in] FileName file name
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_SaveAsBmp(
	void *          Image,
	char const *    FileName
);


///     CameraImage_SaveAsJpeg
///
/// \brief Save Image as jpg
/// \param [in] Image
/// \param [in] FileName file name
/// \param [in] Quality save quality (1-100), 100 is the best quality but the file is also the largest
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_SaveAsJpeg(
	void *          Image,
	char const *    FileName,
	BYTE            Quality
);


///     CameraImage_SaveAsPng
///
/// \brief Save Image as png
/// \param [in] Image
/// \param [in] FileName file name
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_SaveAsPng(
	void* Image,
	char const* FileName
);


///     CameraImage_SaveAsRaw
///
/// \brief Save Image as raw
/// \param [in] Image
/// \param [in] FileName file name
/// \param [in] Format 0: 8Bit Raw; 1: 16Bit Raw
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
CameraSdkStatus __stdcall CameraImage_SaveAsRaw(
	void *          Image,
	char const *    FileName,
	int             Format
);


///     CameraImage_IPicture
///
/// \brief Create an IPicture from an Image
/// \param [in] Image
/// \param [out] NewPic Newly created IPicture
/// \return Returns CAMERA_STATUS_SUCCESS(0) successfully. Otherwise, it returns a non-zero error code
///
// CameraSdkStatus __stdcall CameraImage_IPicture(
// 	void *      Image,
// 	IPicture ** NewPic      // Нигде не смог найти определение типа IPicture
// );


#ifdef __cplusplus
    }
#endif

#endif /* MATLAB_CAMERA_SDK_X64_H */
