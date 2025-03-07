/*
 * Copyright (c) 2022 The VolcEngineRTC project authors. All Rights Reserved.
 * @brief Objective-C VolcEngineRTC Video Defines
*/

#import "ByteRTCAudioDefines.h"
/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamRenderMode{@link #ByteRTCMixedStreamRenderMode} instead.
 * @type keytype
 * @brief 图片或视频流的缩放模式。
 */

typedef NS_ENUM(NSUInteger, ByteRTCRenderMode) {
    /**
     * 
     * @brief 视窗填满优先，默认值。 <br>
     *        视频尺寸等比缩放，直至视窗被填满。当视频尺寸与显示窗口尺寸不一致时，多出的视频将被截掉。
     */
    
    ByteRTCRenderModeHidden = 1,
    /**
     * 
     * @brief 视频帧内容全部显示优先。 <br>
     *        视频尺寸等比缩放，优先保证视频内容全部显示。当视频尺寸与显示窗口尺寸不一致时，会把窗口未被填满的区域填充成背景颜色。
     */
    
    ByteRTCRenderModeFit = 2,
    /**
     * 
     * @brief 视频帧自适应画布。 <br>
     *        视频尺寸非等比例缩放，把窗口充满。在此过程中，视频帧的长宽比例可能会发生变化。
     */
    
    ByteRTCRenderModeFill = 3,
};

/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamMediaType{@link #ByteRTCMixedStreamMediaType} instead.
 * @type keytype
 * @brief 合流输出内容类型
 */

typedef NS_ENUM(NSUInteger, ByteRTCTranscoderContentControlType) {
    /**
     * 
     * @brief 输出的混流包含音频和视频
     */
    
    ByteRTCTranscoderContentControlTypeHasAudioAndVideo = 0,
    /**
     * 
     * @brief 输出的混流只包含音频
     */
    
    ByteRTCTranscoderContentControlTypeHasAudioOnly = 1,
    /**
     * 
     * @brief 输出的混流只包含视频
     */
    
    ByteRTCTranscoderContentControlTypeHasVideoOnly = 2,
};

/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamLayoutRegionType{@link #ByteRTCMixedStreamLayoutRegionType} instead.
 * @type keytype
 * @brief 合流布局区域类型。
 */

typedef NS_ENUM(NSUInteger, ByteRTCTranscoderLayoutRegionType) {

    /**
     * 
     * @brief 合流布局区域类型为视频。
     */
    
    ByteRTCTranscoderLayoutRegionTypeVideoStream = 0,

    /**
     * 
     * @brief 合流布局区域类型为图片。
     */
    
    ByteRTCTranscoderLayoutRegionTypeImage = 1,
};


/**
 * 
 * @type keytype
 * @brief 视频流类型 <br>
 *      目前 C++ SDK 只支持 ByteRTCVideoStreamTypeHigh 类型
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoStreamType) {
    /**
     * 
     * @brief 高分辨率视频流
     */
    
    ByteRTCVideoStreamTypeHigh = 0,
    /**
     * 
     * @brief 低分辨率视频
     */
    
    ByteRTCVideoStreamTypeLow = 1,
};

/**
 * 
 * @type keytype
 * @brief 设置本地视频属性的返回状态。
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoStreamState) {
    /**
     * 
     * @brief 设置本地视频属性成功
    */
   
    ByteRTCVideoStreamStateSuccess                 = 0,
    /**
     * 
     * @brief 本地视频属性参数不合法
    */
   
    ByteRTCVideoStreamStateInvalid                 = -2,
};

/**
 * 
 * @type keytype
 * @brief 视频输出方向模式
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoOutputOrientationMode) {
    /**
     * 
     * @brief 自适应布局
     */
    
    ByteRTCVideoOutputOrientationModeAdaptative = 0,
    /**
     * 
     * @brief 横屏布局
     */
    
    ByteRTCVideoOutputOrientationModeFixedLandscape = 1,
    /**
     * 
     * @brief 竖屏布局
     */
    
    ByteRTCVideoOutputOrientationModeFixedPortrait = 2,
};

/**
 * 
 * @type keytype
 * @brief 视频帧朝向
 */

typedef NS_ENUM(NSUInteger, ByteRTCVideoOrientation) {
    /**
    * 
    * @brief （默认）使用相机输出的原始视频帧的角度，不对视频帧进行额外旋转。
    */
    
    ByteRTCVideoOrientationAdaptive = 0,
    /**
    * 
    * @brief 固定为竖屏，将相机采集到的视频帧转换为竖屏，在整个 RTC 链路中传递竖屏帧。
    */
    
    ByteRTCVideoOrientationPortrait = 1,
    /**
    * 
    * @brief 固定为横屏，将相机采集到的视频帧转换为横屏，在整个 RTC 链路中传递横屏帧。
    */
    
    ByteRTCVideoOrientationLandscape = 2
};

/**
 * 
 * @hidden
 * @type keytype
 * @deprecated since 3.29 and will be deleted in 3.51, use ByteRTCMirrorType{@link #ByteRTCMirrorType} instead.
 * @brief 是否开启镜像模式
 */

typedef NS_ENUM(NSUInteger, ByteRTCMirrorMode) {
    /**
     * 
     *  @brief 不开启
     */
    
    ByteRTCMirrorModeOff = 0,
    /**
     * 
     *  @brief 开启
     */
    
    ByteRTCMirrorModeOn = 1,
};

/**
 * 
 * @type keytype
 * @brief 镜像类型
 */

typedef NS_ENUM(NSUInteger, ByteRTCMirrorType) {
    /**
     * 
     * @brief 本地预览和编码传输时均无镜像效果
     */
    
    ByteRTCMirrorTypeNone = 0,
    /**
     * 
     * @brief 本地预览时有镜像效果，编码传输时无镜像效果
     */
    
    ByteRTCMirrorTypeRender = 1,
    /**
     * 
     * @brief 本地预览和编码传输时均有镜像效果
     */
    
    ByteRTCMirrorTypeRenderAndEncoder = 3,
};

/**
 * 
 * @type keytype
 * @brief 远端流的镜像类型。
 */

typedef NS_ENUM(NSUInteger, ByteRTCRemoteMirrorType) {
    /**
     * 
     * @brief （默认值）远端视频渲染无镜像效果。
     */
    
    ByteRTCRemoteMirrorTypeNone = 0,
    /**
     * 
     * @brief 远端视频渲染有镜像效果。
     */
    
    ByteRTCRemoteMirrorTypeRender = 1,
};

/**
 * 
 * @type keytype
 * @brief 基础美颜模式。
 */

typedef NS_ENUM(NSUInteger, ByteRTCEffectBeautyMode) {
    /**
     * 
     * @brief 美白。
     */
    
    ByteRTCEffectBeautyModeWhite = 0,
    /**
     * 
     * @brief 磨皮。
     */
    
    ByteRTCEffectBeautyModeSmooth = 1,
    /**
     * 
     * @brief 锐化。
     */
    
    ByteRTCEffectBeautyModeSharpen = 2,
    /**
     * 
     * @valid since 3.55
     * @brief 清晰，需集成 v4.4.2+ 版本的特效 SDK。
     */
     
    ByteRTCEffectBeautyModeClear = 3,
};

/**
 * 
 * @type keytype
 * @brief 视频帧旋转信息
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoRotation) {
    /**
     * 
     * @brief 不旋转
     */
    
    ByteRTCVideoRotation0 = 0,
    /**
     * 
     * @brief 顺时针旋转 90 度
     */
    
    ByteRTCVideoRotation90 = 90,
    /**
     * 
     * @brief 顺时针旋转 180 度
     */
    
    ByteRTCVideoRotation180 = 180,
    /**
     * 
     * @brief 顺时针旋转 270 度
     */
    
    ByteRTCVideoRotation270 = 270,
};

/**
 * 
 * @type keytype
 * @brief 视频内容类型
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoContentType) {
    /**
     * 
     * @brief 普通视频
     */
    
    ByteRTCVideoContentTypeNormalFrame = 0,
    /**
     * 
     * @brief 黑帧视频
     */
    
    ByteRTCVideoContentTypeBlackFrame = 1,
};

/**
 * 
 * @type keytype
 * @brief 视频帧缩放模式
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoStreamScaleMode) {
    /**
     * 
     * @brief 自动缩放模式，默认设置为 ByteRTCVideoStreamScaleModeFitWithCropping。
     */
    
    ByteRTCVideoStreamScaleModeAuto            = 0,
    /**
     * 
     * @brief 对视频帧进行缩放，直至充满和视窗分辨率一致为止。这一过程不保证等比缩放。
     */
    
    ByteRTCVideoStreamScaleModeStretch         = 1,
    /**
     * 
     * @brief 视窗填满优先。 <br>
     *        视频帧等比缩放，直至视窗被视频填满。如果视频帧长宽比例与视窗不同，视频帧的多出部分将无法显示。 <br>
     *        缩放完成后，视频帧的一边长和视窗的对应边长一致，另一边长大于等于视窗对应边长。
     */
    
    ByteRTCVideoStreamScaleModeFitWithCropping = 2,
    /**
     * 
     * @brief 视频帧内容全部显示优先。 <br>
     *        视频帧等比缩放，直至视频帧能够在视窗上全部显示。如果视频帧长宽比例与视窗不同，视窗上未被视频帧填满区域将被涂黑。 <br>
     *        缩放完成后，视频帧的一边长和视窗的对应边长一致，另一边长小于等于视窗对应边长。保持纵横比来缩放图像，填充短边
     */
    
    ByteRTCVideoStreamScaleModeFitWithFilling  = 3,
};

/**
 * 
 * @hidden
 * @deprecated since 3.45 and will be deleted in 3.51.
 * @type keytype
 * @brief 视频编码模式
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoCodecMode) {
    /**
     * 
     * @brief 自动选择
    */
   
    ByteRTCVideoCodecModeAuto     = 0,
    /**
     * 
     * @brief 硬编码
    */
   
    ByteRTCVideoCodecModeHardware = 1,
    /**
     * 
     * @brief 软编码
    */
   
    ByteRTCVideoCodecModeSoftware = 2
};

/**
 * 
 * @type keytype
 * @brief 编码帧类型
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoPictureType) {
    /**
     * 
     * @brief 未知类型
     */
    
    ByteRTCVideoPictureTypeUnknown = 0,
    /**
     * 
     * @brief I 帧，关键帧，编解码不需要参考其他视频帧
     */
    
    ByteRTCVideoPictureTypeI = 1,
    /**
     * 
     * @brief P 帧，向前参考帧，编解码需要参考前一帧视频帧
     */
    
    ByteRTCVideoPictureTypeP = 2,
    /**
     * 
     * @brief B 帧，前后参考帧，编解码需要参考前后两帧视频帧
     */
    
    ByteRTCVideoPictureTypeB = 3,
};

/**
 * 
 * @type keytype
 * @brief 编码策略偏好。
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoEncoderPreference) {
    /**
     * 
     * @brief 无偏好。不降低帧率和分辨率。
     */
    
    ByteRTCVideoEncoderPreferenceDisabled          = 0,
    /**
     * 
     * @brief （默认值）帧率优先。分辨率不变。
     */
    
    ByteRTCVideoEncoderPreferenceMaintainFramerate = 1,
    /**
     * 
     * @brief 分辨率优先。
     */
    
    ByteRTCVideoEncoderPreferenceMaintainQuality   = 2,
    /**
     * 
     * @brief 平衡帧率与分辨率。
     */
    
    ByteRTCVideoEncoderPreferenceBalance           = 3,
};

/**
 * 
 * @type keytype
 * @brief 屏幕流编码模式，默认采用清晰模式。
 */

typedef NS_ENUM(NSInteger, ByteRTCScreenVideoEncoderPreference) {
    /**
     * 
     * @hidden(iOS)
     * @brief 智能模式。根据屏幕内容智能决策选择流畅模式或清晰模式。
     */
    
    ByteRTCScreenVideoEncodePreferenceAuto   = 0,
    /**
     * 
     * @brief 流畅模式，优先保障帧率。适用于共享游戏、视频等动态画面。
     */
    
    ByteRTCScreenVideoEncodePreferenceFramerate = 1,
    /**
     * 
     * @brief 清晰模式，优先保障分辨率。适用于共享 PPT、文档、图片等静态画面。
     */
    
    ByteRTCScreenVideoEncodePreferenceQuality   = 2,
};


/**
 * 
 * @hidden
 * @deprecated since 3.32 and will be deleted in 3.51, use ByteRTCVirtualBackgroundSourceType{@link #ByteRTCVirtualBackgroundSourceType} instead.
 * @type keytype
 * @brief 背景模式设置。
 */

typedef NS_ENUM(NSUInteger, ByteRTCBackgroundMode) {
    /**
     * 
     * @brief 无
     */
    
    ByteRTCBackgroundModeNone = 0,
    /**
     * 
     * @brief 虚化
     */
    
    ByteRTCBackgroundModeBlur = 1,
    /**
     * 
     * @brief 背景 1
     */
    
    ByteRTCBackgroundModeA = 2,
    /**
     * 
     * @brief 背景 2
     */
    
    ByteRTCBackgroundModeB = 3,
};

/**
 * 
 * @hidden
 * @deprecated since 3.32 and will be deleted in 3.51.
 * @type keytype
 * @brief 分割模型设置。
 */

typedef NS_ENUM(NSUInteger, ByteRTCDivideModel) {
    /**
     * 
     * @brief 自研
     */
    
    ByteRTCDivideModelDefault = 0,
    /**
    * 
    * @brief effect 分割模型
    */
    
    ByteRTCDivideModelEffect = 1,
};

/**
 * 
 * @type keytype
 * @brief 数据类型
 */

typedef NS_ENUM(NSUInteger, ByteRTCDataFrameType) {
    /**
     * 
     * @brief SEI 数据
     */
    
    ByteRTCDataFrameTypeSei = 0,
    /**
     * 
     * @brief 人脸识别数据
     */
    
    ByteRTCDataFrameTypeRoi = 1,
    /**
     * 
     * @brief 其他数据帧类型
     */
    
    ByteRTCDataFrameTypeOther = 2,
};

/**
 * 
 * @type keytype
 * @brief 视频采集模式
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoCapturePreference) {
   /**
    * 
    * @brief （默认）自动设置采集参数。 <br>
    *        SDK 在开启采集时根据服务端下发的采集配置结合编码参数设置最佳采集参数。
    */
   
    ByteRTCVideoCapturePreferenceAuto = 0,
   /**
    * 
    * @brief 手动设置采集参数，包括采集分辨率、帧率。
    */
   
    ByteRTCVideoCapturePreferenceMannal = 1,
   /**
    * 
    * @brief 采集参数与编码参数一致
    */
   
    ByteRTCVideoCapturePreferenceAutoPerformance = 2,
};

/**
 * 
 * @type keytype
 * @brief 视频帧类型
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoFrameType) {
    /**
     * 
     * @brief 视频帧类型：内存数据
     */
    
    ByteRTCVideoFrameTypeRawMemory = 0,
    /**
     * 
     * @brief 视频帧类型：CVPixelBuffer
     */
    
    ByteRTCVideoFrameTypePixelBuffer,
};

/**
 * 
 * @type keytype
 * @brief 视频帧格式
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoPixelFormat) {
    /**
     * 
     * @brief 未知格式
     */
    
    ByteRTCVideoPixelFormatUnknown = 0,
    /**
     * 
     * @brief I420
     */
    
    ByteRTCVideoPixelFormatI420 = 1,
    /**
     * 
     * @brief BGRA
     */
    
    ByteRTCVideoPixelFormatBGRA = 2,
    /**
     * 
     * @brief NV21
     */
    
    ByteRTCVideoPixelFormatNV21 = 3,
    /**
     * 
     * @brief RGBA
     */
    
    ByteRTCVideoPixelFormatRGBA = 4,
    /**
     * 
     * @brief IMC2
     */
    
    ByteRTCVideoPixelFormatIMC2 = 5,
    /**
     * 
     * @brief ARGB
     */
    
    ByteRTCVideoPixelFormatARGB = 7,
    /**
     * 
     * @brief NV12
     */
    
    ByteRTCVideoPixelFormatNV12 = 8,
    /**
     * 
     * @brief Opengl Texture2D 纹理
     */
    
    ByteRTCVideoPixelFormatGLTexture2D = 10,
    /**
     * 
     * @brief Opengl OES 纹理
     */
    
    ByteRTCVideoPixelFormatGLTextureOES = 11,
    /**
     * 
     * @brief CVPixelBuffer
     */
    
    ByteRTCVideoPixelFormatCVPixelBuffer = 12
};

/**
 * 
 * @type keytype
 * @brief 本地视频帧回调位置。
 */

typedef NS_ENUM(NSInteger, ByteRTCLocalVideoRenderPosition) {
    /**
     * 
     * @brief 采集后。
     */
    
    ByteRTCLocalVideoRenderPositionAfterCapture = 0,
    /**
     * 
     * @brief （默认值）前处理后。
     */
    
    ByteRTCLocalVideoRenderPositionAfterPreprocess = 1
};

/**
 * 
 * @type keytype
 * @brief 远端视频帧回调位置。
 */

typedef NS_ENUM(NSInteger, ByteRTCRemoteVideoRenderPosition) {
    /**
     * 
     * @brief 解码后。
     */
    
    ByteRTCRemoteVideoRenderPositionAfterDecoder = 0,
    /**
     * 
     * @brief （默认值）后处理后。
     */
    
    ByteRTCRemoteVideoRenderPositionAfterPostprocess = 1
};

/**
 * 
 * @type keytype
 * @brief 视频帧编码格式
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoSinkPixelFormat) {
    /**
     * 
     * @brief 原始视频帧格式
     */
    
    ByteRTCVideoSinkPixelFormatOriginal = 0,
    /**
     * 
     * @brief YUV I420 格式
     */
    
    ByteRTCVideoSinkPixelFormatI420 = 1,
    /**
     * 
     * @brief BGRA 格式
     */
    
    ByteRTCVideoSinkPixelFormatBGRA = 2,
    /**
     * 
     * @brief RGBA 格式, 字节序为 R8 G8 B8 A8
     */
    
    ByteRTCVideoSinkPixelFormatRGBA = 5,
    /**
     * 
     * @brief YUV NV21 格式
     */
    
    ByteRTCVideoSinkPixelFormatNV12 = 8
};

/**
 * 
 * @type keytype
 * @brief 是否将视频帧自动转正。
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoApplyRotation) {
    /**
     * 
     * @brief （默认值）不旋转。
     */
    
    ByteRTCVideoApplyRotationDefault = -1,
    /**
     * 
     * @brief 自动转正视频，即根据视频帧的旋转角信息将视频帧旋转到 0 度。
     */
    
    ByteRTCVideoApplyRotation0 = 0
};

/**
 * 
 * @type keytype
 * @brief 是否将视频帧镜像。
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoRenderMirrorType) {
    /**
     * 
     * @brief 开启镜像。
     */
    
    ByteRTCVideoRenderMirrorTypeOn = 1,
    /**
     * 
     * @brief （默认值）不开启镜像。
     */
    
    ByteRTCVideoRenderMirrorTypeOff = 2,
};

/**
 * 
 * @hidden(macOS)
 * @type keytype
 * @brief 超分状态改变原因。
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoSuperResolutionModeChangedReason) {
    /**
     * 
     * @brief 调用 setRemoteVideoSuperResolution:withMode:{@link #ByteRTCVideo#setRemoteVideoSuperResolution:withMode:} 成功关闭超分。
     */
    
    ByteRTCVideoSuperResolutionModeChangedReasonAPIOff = 0,
    /**
     * 
     * @brief 调用 setRemoteVideoSuperResolution:withMode:{@link #ByteRTCVideo#setRemoteVideoSuperResolution:withMode:} 成功开启超分。
     */
    
    ByteRTCVideoSuperResolutionModeChangedReasonAPIOn = 1,
    /**
     * 
     * @brief 开启超分失败，远端视频流的原始视频分辨率超过 640 × 360 px。
     */
    
    ByteRTCVideoSuperResolutionModeChangedReasonResolutionExceed = 2,
    /**
     * 
     * @brief 开启超分失败，已对一路远端流开启超分。
     */
    
    ByteRTCVideoSuperResolutionModeChangedReasonOverUse = 3,
    /**
     * 
     * @brief 设备不支持使用超分辨率。
     */
    
    ByteRTCVideoSuperResolutionModeChangedReasonDeviceNotSupport = 4,
    /**
     * 
     * @brief 当前设备性能存在风险，已动态关闭
     */
    
    ByteRTCVideoSuperResolutionModeChangedReasonDynamicClose = 5,
    /**
     * 
     * @brief 超分因其他原因关闭。
     */
    
    ByteRTCVideoSuperResolutionModeChangedReasonOtherSettingDisabled = 6,
    /**
     * 
     * @brief 超分因其他原因开启。
     */
    
    ByteRTCVideoSuperResolutionModeChangedReasonOtherSettingEnabled = 7,
    /**
     * 
     * @brief SDK 没有编译超分组件。
     */
    
    ByteRTCVideoSuperResolutionModeChangedReasonNoComponent = 8,
    /**
     * 
     * @brief 远端流不存在。房间 ID 或用户 ID 无效，或对方没有发布流。
     */
    
    ByteRTCVideoSuperResolutionModeChangedReasonStreamNotExist = 9,
};

/**
 * 
 * @hidden(macOS)
 * @type keytype
 * @brief 视频降噪模式状态改变原因。
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoDenoiseModeChangedReason) {
    /**
     * 
     * @brief 未知原因导致视频降噪状态改变。
     */
    
    ByteRTCVideoDenoiseModeChangedReasonNull = -1,
    /**
     * 
     * @brief 通过调用 setVideoDenoiser:{@link #ByteRTCVideo#setVideoDenoiser:} 成功关闭视频降噪。
     */
    
    ByteRTCVideoDenoiseModeChangedReasonApiOff = 0,
    /**
     * 
     * @brief 通过调用 setVideoDenoiser:{@link #ByteRTCVideo#setVideoDenoiser:} 成功开启视频降噪。
     */
    
    ByteRTCVideoDenoiseModeChangedReasonApiOn = 1,
    /**
     * 
     * @brief 后台未配置视频降噪，视频降噪开启失败，请联系技术人员解决。
     */
    
    ByteRTCVideoDenoiseModeChangedReasonConfigDisabled = 2,
    /**
     * 
     * @brief 后台配置开启了视频降噪。
     */
    
    ByteRTCVideoDenoiseModeChangedReasonConfigEnabled = 3,
    /**
     * 
     * @brief 由于内部发生了异常，视频降噪关闭。
     */
    
    ByteRTCVideoDenoiseModeChangedReasonInternalException = 4,
    /**
     * 
     * @brief 当前设备性能过载，已动态关闭视频降噪。
     */
    
    ByteRTCVideoDenoiseModeChangedReasonDynamicClose = 5,
    /**
     * 
     * @brief 当前设备性能裕量充足，已动态开启视频降噪。
     */
    
    ByteRTCVideoDenoiseModeChangedReasonDynamicOpen = 6,
    /**
     * 
     * @brief 分辨率导致视频降噪状态发生改变。分辨率过高会导致性能消耗过大，从而导致视频降噪关闭。如若希望继续使用视频降噪，可选择降低分辨率。
     */
    
    ByteRTCVideoDenoiseModeChangedReasonResolution = 7,
};

/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamType instead.
 * @type keytype
 * @brief 合流方式
 */

typedef NS_ENUM(NSUInteger, ByteRTCStreamMixingType) {
    /**
     * 
     * @brief 服务端合流
     */
    
    ByteRTCStreamMixingTypeByServer = 0,
    /**
     * 
     * @brief 端云一体合流。SDK 智能决策在客户端或服务端完成合流。
     */
    
    ByteRTCStreamMixingTypeByClient = 1,
};
/**
 * 
 * @type keytype
 * @brief 转推直播事件
 */

typedef NS_ENUM(NSUInteger, ByteRTCStreamMixingEvent) {
    /**
    * 
    * @hidden for internal use only
    */
    
    ByteRTCStreamMixingEventBase = 0,
    /**
     * 
     * @brief 请求发起转推直播任务
     */
    
    ByteRTCStreamMixingEventStart = 1,
    /**
     * 
     * @brief 发起转推直播任务成功
     */
    
    ByteRTCStreamMixingEventStartSuccess = 2,
    /**
     * 
     * @brief 发起转推直播任务失败
     */
    
    ByteRTCStreamMixingEventStartFailed = 3,
    /**
     * 
     * @brief 请求更新转推直播任务配置
     */
    
    ByteRTCStreamMixingEventUpdate = 4,
    /**
     * 
     * @brief 成功更新转推直播任务配置
     */
    
    ByteRTCStreamMixingEventUpdateSuccess = 5,
    /**
     * 
     * @brief 更新转推直播任务配置失败
     */
    
    ByteRTCStreamMixingEventUpdateFailed = 6,
    /**
     * 
     * @brief 请求结束转推直播任务
     */
    
    ByteRTCStreamMixingEventStop = 7,
    /**
     * 
     * @brief 结束转推直播任务成功
     */
    
    ByteRTCStreamMixingEventStopSuccess = 8,
    /**
     * 
     * @brief 结束转推直播任务失败
     */
    
    ByteRTCStreamMixingEventStopFailed = 9,
    /**
     * 
     * @brief 更新转推直播任务配置的请求超时
     */
    
    ByteRTCStreamMixingEventChangeMixType = 10,
    /**
     * 
     * @brief 得到客户端合流音频首帧
     */
    
    ByteRTCStreamMixingEventFirstAudioFrameByClientMixer = 11,
    /**
     * 
     * @brief 收到客户端合流视频首帧
     */
    
    ByteRTCStreamMixingEventFirstVideoFrameByClientMixer = 12,
    /**
     * 
     * @brief 更新转推直播任务配置超时
     */
    
    ByteRTCStreamMixingEventUpdateTimeout = 13,
    /**
     * 
     * @brief 发起转推直播任务配置超时
     */
    
    ByteRTCStreamMixingEventStartTimeout = 14,
    /**
     * 
     * @brief 合流布局参数错误
     */
    
    ByteRTCStreamMixingEventRequestParamError = 15,
    /**
     * 
     * @brief 合流加图片
     */
    
    ByteRTCStreamMixingEventMixImage = 16,
    /**
     * 
     * @hidden internal use only
     * @valid since 3.50
     * @brief 单通合唱事件
     */
    
    ByteRTCStreamMixingEventSingleWayChorus = 17,
};
/**
 * 
 * @type keytype
 * @brief 合流方式。(新)
 */

typedef NS_ENUM(NSUInteger, ByteRTCMixedStreamType) {
    /**
     * 
     * @brief 通过服务端合流
     */
    
    ByteRTCMixedStreamByServer = 0,
    /**
     * 
     * @brief 端云一体合流。SDK 智能决策在客户端或服务端完成合流。 <br>
     *        使用前，请联系技术支持同学开通，否则不生效。
     */
    
    ByteRTCMixedStreamByClient = 1,
};
/**
 * 
 * @type keytype
 * @brief 客户端合流回调视频格式。(新) <br>
 *        设置为系统不支持的格式时，自动回调系统默认格式。
 */

typedef NS_ENUM(NSUInteger, ByteRTCMixedStreamClientMixVideoFormat) {
    /**
     * 
     * @brief YUV I420。Android、Windows 默认回调格式。支持系统：Android、Windows。
     */
    
    ByteRTCMixedStreamClientMixVideoFormatI420 = 0,
    /**
     * 
     * @brief OpenGL GL_TEXTURE_2D 格式纹理。支持系统：安卓。
     */
    
    ByteRTCMixedStreamClientMixVideoFormatTexture2D = 1,
    /**
     * 
     * @brief CVPixelBuffer BGRA。iOS 默认回调格式。支持系统: iOS。
     */
    
    ByteRTCMixedStreamClientMixVideoFormatCVPixelBufferBGRA = 2,
    /**
     * 
     * @brief YUV NV12。macOS 默认回调格式。支持系统: macOS。
     */
    
    ByteRTCMixedStreamClientMixVideoFormatNV12 = 3,
};

/**
 * 
 * @type keytype
 * @brief 视频编码格式。(新)
 */

typedef NS_ENUM(NSUInteger, ByteRTCMixedStreamVideoCodecType) {
    /**
     * 
     * @brief H.264 格式，默认值。
     */
    
    ByteRTCMixedStreamVideoCodecTypeH264 = 0,
    /**
     * 
     * @brief ByteVC1 格式。
     */
    
    ByteRTCMixedStreamVideoCodecTypeByteVC1 = 1,
};
/**
 * 
 * @type keytype
 * @brief 合流输出内容类型。(新)
 */

typedef NS_ENUM(NSUInteger, ByteRTCMixedStreamMediaType) {
    /**
     * 
     * @brief 输出的混流包含音频和视频
     */
    
    ByteRTCMixedStreamMediaTypeAudioAndVideo = 0,
    /**
     * 
     * @brief 输出的混流只包含音频
     */
    
    ByteRTCMixedStreamMediaTypeAudioOnly = 1,
    /**
     * 
     * @brief 输出的混流只包含视频
     */
    
    ByteRTCMixedStreamMediaTypeVideoOnly = 2,
};
/**
 * 
 * @type keytype
 * @brief 图片或视频流的缩放模式。(新)
 */

typedef NS_ENUM(NSUInteger, ByteRTCMixedStreamRenderMode) {
    /**
     * 
     * @brief 视窗填满优先，默认值。 <br>
     *        视频尺寸等比缩放，直至视窗被填满。当视频尺寸与显示窗口尺寸不一致时，多出的视频将被截掉。
     */
    
    ByteRTCMixedStreamRenderModeHidden = 1,
    /**
     * 
     * @brief 视频帧内容全部显示优先。 <br>
     *        视频尺寸等比缩放，优先保证视频内容全部显示。当视频尺寸与显示窗口尺寸不一致时，会把窗口未被填满的区域填充成背景颜色。
     */
    
    ByteRTCMixedStreamRenderModeFit = 2,
    /**
     * 
     * @brief 视频帧自适应画布。 <br>
     *        视频尺寸非等比例缩放，把窗口充满。在此过程中，视频帧的长宽比例可能会发生变化。
     */
    
    ByteRTCMixedStreamRenderModeAdaptive = 3,
};
/**
 * 
 * @type keytype
 * @brief 合流布局区域类型。(新)
 */

typedef NS_ENUM(NSUInteger, ByteRTCMixedStreamLayoutRegionType) {

    /**
     * 
     * @brief 合流布局区域类型为视频。
     */
    
    ByteRTCMixedStreamLayoutRegionTypeVideoStream = 0,

    /**
     * 
     * @brief 合流布局区域类型为图片。
     */
    
    ByteRTCMixedStreamLayoutRegionTypeImage = 1,
};

/**
 * 
 * @type keytype
 * @brief 合流同步策略
 */

typedef NS_ENUM(NSUInteger, ByteRTCMixedStreamSyncStrategy) {
    /**
     * 
     * @brief 不使用同步策略
     */
    
    ByteRTCMixedStreamSyncStrategyNoSync = 0,
    /**
     * 
     * @brief 使用音频精准同步策略
     */
    
    ByteRTCMixedStreamSyncStrategyAudioPreciseSync = 1,
    /**
     * 
     * @brief 使用单通模式同步策略
     */
    
    ByteRTCMixedStreamSyncStrategySimplexModeSync = 2,
};

/**
 * 
 * @type keytype
 * @brief region 中流的类型属性
 */

typedef NS_ENUM(NSUInteger, ByteRTCMixedStreamVideoType) {
    /**
     * 
     * @brief 主流。包括： <br>
     *        - 由摄像头/麦克风通过内部采集机制，采集到的流
     *        - 通过自定义采集，采集到的流。
     */
    
    ByteRTCMixedStreamVideoTypeMain = 0,

    /**
     * 
     * @brief 屏幕流。
     */
    
    ByteRTCMixedStreamVideoTypeScreen = 1,
};
/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamClientMixVideoFormat{@link #ByteRTCMixedStreamClientMixVideoFormat} instead.
 * @type keytype
 * @brief 客户端合流回调视频格式。设置为系统不支持的格式时，自动回调系统默认格式。
 */

typedef NS_ENUM(NSUInteger, ByteRTCClientMixVideoFormat) {
    /**
     * 
     * @brief YUV I420。Android、Windows 默认回调格式。支持系统：Android、Windows。
     */
    
    ByteRTCClientMixVideoFormatI420 = 0,
    /**
     * 
     * @brief OpenGL GL_TEXTURE_2D 格式纹理。支持系统：安卓。
     */
    
    ByteRTCClientMixVideoFormatTexture2D = 1,
    /**
     * 
     * @brief CVPixelBuffer BGRA。iOS 默认回调格式。支持系统: iOS。
     */
    
    ByteRTCClientMixVideoFormatCVPixelBufferBGRA = 2,
    /**
     * 
     * @brief YUV NV12。macOS 默认回调格式。支持系统: macOS。
     */
    
    ByteRTCClientMixVideoFormatNV12 = 3,
};

/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamVideoCodecType{@link #ByteRTCMixedStreamVideoCodecType} instead.
 * @type keytype
 * @brief 视频编码格式。
 */

typedef NS_ENUM(NSUInteger, ByteRTCTranscodingVideoCodec) {
    /**
     * 
     * @brief H.264 格式，默认值。
     */
    
    ByteRTCTranscodingVideoCodecH264 = 0,
    /**
     * 
     * @brief ByteVC1 格式。
     */
    
    ByteRTCTranscodingVideoCodecH265 = 1,
};

/**
 * 
 * @type keytype
 * @brief 服务端合流转推 SEI 内容。
 */

typedef NS_ENUM(NSInteger, ByteRTCMixedStreamSEIContentMode) {
    /**
     * 
     * @brief 视频流中包含全部的 SEI 信息。默认设置。
     */
    
    ByteRTCMixedStreamSEIContentModeDefault = 0,
    /**
     * 
     * @brief 随非关键帧传输的 SEI 数据中仅包含音量信息。 <br>
     *        当设置 `ByteRTCMixedStreamServerControlConfig.enableVolumeIndication` 为 True 时，此参数设置生效。
     */
    
    ByteRTCMixedStreamSEIContentModeEnableVolumeIndication = 1,
};

/**
 * 
 * @type keytype
 * @brief 服务端合流转推发起模式。
 */

typedef NS_ENUM(NSInteger, ByteRTCMixedStreamPushMode) {
    /**
     * 
     * @brief 无用户发布媒体流时，发起合流任务无效。默认设置。 <br>
     *        当有用户发布媒体流时，才能发起合流任务。
     */
    
    ByteRTCMixedStreamPushModeOnStream = 0,
    /**
     * 
     * @brief 无用户发布媒体流时，可以使用占位图发起合流任务。 <br>
     *        占位图设置参看 alternateImageUrl{@link #ByteRTCMixedStreamLayoutRegionConfig#alternateImageUrl} 和 alternateImageFillMode{@link #ByteRTCMixedStreamLayoutRegionConfig#alternateImageFillMode}
     */
    
    ByteRTCMixedStreamPushModeOnStartRequest = 1,
};
/**
 * 
 * @type keytype
 * @brief 服务端合流占位图填充模式。
 */

typedef NS_ENUM(NSInteger, ByteRTCMixedStreamAlternateImageFillMode) {
    /**
     * 
     * @brief 占位图跟随用户原始视频帧相同的比例缩放。默认设置。
     */
    
    ByteRTCMixedStreamAlternateImageFillModeFit = 0,
    /**
     * 
     * @brief 占位图不跟随用户原始视频帧相同的比例缩放，保持图片原有比例。
     */
    
    ByteRTCMixedStreamAlternateImageFillModeFill = 1,
};
/**
 * 
 * @type errorcode
 * @brief 单流转推直播错误码
 */

typedef NS_ENUM(NSUInteger, ByteRTCSingleStreamPushEvent) {
    /**
    * 
    * @hidden for internal use only
    */
    
    ByteRTCSingleStreamPushEventBase = 0,
    /**
    * 
    * @brief 开始推流。
    */
   
    ByteRTCSingleStreamPushEventStart = 1,
    /**
    * 
    * @brief 推流成功。
    */
   
    ByteRTCSingleStreamPushEventStartSuccess = 2,
    /**
    * 
    * @brief 推流失败。
    */
   
    ByteRTCSingleStreamPushEventStartFailed = 3,
    /**
     * 
     * @brief 停止推流。
     */
    
    ByteRTCSingleStreamPushEventStop = 4,
    /**
    * 
    * @brief 单流转推直播任务处理超时，请检查网络状态并重试。
    */
   
    ByteRTCSingleStreamPushEventTimeout = 5,
    /**
     * 
     * @brief 参数错误。
     */
    
    ByteRTCSingleStreamPushEventParamError = 6,
};

/**
 * 
 * @type keytype
 * @brief 订阅媒体的类型
 */

typedef NS_ENUM(NSInteger, ByteRTCSubscribeMediaType) {
    /**
     * 
     * @brief 既不订阅音频，也不订阅视频
     */
    
    ByteRTCSubscribeMediaTypeNone = 0,
    /**
     * 
     * @brief 只订阅音频，不订阅视频
     */
    
    ByteRTCSubscribeMediaTypeAudioOnly = 1,
    /**
     * 
     * @brief 只订阅视频，不订阅音频
     */
    
    ByteRTCSubscribeMediaTypeVideoOnly = 2,
    /**
     * 
     * @brief 同时订阅音频和视频
     */
    
    ByteRTCSubscribeMediaTypeAudioAndVideo = 3,
};

/**
 * 
 * @type keytype
 * @brief 暂停/恢复接收远端的媒体流类型。
 */

typedef NS_ENUM(NSInteger, ByteRTCPauseResumControlMediaType) {
    /**
     * 
     * @brief 只控制音频，不影响视频
     */
    
    ByteRTCControlMediaTypeAudio = 0,
    /**
     * 
     * @brief 只控制视频，不影响音频
     */
    
    ByteRtcControlMediaTypeVideo = 1,
    /**
     * 
     * @brief 同时控制音频和视频
     */
    
    ByteRtcControlMediaTypeAudioAndVideo = 2,
};

/**
 * 
 * @hidden
 * @deprecated since 3.45 and will be deleted in 3.51.
 * @type keytype
 * @brief 视频输入类型
 */

typedef NS_ENUM(NSInteger, ByteRTCMediaInputType) {
    /**
     * 
     * @brief 自定义采集。 <br>
     *        设置完成后方可直接向 SDK 推送视频帧。
     */
    
    ByteRTCMediaInputTypeExternal = 0,
    /**
     * 
     * @brief 内部 SDK 采集。 <br>
     *        此设置仅切换至内部采集，你需继续调用 startVideoCapture{@link #ByteRTCVideo#startVideoCapture} 开启内部采集。
     */
    
    ByteRTCMediaInputTypeInternal = 1
};

/**
 * 
 * @type keytype
 * @brief 视频输入源类型
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoSourceType) {
    /**
     * 
     * @brief 自定义采集视频源
     */
    
    ByteRTCVideoSourceTypeExternal = 0,
    /**
     * 
     * @brief 内部采集视频源
     */
    
    ByteRTCVideoSourceTypeInternal = 1,
    /**
     * 
     * @brief 自定义编码视频源。 <br>
     *        你仅需推送分辨率最大的一路编码后视频流，SDK 将自动转码生成多路小流
     */
    
    ByteRTCVideoSourceTypeEncodedAutoSimulcast = 2,
    /**
     * 
     * @brief 自定义编码视频源。 <br>
     *        SDK 不会自动生成多路流，你需要自行生成并推送多路流
     */
    
    ByteRTCVideoSourceTypeEncodedManualSimulcast = 3
};

/**
 * 
 * @type keytype
 * @brief Alpha 通道相对于 RGB 通道数据的排列位置。
 */
 
typedef NS_ENUM(NSInteger, ByteRTCAlphaLayout) {
    /**
     * 
     * @brief Alpha 数据置于 RGB 数据上方。
     */
    
    ByteRTCAlphaLayoutTop = 0,
    /**
     * 
     * @hidden currently not available
     * @brief Alpha 数据置于 RGB 数据下方。
     */
    
    ByteRTCAlphaLayoutBottom = 1,
    /**
     * 
     * @hidden currently not available
     * @brief Alpha 数据置于 RGB 数据左方。
     */
    
    ByteRTCAlphaLayoutLeft = 2,
    /**
     * 
     * @hidden currently not available
     * @brief Alpha 数据置于 RGB 数据右方。
     */
     /**
     * 
     * @hidden currently not available
     * @brief The Alpha data is placed to the right of the RGB data.
     */
    ByteRTCAlphaLayoutRight = 3,
};

/**
 * 
 * @type keytype
 * @brief 数码变焦参数类型
 */

typedef NS_ENUM(NSInteger, ByteRTCZoomConfigType) {
    /**
     * 
     * @brief 设置缩放系数
     */
    
    ByteRTCZoomConfigTypeFocusOffset = 0,
    /**
     * 
     * @brief 设置移动步长
     */
    
    ByteRTCZoomConfigTypeMoveOffset = 1
};

/**
 * 
 * @type keytype
 * @brief 数字变焦操作类型
 */

typedef NS_ENUM(NSInteger, ByteRTCZoomDirectionType) {
    /**
     * 
     * @brief 相机向左移动
     */
    
    ByteRTCZoomDirectionTypeMoveLeft = 0,
    /**
     * 
     * @brief 相机向右移动
     */
    
    ByteRTCZoomDirectionTypeMoveRight = 1,
    /**
     * 
     * @brief 相机向上移动
     */
    
    ByteRTCZoomDirectionTypeMoveUp = 2,
    /**
     * 
     * @brief 相机向下移动
     */
    
    ByteRTCZoomDirectionTypeMoveDown = 3,
    /**
     * 
     * @brief 相机缩小焦距
     */
    
    ByteRTCZoomDirectionTypeZoomOut = 4,
    /**
     * 
     * @brief 相机放大焦距
     */
    
    ByteRTCZoomDirectionTypeZoomIn = 5,
    /**
     * 
     * @brief 恢复到原始画面
     */
    
    ByteRTCZoomDirectionTypeReset = 6
};

/**
 * 
 * @type keytype
 * @brief 视频解码方式
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoDecoderConfig) {
    /**
     * 
     * @brief 开启 SDK 内部解码，只回调解码后的数据。回调为 renderPixelBuffer:rotation:contentType:extendedData:{@link #ByteRTCVideoSinkDelegate#renderPixelBuffer:rotation:contentType:extendedData:}
     */
    
    ByteRTCVideoDecoderConfigRaw = 0,
    /**
     * 
     * @brief 开启自定义解码，只回调解码前数据。回调为 onRemoteEncodedVideoFrame:withEncodedVideoFrame:{@link #ByteRTCRemoteEncodedVideoFrameObserver#onRemoteEncodedVideoFrame:withEncodedVideoFrame:}。
     */
    
    ByteRTCVideoDecoderConfigEncode = 1,
    /**
     * 
     * @brief 开启 SDK 内部解码，同时回调解码前和解码后的数据
     */
    
    ByteRTCVideoDecoderConfigBoth = 2
};

/**
 * 
 * @type keytype
 * @brief 虚拟背景类型。
 */

typedef NS_ENUM(NSInteger, ByteRTCVirtualBackgroundSourceType){
    /**
     * 
     * @brief 使用纯色背景替换视频原有背景。
     */
    
    ByteRTCVirtualBackgroundSourceTypeColor = 0,
    /**
     * 
     * @brief 使用自定义图片替换视频原有背景。
     */
    
    ByteRTCVirtualBackgroundSourceTypeImage = 1
};

/**
 * 
 * @type keytype
 * @brief 摄像头类型
 */

typedef NS_ENUM(NSInteger, ByteRTCCameraID) {
    /**
     * 
     * @brief 前置摄像头
     */
    
    ByteRTCCameraIDFront = 0,
    /**
     * 
     * @brief 后置摄像头
     */
    
    ByteRTCCameraIDBack = 1,
    /**
     * 
     * @hidden currently not available
     * @brief 外接摄像头
     */
    
    ByteRTCCameraIDExternal = 2,
    /**
     * 
     * @brief 无效值
     */
    
    ByteRTCCameraIDInvalid = 3,
};
/**
 * 
 * @type errorcode
 * @brief 转推直播错误码
 */

typedef NS_ENUM(NSInteger, ByteRtcTranscoderErrorCode) {
    /**
     * 
     * @brief 推流成功。
     */
    
    ByteRtcTranscoderErrorCodeOK = 0,
    /**
     * 
     * @brief 未定义的合流错误
     */
    
    ByteRtcTranscoderErrorCodeBase = 1090,
    /**
     * 
     * @brief 客户端 SDK 检测到无效推流参数。
     */
    
    ByteRtcTranscoderErrorCodeInvalidParam = 1091,
    /**
     * 
     * @brief 状态错误，需要在状态机正常状态下发起操作
     */
    
    ByteRtcTranscoderErrorCodeInvalidState = 1092,
    /**
     * 
     * @brief 无效操作
     */
    
    ByteRtcTranscoderErrorCodeInvalidOperator = 1093,
    /**
     * 
     * @brief 转推直播任务处理超时，请检查网络状态并重试
     */
    
    ByteRtcTranscoderErrorCodeTimeOut = 1094,
    /**
     * 
     * @brief 服务端检测到错误的推流参数
     */
    
    ByteRtcTranscoderErrorCodeInvalidParamByServer = 1095,
    /**
     * 
     * @brief 对流的订阅超时
     */
    
    ByteRtcTranscoderErrorCodeSubTimeoutByServer = 1096,
    /**
     * 
     * @brief 合流服务端内部错误。
     */
    
    ByteRtcTranscoderErrorCodeInvalidStateByServer = 1097,
    /**
     * 
     * @brief 合流服务端推 CDN 失败。
     */
    
    ByteRtcTranscoderErrorCodeAuthenticationByCDN = 1098,
    /**
     * 
     * @brief 服务端接收信令超时，请检查网络状态并重试。
     */
    
    ByteRtcTranscoderErrorCodeTimeoutBySignaling = 1099,
    /**
     * 
     * @brief 图片合流失败。
     */
    
    ByteRtcTranscoderErrorCodeMixImageFail = 1100,
    /**
     * 
     * @brief 服务端未知错误。
     */
    
    ByteRtcTranscoderErrorCodeUnKnownErrorByServer = 1101,
    /**
     * 
     * @hidden internal use only
     * @valid since 3.50
     * @brief 缓存未同步。
     */
    
    ByteRtcTranscoderErrorCodeCacheSyncWorse = 1102,
    /**
    * 
    * @hidden for internal use only
    */
    
    ByteRtcTranscoderErrorCodeMax = 1199,
};

/**
 * 
 * @type errorcode
 * @brief 转推直播错误码。(新)
 */

typedef NS_ENUM(NSInteger, ByteRTCStreamMixingErrorCode) {
    /**
     * 
     * @brief 推流成功。
     */
    
    ByteRTCStreamMixingErrorCodeOK = 0,
    /**
     * 
     * @brief 未定义的合流错误
     */
    
    ByteRTCStreamMixingErrorCodeBase = 1090,
    /**
     * 
     * @brief 客户端 SDK 检测到无效推流参数。
     */
    
    ByteRTCStreamMixingErrorCodeInvalidParam = 1091,
    /**
     * 
     * @brief 状态错误，需要在状态机正常状态下发起操作
     */
    
    ByteRTCStreamMixingErrorCodeInvalidState = 1092,
    /**
     * 
     * @brief 无效操作
     */
    
    ByteRTCStreamMixingErrorCodeInvalidOperator = 1093,
    /**
     * 
     * @brief 转推直播任务处理超时，请检查网络状态并重试
     */
    
    ByteRTCStreamMixingErrorCodeTimeOut = 1094,
    /**
     * 
     * @brief 服务端检测到错误的推流参数
     */
    
    ByteRTCStreamMixingErrorCodeInvalidParamByServer = 1095,
    /**
     * 
     * @brief 对流的订阅超时
     */
    
    ByteRTCStreamMixingErrorCodeSubTimeoutByServer = 1096,
    /**
     * 
     * @brief 合流服务端内部错误。
     */
    
    ByteRTCStreamMixingErrorCodeInvalidStateByServer = 1097,
    /**
     * 
     * @brief 合流服务端推 CDN 失败。
     */
    
    ByteRTCStreamMixingErrorCodeAuthenticationByCDN = 1098,
    /**
     * 
     * @brief 服务端接收信令超时，请检查网络状态并重试。
     */
    
    ByteRTCStreamMixingErrorCodeTimeoutBySignaling = 1099,
    /**
     * 
     * @brief 图片合流失败。
     */
    
    ByteRTCStreamMixingErrorCodeMixImageFail = 1100,
    /**
     * 
     * @brief 服务端未知错误。
     */
    
    ByteRTCStreamMixingErrorCodeUnKnownErrorByServer = 1101,
    /**
     * 
     * @hidden currently not available
     * @brief 缓存未同步。
     */
    
    ByteRTCStreamMixingErrorCodeCacheSyncWorse = 1102,
    /**
    * 
    * @hidden for internal use only
    */
    
    ByteRTCStreamMixingErrorCodeMax = 1199,
};
/**
 * 
 * @type keytype
 * @brief 本地录制的媒体类型
 */

typedef NS_ENUM(NSInteger, ByteRTCRecordingType) {
    /**
     * 
     * @brief 只录制音频
     */
    
    ByteRTCRecordingTypeAudioOnly = 0,
    /**
     * 
     * @brief 只录制视频
     */
    
    ByteRTCRecordingTypeVideoOnly = 1,
    /**
     * 
     * @brief 同时录制音频和视频
     */
    
    ByteRTCRecordingTypeVideoAndAudio = 2,
};

/**
 * 
 * @type keytype
 * @brief 屏幕采集媒体类型
 */

typedef NS_ENUM(NSInteger, ByteRTCScreenMediaType) {
    /**
     * 
     *@brief 只采集视频数据
     */
    
    ByteRTCScreenMediaTypeVideoOnly = 0,
    /**
     * 
     *@brief 只采集音频数据
     */
    
    ByteRTCScreenMediaTypeAudioOnly = 1,
    /**
     * 
     *@brief 音视频数据都采集
     */
    
    ByteRTCScreenMediaTypeVideoAndAudio = 2
};

/**
 * 
 * @type keytype
 * @brief 屏幕采集对象的类型
 */

typedef NS_ENUM(NSUInteger, ByteRTCScreenCaptureSourceType) {
    /**
     * 
     * @brief 类型未知
     */
    
    ByteRTCScreenCaptureSourceTypeUnknown = 0,
    /**
     * 
     * @brief 应用程序的窗口
     */
    
    ByteRTCScreenCaptureSourceTypeWindow = 1,
    /**
     * 
     * @brief 桌面
     */
    
    ByteRTCScreenCaptureSourceTypeScreen = 2
};
/**
 * 
 * @type keytype
 * @region 屏幕共享
 * @brief 内部采集屏幕视频流时，是否采集鼠标信息。
 */

typedef NS_ENUM(NSUInteger, ByteRTCMouseCursorCaptureState) {
    /**
     * 
     * @brief 采集鼠标信息。
     */
    
    ByteRTCMouseCursorCaptureStateOn,
    /**
     * 
     * @brief 不采集鼠标信息。
     */
    
    ByteRTCMouseCursorCaptureStateOff,
};
/**
 * 
 * @type keytype
 * @brief 屏幕共享时的边框高亮设置。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCHighlightConfig: NSObject
/**
 * 
 * @brief 是否显示高亮边框，默认显示。
 */

@property (assign, nonatomic) BOOL enableHighlight;
/**
 * 
 * @brief 边框的颜色, 颜色格式为十六进制 ARGB: 0xAARRGGB。
 */

@property (assign, nonatomic) uint32_t borderColor;
/**
 * 
 * @brief 边框的宽度，单位：像素。
 */

@property (assign, nonatomic) int borderWidth;
@end

/**
 * 
 * @type keytype
 * @brief 相机补光灯状态
 */

typedef NS_ENUM(NSInteger, ByteRTCTorchState) {
    /**
     * 
     * @brief 相机补光灯关闭
     */
    
    ByteRTCTorchStateOff = 0,
    /**
     * 
     * @brief 相机补光灯打开
     */
    
    ByteRTCTorchStateOn = 1,
};

/**
 * 
 * @type keytype
 * @brief 当前视频设备类型
 */

typedef NS_ENUM(NSInteger, ByteRTCVideoDeviceType) {
    /**
     * 
     * @brief 未知视频设备
     */
    
    ByteRTCVideoDeviceTypeUnknown = -1,
    /**
     * 
     * @brief 视频渲染设备类型
     */
    
    ByteRTCVideoDeviceTypeRenderDevice = 0,
    /**
     * 
     * @brief 视频采集设备类型
     */
    
    ByteRTCVideoDeviceTypeCaptureDevice = 1,
    /**
     * 
     * @brief 屏幕流视频设备
     */
    
    ByteRTCVideoDeviceTypeScreenCaptureDevice = 2
};

/**
 * 
 * @type keytype
 * @brief 媒体流类型
 */

typedef NS_OPTIONS(NSUInteger, ByteRTCMediaStreamType) {
    /**
     * 
     * @brief 只控制音频
     */
    
    ByteRTCMediaStreamTypeAudio = (1 << 0),
    /**
     * 
     * @brief 只控制视频
     */
    
    ByteRTCMediaStreamTypeVideo = (1 << 1),
    /**
     * 
     * @brief 同时控制音频和视频
     */
    
    ByteRTCMediaStreamTypeBoth = ByteRTCMediaStreamTypeAudio | ByteRTCMediaStreamTypeVideo,
};

/**
 * 
 * @type keytype
 * @brief 占发布端原始帧率的比例
 */

typedef NS_ENUM(NSUInteger, ByteRTCFrameRateRatio) {
    /**
     * 
     * @brief 100%
     */
    
    ByteRTCFrameRateRatioOrigin = 0,
    /**
     * 
     * @brief 50%
     */
    
    ByteRTCFrameRateRatioHalf = 1,
    /**
     * 
     * @brief 25%
     */
    
    ByteRTCFrameRateRatioQuater = 2,
};

/**
 * 
 * @type keytype
 * @brief 视频旋转模式
 */

typedef NS_ENUM(NSUInteger, ByteRTCVideoRotationMode) {
    /**
     * 
     * @brief App 方向
     */
    
    ByteRTCVideoRotationModeFollowApp = 0,
    /**
     * 
     * @brief 重力方向
     */
    
    ByteRTCVideoRotationModeFollowGSensor = 1,
};

/**
 * 
 * @type keytype
 * @brief 弱光适应类型
 */

typedef NS_ENUM(NSUInteger, ByteRTCVideoEnhancementMode) {
    /**
     * 
     * @brief 关闭弱光适应
     */
    
    ByteRTCVideoEnhancementModeDisabled = 0,

    /**
     * 
     * @brief 开启弱光适应
     */
    
    ByteRTCVideoEnhancementModeAuto = 1,
};

/**
 * 
 * @type keytype
 * @brief 人像属性检测参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCExpressionDetectConfig : NSObject
/**
 * 
 * @brief 是否开启年龄检测。
 */

@property (assign, nonatomic) BOOL enableAgeDetect;
/**
 * 
 * @brief 是否开启性别检测。
 */

@property (assign, nonatomic) BOOL enableGenderDetect;
/**
 * 
 * @brief 是否开启表情检测。
 */

@property (assign, nonatomic) BOOL enableEmotionDetect;
/**
 * 
 * @brief 是否开启吸引力检测。
 */

@property (assign, nonatomic) BOOL enableAttractivenessDetect;
/**
 * 
 * @brief 是否开启开心程度检测。
 */

@property (assign, nonatomic) BOOL enableHappinessDetect;
@end

/**
 * 
 * @type keytype
 * @brief 人像属性检测信息
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCExpressionDetectInfo : NSObject
/**
* 
* @brief 预测年龄，取值范围 (0, 100)。
*/

@property (assign, nonatomic) float age;
/**
* 
* @brief 预测为男性的概率，取值范围 (0.0, 1.0)。
*/

@property (assign, nonatomic) float boyProb;
/**
* 
* @brief 预测的吸引力分数，取值范围 (0, 100)。
*/

@property (assign, nonatomic) float attractive;
/**
* 
* @brief 预测的微笑程度，取值范围 (0, 100)。
*/

@property (assign, nonatomic) float happyScore;
/**
* 
* @brief 预测的伤心程度，取值范围 (0, 100)。
*/

@property (assign, nonatomic) float sadScore;
/**
* 
* @brief 预测的生气程度，取值范围 (0, 100)。
*/

@property (assign, nonatomic) float angryScore;
/**
* 
* @brief 预测的吃惊程度，取值范围 (0, 100)。
*/

@property (assign, nonatomic) float surpriseScore;
/**
* 
* @brief 预测的情绪激动程度，取值范围 (0, 100)。
*/

@property (assign, nonatomic) float arousal;
/**
* 
* @brief 预测的情绪正负程度，取值范围 (-100, 100)。
*/

@property (assign, nonatomic) float valence;
@end

/**
 * 
 * @type keytype
 * @brief 人像属性检测结果
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCExpressionDetectResult : NSObject
/**
 * 
 * @brief 特征识别结果 <br>
 *        - 0：识别成功
 *        - !0：识别失败
 */

@property (assign, nonatomic) int detectResult;
/**
 * 
 * @brief 识别到的人脸数量。
 */

@property (assign, nonatomic) int faceCount;

/**
 * 
 * @brief 特征识别信息。数组的长度和检测到的人脸数量一致。参看 ByteRTCExpressionDetectInfo{@link #ByteRTCExpressionDetectInfo}。
 */

@property (nonatomic, copy) NSArray<ByteRTCExpressionDetectInfo *> * _Nonnull detectInfo;

@end

/**
 * 
 * @type keytype
 * @brief 矩形区域，用于指定屏幕区域。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCRectangle : NSObject
/**
 * 
 * @brief 矩形区域左上角的 x 坐标。
 */

@property(assign, nonatomic) int x;
/**
 * 
 * @brief 矩形区域左上角的 y 坐标。
 */

@property(assign, nonatomic) int y;
/**
 * 
 * @brief 矩形宽度，单位：px。
 */

@property(assign, nonatomic) int width;
/**
 * 
 * @brief 矩形高度，单位：px。
 */

@property(assign, nonatomic) int height;
@end
/**
 * 
 * @type keytype
 * @brief 人脸检测结果
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCFaceDetectionResult : NSObject
/**
 * 
 * @brief 人脸检测结果 <br>
 *        - 0：检测成功
 *        - !0：检测失败。详见[错误码](https:
 */

@property(assign, nonatomic) int detectResult;
/**
 * 
 * @brief 原始图片宽度(px)
 */

@property(assign, nonatomic) int imageWidth;
/**
 * 
 * @brief 原始图片高度(px)
 */

@property(assign, nonatomic) int imageHeight;
/**
 * 
 * @brief 识别到人脸的矩形框。数组的长度和检测到的人脸数量一致。参看 ByteRTCRectangle{@link #ByteRTCRectangle}。
 */

@property(nonatomic, copy) NSArray<ByteRTCRectangle *> * _Nullable faces;
/**
 * 
 * @brief 进行人脸识别的视频帧的时间戳。
 */

@property(assign, nonatomic) CMTime frameTimestamp;

@end
/**
 * 
 * @type keytype
 * @brief 视频帧渲染设置
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoCanvas : NSObject
/**
 * 
 * @brief 本地视图句柄
 */

@property(strong, nonatomic) ByteRTCView* _Nullable view;
/**
 * 
 * @brief 渲染模式，参看 ByteRTCRenderMode{@link #ByteRTCRenderMode}
 */

@property(assign, nonatomic) ByteRTCRenderMode renderMode;
/**
 * 
 * @brief 用于填充画布空白部分的背景颜色。取值范围是 `[0x00000000, 0xFFFFFFFF]`,格式为 BGR。默认值是 `0x00000000`。其中，透明度设置无效。
 */

@property(assign, nonatomic) NSInteger backgroundColor;
/**
 * 
 * @brief 视频帧旋转角度。参看 ByteRTCVideoRotation{@link #ByteRTCVideoRotation}。默认为 0 度，即不做旋转处理。 <br>
 *        该设置仅对远端视频有效，对本地视频设置不生效。
 */

@property(assign, nonatomic) ByteRTCVideoRotation renderRotation;
@end

/**
 * 
 * @type keytype
 * @brief 远端视频帧渲染设置
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCRemoteVideoRenderConfig : NSObject
/**
 * 
 * @brief 渲染模式，参看 ByteRTCRenderMode{@link #ByteRTCRenderMode}
 */

@property(assign, nonatomic) ByteRTCRenderMode renderMode;
/**
 * 
 * @brief 用于填充画布空白部分的背景颜色。取值范围是 `[0x00000000, 0xFFFFFFFF]`,格式为 BGR。默认值是 `0x00000000`。其中，透明度设置无效。
 */

@property(assign, nonatomic) NSInteger backgroundColor;
/**
 * 
 * @brief 视频帧旋转角度。参看 ByteRTCVideoRotation{@link #ByteRTCVideoRotation}。默认为 0 度，即不做旋转处理。
 */

@property(assign, nonatomic) ByteRTCVideoRotation renderRotation;
@end


/**
 * 
 * @type keytype
 * @brief 视频帧附加的数据,视频解码后获得的附加数据
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCFrameExtendedData : NSObject
/**
 * 
 * @brief 数据类型，详见 ByteRTCDataFrameType{@link #ByteRTCDataFrameType}。
 */

@property(assign, nonatomic) ByteRTCDataFrameType frameType;
/**
 * 
 * @brief 附加数据
 */

@property(strong, nonatomic) NSData * _Nullable extendedData;
/**
 * 
 * @brief 附加数据长度
 */

@property(assign, nonatomic) NSInteger extendedDataLen;
@end

NS_ASSUME_NONNULL_BEGIN

/**
 * 
 * @type keytype
 * @brief 视频流参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoSolution: NSObject
/**
 * 
 * @brief 视频分辨率
 */

@property(nonatomic, assign) CGSize videoSize;
/**
 * 
 * @brief 视频预设帧率
 */

@property(nonatomic, assign) NSInteger frameRate;
/**
 * 
 * @brief 最高编码码率（千比特每秒）。建议使用 `-1`，SDK 会自动根据分辨率和帧率适配合适的码率。
 */

@property(nonatomic, assign) NSInteger maxKbps;
/**
 * 
 * @brief 最低编码码率（千比特每秒）
 */

@property(nonatomic, assign) NSInteger minKbps;
/**
 * 
 * @brief 视频编码质量策略，参见 ByteRTCVideoEncoderPreference{@link #ByteRTCVideoEncoderPreference}
 */

@property(nonatomic, assign) ByteRTCVideoEncoderPreference encoderPreference;
@end

/**
 * 
 * @type keytype
 * @brief 视频采集参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoCaptureConfig: NSObject
/**
 * 
 * @brief 视频采集模式，参看 ByteRTCVideoCapturePreference{@link #ByteRTCVideoCapturePreference}
 */

@property(nonatomic, assign) ByteRTCVideoCapturePreference preference;

/**
 * 
 * @brief 视频采集分辨率
 */

@property(nonatomic, assign) CGSize videoSize;
/**
 * 
 * @brief 视频采集帧率，单位：fps。
 */

@property(nonatomic, assign) NSInteger frameRate;
@end

/**
 * 
 * @type keytype
 * @brief 流属性。
 */

BYTERTC_APPLE_EXPORT @protocol ByteRTCStream <NSObject>
/**
 * 
 * @brief 发布此流的用户 ID 。
 */

@property(nonatomic, copy, readonly) NSString * userId;
/**
 * 
 * @brief 此流是否为共享屏幕流。
 */

@property(nonatomic, assign, readonly) BOOL isScreen;
/**
 * 
 * @brief 此流是否包括视频流。
 */

@property(nonatomic, assign, readonly) BOOL hasVideo;
/**
 * 
 * @brief 流是否包括音频流。
 */

@property(nonatomic, assign, readonly) BOOL hasAudio;
/**
 * 
 * @brief 视频流的分辨率信息。 <br>
 *         当远端用户调用 setVideoEncoderConfig:{@link #ByteRTCVideo#setVideoEncoderConfig:} 方法发布多个配置的视频流时，此处会包含该用户发布的所有视频流的属性信息。 <br>
 *         参看 ByteRTCVideoSolution{@link #ByteRTCVideoSolution}。
 */

@property(nonatomic, copy, readonly) NSArray<ByteRTCVideoSolution *> * videoStreamDescriptions;
/**
 * 
 * @brief 视频流最大分辨率，在开启多分辨率发布订阅时，回调发布端能支持的最大发布分辨率。
 */

@property(nonatomic, retain, readonly) ByteRTCVideoSolution *maxVideoStreamDescription;


@property(nonatomic, assign) ByteRTCStreamIndex index;
@end

/**
 * 
 * @type keytype
 * @brief 流信息
 */

@interface ByteRTCStreamEx : NSObject <ByteRTCStream>
/**
 * 
 * @brief 用户 ID
 */

@property(nonatomic, copy, nullable) NSString *userId;
/**
 * 
 * @brief 流是否为共享屏幕流。
 */

@property(nonatomic, assign) BOOL isScreen;
/**
 * 
 * @brief 该路流中是否包含视频
 */

@property(nonatomic, assign) BOOL hasVideo;
/**
 * 
 * @brief 该路流中是否包含音频
 */

@property(nonatomic, assign) BOOL hasAudio;
/**
 * 
 * @brief 视频流的分辨率信息，详见 ByteRTCVideoSolution{@link #ByteRTCVideoSolution} 类。 <br>
 *         用户可以通过调用 setVideoEncoderConfig:{@link #ByteRTCVideo#setVideoEncoderConfig:} 方法在一路流中发布多个不同的视频分辨率。此参数即为流中所有分辨率的相关信息。
 */

@property(nonatomic, copy, nullable) NSArray<ByteRTCVideoSolution *> *videoStreamDescriptions;
/**
 * 
 * @brief 视频流最大分辨率，在开启多分辨率发布订阅时，回调发布端能支持的最大发布分辨率。
 */

@property(nonatomic, retain, nullable) ByteRTCVideoSolution *maxVideoStreamDescription;

@property(nonatomic, assign) ByteRTCStreamIndex index;
@end

/**
 * 
 * @type keytype
 * @brief 订阅流的参数配置。用户手动订阅一路音视频流所使用的订阅配置参数。 <br>
 *         用户关闭自动订阅功能，使用手动订阅模式时，通过调用 `subscribeStream` 方法订阅音视频流，调用时传入的参数即为此数据类型。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCSubscribeConfig: NSObject
/**
 * 
 * @brief 是否是屏幕流。 <br>
 *         用户通过设置此参数，订阅该远端用户发布的屏幕共享流或非屏幕共享流。 YES 为订阅屏幕共享流，NO 为订阅非屏幕共享流，默认值为 YES 。
 */

@property(nonatomic, assign) BOOL isScreen;
/**
 * 
 * @brief 是否订阅视频。 <br>
 *         用户通过设置此参数，选择是否订阅远端流中的视频。 YES 为订阅视频，NO 为不订阅视频，默认值为 YES 。
 */

@property(nonatomic, assign) BOOL subscribeVideo;
/**
 * 
 * @brief 是否订阅音频。 <br>
 *         用户通过设置此参数，选择是否订阅远端流中的音频。YES 为订阅音频，NO 为不订阅音频，默认值为 YES 。
 */

@property(nonatomic, assign) BOOL subscribeAudio;
/**
 * 
 * @brief 订阅的视频流分辨率下标。 <br>
 *         用户可以通过调用 setVideoEncoderConfig:{@link #ByteRTCVideo#setVideoEncoderConfig:} 方法发布多个不同分辨率的视频。因此订阅流时，需要指定订阅的具体分辨率。此参数即用于指定需订阅的分辨率的下标，默认值为 0 。
 */

@property(nonatomic, assign) NSInteger videoIndex;
/**
 * 
 * @brief 订阅的视频流时域分层，默认值为 0。
 */

@property(nonatomic, assign) NSInteger svcLayer;
/**
 * 
 * @brief 订阅的宽度信息，单位：px，默认值为 0。
 */

@property(nonatomic, assign) NSInteger width;
/**
 * 
 * @brief 订阅的高度信息，单位：px， 默认值为 0。
 */

@property(nonatomic, assign) NSInteger height;
/**
 * 
 * @hidden for internal use only
 */

@property(nonatomic, assign) NSInteger subVideoIndex;
/**
 * 
 * @brief 期望订阅的最高帧率，单位：fps，默认值为 0，设为大于 0 的值时开始生效。 <br>
 *        如果发布端发布帧率 > 订阅端订阅的帧率，下行媒体服务器 SVC 丢帧，订阅端收到通过此接口设置的帧率；如果发布端发布帧率 < 订阅端订阅的帧率，则订阅端只能收到发布的帧率。 <br>
 *        仅码流支持 SVC 分级编码特性时方可生效。
 */

@property (nonatomic, assign) NSInteger framerate;


@end

NS_ASSUME_NONNULL_END

/**
 * 
 * @type keytype
 * @brief 待 SDK 编码的视频数据
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoFrame : NSObject
/**
 * 
 * @brief 视频帧格式，参考 ByteRTCVideoPixelFormat {@link #ByteRTCVideoPixelFormat}
 */

@property(assign, nonatomic) int format;
/**
 * 
 * @brief 获取视频内容类型，参看 ByteRTCVideoContentType{@link #ByteRTCVideoContentType}
 */

@property(assign, nonatomic) ByteRTCVideoContentType contentType;
/**
 * 
 * @brief 当前帧的时间戳信息
 */

@property(assign, nonatomic) CMTime time;
/**
 * 
 * @deprecated since 3.45 and will be deleted in 3.51, use strideInPixels instead.
 */

@property(assign, nonatomic) int stride DEPRECATED_MSG_ATTRIBUTE("use strideInPixels instead");
/**
 * 
 * @brief 每一行像素占用的字节数
 */

@property(assign, nonatomic) int strideInPixels;
/**
 * 
 * @brief 视频帧宽度
 */

@property(assign, nonatomic) int width;
/**
 * 
 * @brief 视频帧高度
 */

@property(assign, nonatomic) int height;
/**
 * 
 * @brief CVPixelBufferRef 类型的数据，当 format 为 kPixelFormatCVPixelBuffer 时有效
 */

@property(assign, nonatomic) CVPixelBufferRef _Nullable textureBuf;
/**
 * 
 * @brief 视频帧内存块首地址
 */

@property(strong, nonatomic) NSData * _Nullable dataBuf;
/**
 * 
 * @brief 视频帧旋转角度：0, 90, 180, 270
 */

@property(assign, nonatomic) ByteRTCVideoRotation rotation;
/**
 * 
 * @hidden for internal use only
 * @brief 视频镜像信息
 */

@property(assign, nonatomic) int flip;
/**
 * 
 * @brief 颜色空间
 */

@property(assign, nonatomic) ByteRTCColorSpace colorSpace;
/**
 * 
 * @brief 视频帧的摄像头信息，参考 ByteRTCCameraID{@link #ByteRTCCameraID}
 */

@property(assign, nonatomic) ByteRTCCameraID cameraId;
/**
 * 
 * @brief 视频帧附加的 sei 数据
 */

@property(strong, nonatomic) NSData * _Nullable extendedData;

/**
 * 
 * @brief 视频帧附加的 roi 数据
 */

@property(strong, nonatomic) NSData * _Nonnull supplementaryInfo;

/**
 * 
 * @brief 视频帧颜色 plane 数量; 当 textureBuf 有值时, 该值无意义。 <br>
 *        yuv 数据存储格式分为打包（packed）存储格式和平面（planar）存储格式，planar 格式中 Y、U、V 分平面存储，packed 格式中 Y、U、V 交叉存储
 */

@property (assign, nonatomic) int numberOfPlanes;

/**
 * 
 * @brief 获取 plane 数据指针, 数组长度与 numberOfPlanes 一致, 元素类型为 NSData*; 当 textureBuf 有值时, 该值无意义
 * @param plane_index plane 数据索引
 */

@property (strong, nonatomic) NSArray * _Nullable planeDatas;

/**
 * 
 * @brief 获取 plane 中数据行的长度,  数组长度与 numberOfPlanes 一致, 元素类型为 NSNumber*; 当 textureBuf 有值时, 该值无意义
 * @param plane_index plane 数据索引
 */

@property (strong, nonatomic) NSArray * _Nullable planeStrides;

@end

/**
 * 
 * @type keytype
 * @brief 视频帧信息
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCEncodedVideoFrame : NSObject
/**
 * 
 * @brief 视频编码类型。参看 ByteRTCVideoCodecType{@link #ByteRTCVideoCodecType}
 */

@property(assign, nonatomic) ByteRTCVideoCodecType codecType;
/**
 * 
 * @brief 视频帧类型。参看 ByteRTCVideoPictureType{@link #ByteRTCVideoPictureType}
 */

@property(assign, nonatomic) ByteRTCVideoPictureType pictureType;
/**
 * 
 * @brief 视频采集时间戳，单位：微秒
 */

@property(assign, nonatomic) SInt64 timestampUs;
/**
 * 
 * @brief 视频编码时间戳，单位：微秒
 */

@property(assign, nonatomic) SInt64 timestampDtsUs;
/**
 * 
 * @brief 视频帧宽，单位：px
 */

@property(assign, nonatomic) int width;
/**
 * 
 * @brief 视频帧高，单位：px
 */

@property(assign, nonatomic) int height;
/**
 * 
 * @brief 视频帧旋转角度。参看 ByteRTCVideoRotation{@link #ByteRTCVideoRotation}
 */

@property(nonatomic, assign) ByteRTCVideoRotation rotation;
/**
 * 
 * @brief 视频帧数据指针地址
 */

@property(strong, nonatomic) NSData * _Nonnull data;

@end
/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamLayoutRegionImageWaterMarkConfig{@link #ByteRTCMixedStreamLayoutRegionImageWaterMarkConfig} instead.
 * @type keytype
 * @brief 图片合流相关参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCTranscoderLayoutRegionDataParam : NSObject
/**
 * 
 * @brief 原始图片的宽度，单位为 px。
 */

@property (assign, nonatomic) NSInteger imageWidth;
/**
 * 
 * @brief 原始图片的高度，单位为 px。
 */

@property (assign, nonatomic) NSInteger imageHeight;
@end

/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamLayoutRegionConfig{@link #ByteRTCMixedStreamLayoutRegionConfig} instead.
 * @type keytype
 * @brief 单个图片或视频流在合流中的布局信息。 <br>
 *        开启转推直播功能后，在多路图片或视频流合流时，你可以设置其中一路流在合流中的预设布局信息。
 * @note
 *         - 视频流对应区域左上角的实际坐标是通过画面尺寸和归一化比例相乘，并四舍五入取整得到的。假如：Canvas.Width = 1920, Region.LocationX = 0.33，那么该画布左上角的横坐标为 634（1920×0.33=633.6，四舍五入取整）。
 *         - 视频流对应区域宽度和高度的像素值是通过画面尺寸和归一化比例相乘，四舍五入取整，并向上转换为偶数得到的。假如：Canvas.Width = 1920, Region.WidthProportion = 0.21，那么该画布横向宽度为 404px（1920x0.21=403.2，四舍五入取整后，再向上转换为偶数）。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoCompositingRegion : NSObject
/**
 * 
 * @brief 视频流发布用户的用户 ID 。必填。
 */

@property(copy, nonatomic) NSString * _Nonnull uid;
/**
 * 
 * @brief 图片或视频流所在房间的房间 ID。必填。 <br>
 *        如果此图片或视频流是通过 startForwardStreamToRooms:{@link #ByteRTCRoom#startForwardStreamToRooms:} 转发到你所在房间的媒体流时，你应将房间 ID 设置为你所在的房间 ID。
 */

@property(copy, nonatomic) NSString * _Nonnull roomId;
/**
 * 
 * @brief 视频流对应区域左上角的横坐标相对整体画面的归一化比例，取值的范围为 [0.0, 1.0)。默认值为 0.0。
 */

@property(assign, nonatomic) CGFloat x;
/**
 * 
 * @brief 视频流对应区域左上角的纵坐标相对整体画面的归一化比例，取值的范围为 [0.0, 1.0)。默认值为 0.0。
 */

@property(assign, nonatomic) CGFloat y;
/**
 * 
 * @brief 视频流对应区域宽度相对整体画面的归一化比例，取值的范围为 [0.0, 1.0]。默认值为 1.0。
 */

@property(assign, nonatomic) CGFloat width;
/**
 * 
 * @brief 视频流对应区域高度相对整体画面的归一化比例，取值的范围为 [0.0, 1.0]。默认值为 1.0。
 */

@property(assign, nonatomic) CGFloat height;
/**
 * 
 * @brief 用户视频布局在画布中的层级。取值范围为 [0 - 100]，0 为底层，值越大越上层。默认值为 0。
 */

@property(assign, nonatomic) NSInteger zOrder;
/**
 * 
 *  @brief 是否为本地用户
 */

 @property(assign, nonatomic) BOOL localUser;
/**
 * 
 *  @brief （仅服务端合流支持合屏幕流）是否为屏幕流，默认为 NO
 */

 @property(assign, nonatomic) BOOL screenStream;
/**
 * 
 * @brief （仅服务端合流支持设置）透明度，可选范围为 (0.0, 1.0]，0.0 为全透明。默认值为 1.0。
 */

@property(assign, nonatomic) CGFloat alpha;
/**
 * 
 * @brief （仅服务端合流支持设置）圆角半径相对画布宽度的比例。默认值为 `0.0`。 <br>
 *         做范围判定时，首先根据画布的宽高，将 `width`，`height`，和 `cornerRadius` 分别转换为像素值：`width_px`，`height_px`，和 `cornerRadius_px`。然后判定是否满足 `cornerRadius_px < min(width_px/2, height_px/2)`：若满足，则设置成功；若不满足，则将 `cornerRadius_px` 设定为 `min(width_px/2, height_px/2)`，然后将 `cornerRadius` 设定为 `cornerRadius_px` 相对画布宽度的比例值。
 */

@property(assign, nonatomic) CGFloat cornerRadius;
/**
 * 
 * @brief （仅服务端合流支持设置）合流内容控制。默认值为 `ByteRTCTranscoderContentControlTypeHasAudioAndVideo`，参看 ByteRTCTranscoderContentControlType{@link #ByteRTCTranscoderContentControlType} 。
 */

@property (assign, nonatomic) ByteRTCTranscoderContentControlType contentControl;
/**
 * 
 * @brief 图片或视频流的缩放模式，参看 ByteRTCRenderMode{@link #ByteRTCRenderMode}。默认值为 1。
 */

@property(assign, nonatomic) ByteRTCRenderMode renderMode;
/**
 * 
 * @brief 合流布局区域类型。参看 ByteRTCTranscoderLayoutRegionType{@link #ByteRTCTranscoderLayoutRegionType}。
 */

@property (assign, nonatomic) ByteRTCTranscoderLayoutRegionType type;
/**
 * 
 * @brief 图片合流布局区域类型对应的数据。类型为图片时传入图片 RGBA 数据，当类型为视频流时传空。
 */

@property (strong, nonatomic) NSData * _Nullable data;
/**
 * 
 * @type keytype
 * @brief 合流布局区域数据的对应参数。当类型为视频流时传空，类型为图片时传入对应图片的参数，参看 ByteRTCTranscoderLayoutRegionDataParam{@link #ByteRTCTranscoderLayoutRegionDataParam}。
 */

@property (strong, nonatomic) ByteRTCTranscoderLayoutRegionDataParam * _Nullable dataParam;
/**
 * 
 * @type keytype
 * @brief 空间位置。参看 ByteRTCPosition{@link #ByteRTCPosition}。
 */

@property (strong, nonatomic) ByteRTCPosition * _Nullable spatialPosition;
/**
 * 
 * @type keytype
 * @brief 设置某用户是否应用空间音频效果： <br>
 *        - Yes：启用（默认值）
 *        - No：禁用
 */ 

@property(assign, nonatomic) BOOL applySpatialAudio;

@end

/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamLayoutConfig{@link #ByteRTCMixedStreamLayoutConfig} instead.
 * @type keytype
 * @brief 视频流合流整体布局信息。 <br>
 *        开启转推直播功能后，你可以设置参与合流的每路视频流的预设布局信息和合流背景信息等。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoCompositingLayout : NSObject
/**
 * 
 * @brief 合流背景颜色，用十六进制颜色码（HEX）表示。例如，#FFFFFF 表示纯白，#000000 表示纯黑。默认值为 #000000。 <br>
 *        值不合法或未设置时，自动使用默认值。
 */

@property(copy, nonatomic) NSString *_Nonnull backgroundColor;
/**
 * 
 * @brief 用户布局信息列表。每条流的具体布局参看 ByteRTCVideoCompositingRegion{@link #ByteRTCVideoCompositingRegion}。 <br>
 *        值不合法或未设置时，自动使用默认值。
 */

@property(copy, nonatomic) NSArray<ByteRTCVideoCompositingRegion *> * _Nonnull regions;
/**
 * 
 * @brief 透传的 App 数据，长度不超过 4KB。
 */

@property(copy, nonatomic) NSString *_Nonnull appData;
@end

/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamVideoConfig{@link #ByteRTCMixedStreamVideoConfig} instead.
 * @type keytype
 * @brief 视频转码配置参数。值不合法或未设置时，自动使用默认值。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCTranscodingVideoConfig : NSObject
/**
 * 
 * @brief 视频编码格式，参看 ByteRTCTranscodingVideoCodec{@link #ByteRTCTranscodingVideoCodec}。默认值为 `0`。 <br>
 *        本参数不支持过程中更新。
 */

@property(assign, nonatomic) ByteRTCTranscodingVideoCodec codec;
/**
 * 
 * @brief 合流视频宽度。单位为 px，范围为 [2, 1920]，必须是偶数。默认值为 640 px。 <br>
 *        设置值为非偶数时，自动向上取偶数。
 */

@property(assign, nonatomic) NSInteger width;
/**
 * 
 * @brief 合流视频高度。单位为 px，范围为 [2, 1920]，必须是偶数。默认值为 360 px。 <br>
 *        设置值为非偶数时，自动向上取偶数。
 */

@property(assign, nonatomic) NSInteger height;
/**
 * 
 * @brief 合流视频帧率。单位为 FPS，取值范围为 [1,60]，默认值为 15 FPS。
 */

@property(assign, nonatomic) NSInteger fps;
/**
 * 
 * @brief 视频 I 帧时间间隔。单位为秒，取值范围为 [1, 5]，默认值为 2 秒。 <br>
 *        本参数不支持过程中更新。
 */

@property(assign, nonatomic) NSInteger gop;
/**
 * 
 * @brief 合流视频码率。单位为 Kbps，取值范围为 [1,10000]，默认值为自适应模式。
 */

@property(assign, nonatomic) NSInteger kBitRate;
/**
 * 
 * @deprecated since 3.45 and will be deleted in 3.51.
 * @brief 是否使用低延时特性。
 */

@property(assign, nonatomic) BOOL lowLatency;
/**
 * 
 * @brief 是否在合流中开启 B 帧，仅服务端合流支持.
 */

@property(assign, nonatomic) BOOL bFrame;
@end

/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamAudioConfig{@link #ByteRTCMixedStreamAudioConfig} instead.
 * @type keytype
 * @brief 音频转码配置参数。值不合法或未设置时，自动使用默认值。 <br>
 *        本参数不支持过程中更新。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCTranscodingAudioConfig : NSObject
/**
 * 
 * @brief 音频编码格式。
 * @param codec 音频编码格式，参看 ByteRTCTranscodingAudioCodec{@link #ByteRTCTranscodingAudioCodec}。默认值为 `0`。
 */

@property(assign, nonatomic) ByteRTCTranscodingAudioCodec codec;
/**
 * 
 * @brief 音频采样率，单位 Hz。可取 32000 Hz、44100 Hz、48000 Hz，默认值为 48000 Hz。
 */

@property(assign, nonatomic) NSInteger sampleRate;
/**
 * 
 * @brief 音频声道数。可取 1（单声道）、2（双声道），默认值为 2。
 */

@property(assign, nonatomic) NSInteger channels;
/**
 * 
 * @brief 音频码率，单位 Kbps。可取范围 [32, 192]，默认值为 64 Kbps。
 */

@property(assign, nonatomic) NSInteger kBitRate;
/**
 * 
 * @brief AAC 编码规格，参看 ByteRTCAACProfile{@link #ByteRTCAACProfile}。默认值为 `0`。
 */

@property(assign, nonatomic) ByteRTCAACProfile profile;
/**
 * 
 * @deprecated since 3.45 and will be deleted in 3.51.
 */

+ (NSString* _Nonnull) toStringWithProfile:(ByteRTCAACProfile) aacProfile;
@end

/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamSpatialAudioConfig{@link #ByteRTCMixedStreamSpatialAudioConfig} instead.
 * @type keytype
 * @brief 推流 CDN 的空间音频参数。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCTranscodingSpatialConfig : NSObject
/**
 * 
 * @brief 是否开启推流 CDN 时的空间音频效果。 <br>
 *        当你启用此效果时，你需要设定推流中各个 ByteRTCTranscodingSpatialConfig{@link #ByteRTCTranscodingSpatialConfig} 的 `spatialPosition` 值，实现空间音频效果。
 */

@property(assign, nonatomic) BOOL enableSpatialRender;
/**
 * 
 * @brief 听众的空间位置。参看 ByteRTCPosition{@link #ByteRTCPosition}。 <br>
 *        听众指收听来自 CDN 的音频流的用户。
 */

@property (strong, nonatomic) ByteRTCPosition * _Nullable audienceSpatialPosition;
/**
 * 
 * @brief 听众的空间朝向。参看 ByteRTCHumanOrientation{@link #ByteRTCHumanOrientation}。 <br>
 *        听众指收听来自 CDN 的音频流的用户。
 */

@property(strong, nonatomic) ByteRTCHumanOrientation * _Nullable audienceSpatialOrientation;

@end
/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamClientMixConfig{@link #ByteRTCMixedStreamClientMixConfig} instead.
 * @type keytype
 * @brief 客户端合流参数。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCTranscodingClientMixParam : NSObject
/**
 * 
 * @brief 是否使用原始视频帧。默认为 False。
 */

@property(assign, nonatomic) BOOL clientMixUseOriginalFrame;
/**
 * 
 * @brief 客户端合流是否使用音频混音，默认为 true。
 */

@property(assign, nonatomic) BOOL clientMixUseAudioMixer;
/**
 * 
 * @brief 客户端合流回调视频格式，参看 ByteRTCClientMixVideoFormat{@link #ByteRTCClientMixVideoFormat}。
 */

@property(assign, nonatomic) ByteRTCClientMixVideoFormat clientMixVideoFormat;
@end
/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamSyncControlConfig instead.
 * @hidden internal use only
 * @valid since 3.50
 * @type keytype
 * @brief 转推直播单通同步参数。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCTranscodingSyncControlParam : NSObject
/**
 * 
 * @brief 是否在转推直播时，启用单通模式。默认为 false，不启用。 <br>
 *        启用单通模式时，RTC SDK 会对指定的多个用户的媒体流进行同步处理，再合流后推送到 CDN，但基准流所属用户不会播放来自其他用户的媒体流。你需要设定以下参数。 <br>
 *        非单通模式时，RTC SDK 不会对媒体流进行同步处理，只是简单合流后推送到 CDN。以下参数设定无效。
 */

@property(assign, nonatomic) BOOL syncStream;
/**
 * 
 * @brief 在进行同步处理时，基准流所属用户的 ID。默认为空。
 */

@property(copy, nonatomic) NSString * _Nullable syncBaseUser;
/**
 * 
 * @brief 在进行同步处理时，缓存音视频流的最大长度。单位为毫秒。默认值为 0。 <br>
 *        参与转推直播的这些媒体流延迟越高，应该将此值设置的越大。但此值越大，因缓存媒体流造成的内存占用也会更大。推荐值为 `2000`。
 */

@property(assign, nonatomic) NSInteger syncQueueLengthMs;
/**
 * 
 * @brief 是否通过 RTC SDK 进行转推直播。默认为 True。 <br>
 *        如果选择 `False`，你会通过 onCacheSyncVideo:withDataFrame:withUids:taskId:{@link #LiveTranscodingDelegate#onCacheSyncVideo:withDataFrame:withUids:taskId:} 收到同步的帧，你可以使用此视频帧，自行实现合流转推。
 */

@property(assign, nonatomic) BOOL syncClientVideoNeedMix;
/**
 * 
 * @brief 是否只开启时间戳发送而不做对齐和媒体数据回调。默认为 False。 <br>
 *        在单通合唱双人场景下，主唱应设置为 False，副唱应设置为 True。 <br>
 *        在单通合唱多人场景下，主唱和所有副唱都应设置为 False。
 */

@property(assign, nonatomic) BOOL syncOnlySendPts;
@end

/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamConfig{@link #ByteRTCMixedStreamConfig} instead.
 * @type keytype
 * @brief 转推直播配置参数。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCLiveTranscoding : NSObject
/**
 * 
 * @brief 合流类型，详见 ByteRTCStreamMixingType{@link #ByteRTCStreamMixingType} 数据类型。 <br>
 * 本参数不支持过程中更新。
 */

@property(assign, nonatomic) ByteRTCStreamMixingType expectedMixingType;
/**
 * 
 * @brief 视频流合流整体布局信息。 <br>
 *        开启转推直播功能后，你可以设置参与合流的每路视频流的预设布局信息和合流背景信息等。详见 ByteRTCVideoCompositingLayout{@link #ByteRTCVideoCompositingLayout} 数据类型。
 */

@property(strong, nonatomic) ByteRTCVideoCompositingLayout * _Nonnull layout;
/**
 * 
 * @brief 视频转码配置参数。详见 ByteRTCTranscodingVideoConfig{@link #ByteRTCTranscodingVideoConfig} 数据类型。
 */

@property(strong, nonatomic) ByteRTCTranscodingVideoConfig * _Nonnull video;
/**
 * 
 * @brief 音频转码配置参数，参看 ByteRTCTranscodingAudioConfig{@link #ByteRTCTranscodingAudioConfig}。
 */

@property(strong, nonatomic) ByteRTCTranscodingAudioConfig * _Nonnull audio;
/**
 * 
 * @brief 客户端合流配置。详见 ByteRTCTranscodingClientMixParam{@link #ByteRTCTranscodingClientMixParam} 。
 */

@property(strong, nonatomic) ByteRTCTranscodingClientMixParam * _Nullable clientMixParam;
/**
 * 
 * @hidden for internal use only
 * @brief 转推同步配置。详见 ByteRTCTranscodingSyncControlParam{@link #ByteRTCTranscodingSyncControlParam} 。
 */

@property(strong, nonatomic) ByteRTCTranscodingSyncControlParam * _Nullable syncControlParam;
/**
 * 
 * @hidden(macOS)
 * @brief 转推 CDN 空间音频配置。详见 ByteRTCTranscodingSpatialConfig{@link #ByteRTCTranscodingSpatialConfig} 。
 */

@property(strong, nonatomic) ByteRTCTranscodingSpatialConfig * _Nonnull spatialConfig;

/**
 * 
 * @hidden for internal use only
 * @brief 动态扩展自定义参数。
 */

@property(strong, nonatomic) NSMutableDictionary *  _Nullable advancedConfig;
/**
 * 
 * @hidden for internal use only
 * @brief 业务透传鉴权信息
 */

@property(strong, nonatomic) NSMutableDictionary *  _Nullable authInfo;
/**
 * 
 * @brief 推流 CDN 地址。仅支持 RTMP 协议，Url 必须满足正则 `/^rtmps?:\/\
 *        本参数不支持过程中更新。
 */

@property(copy, nonatomic) NSString * _Nullable url;
/**
 * 
 * @brief 推流房间 ID。`roomId` 和 `userId` 长度相加不得超过 126 字节。 <br>
 *        本参数不支持过程中更新。
 */

@property(copy, nonatomic) NSString * _Nonnull roomId;
/**
 * 
 * @brief 推流用户 ID。`roomId` 和 `userId` 长度相加不得超过 126 字节。 <br>
 *        本参数不支持过程中更新。
 */

@property(copy, nonatomic) NSString * _Nonnull userId;
/**
 * 
 * @brief 获取默认转推直播配置参数。
 * @return 转推直播配置参数，参看 ByteRTCLiveTranscoding{@link #ByteRTCLiveTranscoding}。
 */

+ (instancetype _Nonnull)defaultTranscoding;
@end
/**
 * 
 * @type keytype
 * @brief 图片合流相关参数。(新)
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCMixedStreamLayoutRegionImageWaterMarkConfig : NSObject
/**
 * 
 * @brief 原始图片的宽度，单位为 px。
 */

@property (assign, nonatomic) NSInteger imageWidth;
/**
 * 
 * @brief 原始图片的高度，单位为 px。
 */

@property (assign, nonatomic) NSInteger imageHeight;
@end

/**
 * 
 * @type keytype
 * @brief 单个图片或视频流在合流中的布局信息。(新) <br>
 *        开启合流功能后，在多路图片或视频流合流时，你可以设置其中一路流在合流中的预设布局信息。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCMixedStreamLayoutRegionConfig : NSObject
/**
 * 
 * @brief 视频流发布用户的用户 ID 。建议设置。
 */

@property(copy, nonatomic) NSString * _Nonnull userID;
/**
 * 
 * @brief 图片或视频流所在房间的房间 ID。建议设置。 <br>
 *        如果此图片或视频流是通过 startForwardStreamToRooms:{@link #ByteRTCRoom#startForwardStreamToRooms:} 转发到你所在房间的媒体流时，你应将房间 ID 设置为你所在的房间 ID。
 */

@property(copy, nonatomic) NSString * _Nonnull roomID;
/**
 * 
 * @brief 单个用户画面左上角在整个画布坐标系中的 X 坐标（pixel），即以画布左上角为原点，用户画面左上角相对于原点的横向位移。 <br>
 *        取值范围为 [0, 整体画布宽度)。默认值为 0。
 */

@property(assign, nonatomic) NSInteger locationX;
/**
 * 
 * @brief 单个用户画面左上角在整个画布坐标系中的 Y 坐标（pixel），即以画布左上角为原点，用户画面左上角相对于原点的纵向位移。 <br>
 *        取值范围为 [0, 整体画布高度)。默认值为 0。
 */

@property(assign, nonatomic) NSInteger locationY;
/**
 * 
 * @brief 单个用户画面的宽度。取值范围为 [0, 整体画布宽度]，默认值为 360。
 */

@property(assign, nonatomic) NSInteger width;
/**
 * 
 * @brief 单个用户画面的高度。取值范围为 [0, 整体画布高度]，默认值为 640。
 */

@property(assign, nonatomic) NSInteger height;
/**
 * 
 * @brief 用户视频布局在画布中的层级。取值范围为 [0 - 100]，0 为底层，值越大越上层。默认值为 0。建议设置。
 */

@property(assign, nonatomic) NSInteger zOrder;
/**
 * 
 *  @brief 是否为本地用户
 */

@property(assign, nonatomic) BOOL isLocalUser;
/**
 * 
 *  @brief 流类型，默认为主流
 */

@property(assign, nonatomic) ByteRTCMixedStreamVideoType streamType;
/**
 * 
 * @brief 透明度，可选范围为 (0.0, 1.0]，0.0 为全透明。默认值为 1.0。
 */

@property(assign, nonatomic) CGFloat alpha;
/**
 * 
 * @brief 圆角半径相对画布宽度的比例。默认值为 `0.0`。 <br>
 *        做范围判定时，首先根据画布的宽高，将 `width`，`height`，和 `cornerRadius` 分别转换为像素值：`width_px`，`height_px`，和 `cornerRadius_px`。然后判定是否满足 `cornerRadius_px < min(width_px/2, height_px/2)`：若满足，则设置成功；若不满足，则将 `cornerRadius_px` 设定为 `min(width_px/2, height_px/2)`，然后将 `cornerRadius` 设定为 `cornerRadius_px` 相对画布宽度的比例值。
 */

@property(assign, nonatomic) CGFloat cornerRadius;
/**
 * 
 * @brief 合流内容控制。默认值为 `ByteRTCTranscoderContentControlTypeHasAudioAndVideo`，参看 ByteRTCMixedStreamMediaType{@link #ByteRTCMixedStreamMediaType} 。
 */

@property (assign, nonatomic) ByteRTCMixedStreamMediaType mediaType;
/**
 * 
 * @brief 图片或视频流的缩放模式，参看 ByteRTCMixedStreamRenderMode{@link #ByteRTCMixedStreamRenderMode}。默认值为 1。建议设置。
 */

@property(assign, nonatomic) ByteRTCMixedStreamRenderMode renderMode;
/**
 * 
 * @brief 合流布局区域类型。参看 ByteRTCMixedStreamLayoutRegionType{@link #ByteRTCMixedStreamLayoutRegionType}。建议设置。
 */

@property (assign, nonatomic) ByteRTCMixedStreamLayoutRegionType regionContentType;
/**
 * 
 * @brief 图片合流布局区域类型对应的数据。类型为图片时传入图片 RGBA 数据，当类型为视频流时传空。
 */

@property (strong, nonatomic) NSData * _Nullable imageWaterMark;
/**
 * 
 * @brief 合流布局区域数据的对应参数。当类型为视频流时传空，类型为图片时传入对应图片的参数，参看 ByteRTCMixedStreamLayoutRegionImageWaterMarkConfig{@link #ByteRTCMixedStreamLayoutRegionImageWaterMarkConfig}。
 */

@property (strong, nonatomic) ByteRTCMixedStreamLayoutRegionImageWaterMarkConfig * _Nullable imageWaterMarkConfig;
/**
 * 
 * @brief 空间位置。参看 ByteRTCPosition{@link #ByteRTCPosition}。
 */

@property (strong, nonatomic) ByteRTCPosition * _Nullable spatialPosition;
/**
 * 
 * @brief 设置某用户是否应用空间音频效果： <br>
 *        - Yes：启用（默认值）
 *        - No：禁用
 */ 

@property(assign, nonatomic) BOOL applySpatialAudio;
/**
 * 
 * @valid since 3.57
 * @brief 设置占位图的填充模式。 <br>
 *        该参数用来控制当用户停止发布视频流，画面恢复为占位图后，此时占位图的填充模式。参看 ByteRTCMixedStreamAlternateImageFillMode{@link #ByteRTCMixedStreamAlternateImageFillMode}。
 */

@property (assign, nonatomic)ByteRTCMixedStreamAlternateImageFillMode alternateImageFillMode;
/**
 * 
 * @valid since 3.57
 * @brief 设置占位图的 URL，长度小于 1024 字符.
 */

@property(copy, nonatomic)NSString * alternateImageUrl;
@end

/**
 * 
 * @type keytype
 * @brief 视频流合流整体布局信息。(新)
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCMixedStreamLayoutConfig : NSObject
/**
 * 
 * @brief 合流背景颜色，用十六进制颜色码（HEX）表示。例如，#FFFFFF 表示纯白，#000000 表示纯黑。默认值为 #000000。建议设置。 <br>
 *        值不合法或未设置时，自动使用默认值。
 */

@property(copy, nonatomic) NSString *_Nonnull backgroundColor;
/**
 * 
 * @brief 用户布局信息列表。每条流的具体布局参看 ByteRTCMixedStreamLayoutRegionConfig{@link #ByteRTCMixedStreamLayoutRegionConfig}。建议设置。 <br>
 *        值不合法或未设置时，自动使用默认值。
 */

@property(copy, nonatomic) NSArray<ByteRTCMixedStreamLayoutRegionConfig *> * _Nonnull regions;
/**
 * 
 * @brief 用户透传的额外数据。
 */

@property(copy, nonatomic) NSString *_Nonnull userConfigExtraInfo;
/**
 * 
 * @valid since 3.57
 * @brief 设置合流后整体画布的背景图片 URL，长度最大为 1024 bytes。 <br>
 *        支持的图片格式包括：JPG, JPEG, PNG。如果背景图片的宽高和整体屏幕的宽高不一致，背景图片会缩放到铺满屏幕。
 */

@property(copy, nonatomic) NSString *_Nonnull backgroundImageUrl;
@end

/**
 * 
 * @type keytype
 * @brief 视频转码配置参数。(新) <br>
 *        值不合法或未设置时，自动使用默认值。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCMixedStreamVideoConfig : NSObject
/**
 * 
 * @brief 视频编码格式，参看 ByteRTCMixedStreamVideoCodecType{@link #ByteRTCMixedStreamVideoCodecType}。默认值为 `0`。建议设置。 <br>
 *        本参数不支持过程中更新。
 */

@property(assign, nonatomic) ByteRTCMixedStreamVideoCodecType videoCodec;
/**
 * 
 * @brief 合流视频宽度。单位为 px，范围为 [2, 1920]，必须是偶数。默认值为 640 px。建议设置。 <br>
 *        设置值为非偶数时，自动向上取偶数。
 */

@property(assign, nonatomic) NSInteger width;
/**
 * 
 * @brief 合流视频高度。单位为 px，范围为 [2, 1920]，必须是偶数。默认值为 360 px。建议设置。 <br>
 *        设置值为非偶数时，自动向上取偶数。
 */

@property(assign, nonatomic) NSInteger height;
/**
 * 
 * @brief 合流视频帧率。单位为 FPS，取值范围为 [1,60]，默认值为 15 FPS。建议设置。
 */

@property(assign, nonatomic) NSInteger fps;
/**
 * 
 * @brief 视频 I 帧时间间隔。单位为秒，取值范围为 [1, 5]，默认值为 2 秒。建议设置。 <br>
 *        本参数不支持过程中更新。
 */

@property(assign, nonatomic) NSInteger gop;
/**
 * 
 * @brief 合流视频码率。单位为 Kbps，取值范围为 [1,10000]，默认值为自适应模式。建议设置。
 */

@property(assign, nonatomic) NSInteger bitrate;
/**
 * 
 * @brief 是否在合流中开启 B 帧，仅服务端合流支持.
 */

@property(assign, nonatomic) BOOL enableBFrame;
@end

/**
 * 
 * @type keytype
 * @brief 音频转码配置参数。(新) <br>
 *        值不合法或未设置时，自动使用默认值。 <br>
 *        本参数不支持过程中更新。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCMixedStreamAudioConfig : NSObject
/**
 * 
 * @brief 音频编码格式。建议设置。
 * @param codec 音频编码格式，参看 ByteRTCMixedStreamAudioCodecType{@link #ByteRTCMixedStreamAudioCodecType}。默认值为 `0`。建议设置。
 */

@property(assign, nonatomic) ByteRTCMixedStreamAudioCodecType audioCodec;
/**
 * 
 * @brief 音频采样率，单位 Hz。可取 32000 Hz、44100 Hz、48000 Hz，默认值为 48000 Hz。建议设置。
 */

@property(assign, nonatomic) NSInteger sampleRate;
/**
 * 
 * @brief 音频声道数。可取 1（单声道）、2（双声道），默认值为 2。建议设置。
 */

@property(assign, nonatomic) NSInteger channels;
/**
 * 
 * @brief 音频码率，单位 Kbps。可取范围 [32, 192]，默认值为 64 Kbps。建议设置。
 */

@property(assign, nonatomic) NSInteger bitrate;
/**
 * 
 * @brief AAC 编码规格，参看 ByteRTCMixedStreamAudioProfile{@link #ByteRTCMixedStreamAudioProfile}。默认值为 `0`。建议设置。
 */

@property(assign, nonatomic) ByteRTCMixedStreamAudioProfile audioProfile;
/**
 * 
 * @hidden
 * @deprecated
 */

+ (NSString* _Nonnull) toStringWithProfile:(ByteRTCMixedStreamAudioProfile) aacProfile;
@end

/**
 * 
 * @type keytype
 * @brief 推流 CDN 的空间音频参数。(新)
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCMixedStreamSpatialAudioConfig : NSObject
/**
 * 
 * @brief 是否开启推流 CDN 时的空间音频效果。 <br>
 *        当你启用此效果时，你需要设定推流中各个 ByteRTCMixedStreamLayoutRegionConfig{@link #ByteRTCMixedStreamLayoutRegionConfig} 的 `spatialPosition` 值，实现空间音频效果。
 */

@property(assign, nonatomic) BOOL enableSpatialRender;
/**
 * 
 * @brief 听众的空间位置。参看 ByteRTCPosition{@link #ByteRTCPosition}。 <br>
 *        听众指收听来自 CDN 的音频流的用户。
 */

@property (strong, nonatomic) ByteRTCPosition * _Nullable audienceSpatialPosition;
/**
 * 
 * @brief 听众的空间朝向。参看 ByteRTCHumanOrientation{@link #ByteRTCHumanOrientation}。 <br>
 *        听众指收听来自 CDN 的音频流的用户。
 */

@property(strong, nonatomic) ByteRTCHumanOrientation * _Nullable audienceSpatialOrientation;

@end

/**
 * 
 * @type keytype
 * @brief 客户端合流参数。(新)
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCMixedStreamClientMixConfig : NSObject
/**
 * 
 * @brief 客户端合流是否使用混音，默认为 true。
 */

@property(assign, nonatomic) BOOL useAudioMixer;
/**
 * 
 * @brief 客户端合流回调视频格式，参看 ByteRTCMixedStreamClientMixVideoFormat{@link #ByteRTCMixedStreamClientMixVideoFormat}。
 */

@property(assign, nonatomic) ByteRTCMixedStreamClientMixVideoFormat videoFormat;
@end

/**
 * 
 * @hidden internal use only
 * @valid since 3.52
 * @type keytype
 * @brief 转推直播单通同步参数。(新)
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCMixedStreamSyncControlConfig : NSObject
/**
 * 
 * @brief 同步策略
 */

@property(assign, nonatomic)ByteRTCMixedStreamSyncStrategy syncStrategy;
/**
 * 
 * @brief 在进行同步处理时，基准流所属用户的 ID。默认为空。
 */

@property(copy, nonatomic) NSString * _Nullable baseUserID;
/**
 * 
 * @brief 在进行同步处理时，缓存音视频流的最大长度。单位为毫秒。默认值为 2000。 <br>
 *        参与转推直播的这些媒体流延迟越高，应该将此值设置的越大。但此值越大，因缓存媒体流造成的内存占用也会更大。推荐值为 `2000`。
 */

@property(assign, nonatomic) NSInteger maxCacheTimeMs;
/**
 * 
 * @brief 是否通过 RTC SDK 进行转推直播。默认为 True。 <br>
 *        如果选择 `False`，你会通过 onCacheSyncVideo:withDataFrame:withUids:taskId:{@link #LiveTranscodingDelegate#onCacheSyncVideo:withDataFrame:withUids:taskId:} 收到同步的帧，你可以使用此视频帧，自行实现合流转推。
 */

@property(assign, nonatomic) BOOL videoNeedSdkMix;
@end

/**
 * 
 * @type keytype
 * @brief 服务端合流控制参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCMixedStreamServerControlConfig : NSObject
/**
 * 
 * @valid since 3.56
 * @brief 是否开启单独发送声音提示 SEI 的功能： <br>
 *        - True：开启；
 *        - False：关闭。（默认值）
 *        开启后，你可以通过 `ByteRTCMixedStreamServerControlConfig.seiContentMode` 控制 SEI 的内容是否只携带声音信息。
 */

@property(assign, nonatomic) BOOL enableVolumeIndication;
/**
 * 
 * @valid since 3.56
 * @brief 声音提示间隔，单位为秒，取值范围为 [0.3,+∞)，默认值为 2。 <br>
 *        此值仅取整百毫秒。若传入两位及以上小数，则四舍五入取第一位小数的值。例如，若传入 0.36，则取 0.4。
 */

@property(assign, nonatomic) CGFloat volumeIndicationInterval;
/**
 * 
 * @valid since 3.56
 * @brief 有效音量大小，取值范围为 [0, 255]，默认值为 0。 <br>
 *        超出取值范围则自动调整为默认值，即 0。
 */

@property(assign, nonatomic) NSInteger talkVolume;
/**
 * 
 * @valid since 3.56
 * @brief 声音信息 SEI 是否包含音量值： <br>
 *        - True：是；
 *        - False：否，默认值。
 */

@property(assign, nonatomic) BOOL isAddVolumeValue;
/**
 * 
 * @valid since 3.56
 * @brief 设置 SEI 内容。参看 ByteRTCMixedStreamSEIContentMode{@link #ByteRTCMixedStreamSEIContentMode}。
 */

@property(assign, nonatomic) ByteRTCMixedStreamSEIContentMode seiContentMode;
/**
 * 
 * @valid since 3.56
 * @brief SEI 信息的 payload type。 <br>
 *        默认值为 `100`，只支持设置 `5` 和 `100`。 <br>
 *        在转推直播的过程中，该参数不支持变更。
 */

@property(assign, nonatomic) NSInteger seiPayloadType;
/**
 * 
 * @valid since 3.56
 * @brief SEI 信息的 payload UUID。
 * @note PayloadType 为 `5` 时，必须填写 PayloadUUID，否则会收到错误回调，错误码为 1091。 <br>
 *         PayloadType 不是 `5` 时，不需要填写 PayloadUUID，如果填写会被后端忽略。 <br>
 *         该参数长度需为 32 位，否则会收到错误码为 1091 的回调。 <br>
 *         该参数每个字符的范围需为 [0, 9] [a, f] [A, F] <br>
 *         该参数不应带有`-`字符，如系统自动生成的 UUID 中带有`-`，则应删去。 <br>
 *         在转推直播的过程中，该参数不支持变更。
 */

@property(copy, nonatomic) NSString *seiPayloadUUID;
/**
 * 
 * @valid since 3.57
 * @brief 设置合流推到 CDN 时输出的媒体流类型。参看 ByteRTCMixedStreamMediaType{@link #ByteRTCMixedStreamMediaType}。 <br>
 *        默认输出音视频流。支持输出纯音频流，但暂不支持输出纯视频流。
 */

@property(assign, nonatomic) ByteRTCMixedStreamMediaType mediaType;
/**
 * 
 * @valid since 3.57
 * @brief 设置是否在没有用户发布流的情况下发起转推直播。具体参看 ByteRTCMixedStreamPushMode{@link #ByteRTCMixedStreamPushMode}。 <br>
 *        该参数在发起合流任务后的转推直播过程中不支持动态变更。
 */

@property(assign, nonatomic) ByteRTCMixedStreamPushMode pushStreamMode;
@end

/**
 * 
 * @type keytype
 * @brief 转推直播配置参数。(新)
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCMixedStreamConfig : NSObject
/**
 * 
 * @brief 合流类型，详见 ByteRTCMixedStreamType{@link #ByteRTCMixedStreamType} 数据类型。建议设置。
 */

@property(assign, nonatomic) ByteRTCMixedStreamType expectedMixingType;
/**
 * 
 * @brief 视频流合流整体布局信息。建议设置。 <br>
 *        开启转推直播功能后，你可以设置参与合流的每路视频流的预设布局信息和合流背景信息等。详见 ByteRTCMixedStreamLayoutConfig{@link #ByteRTCMixedStreamLayoutConfig} 数据类型。
 */

@property(strong, nonatomic) ByteRTCMixedStreamLayoutConfig * _Nonnull layoutConfig;
/**
 * 
 * @brief 视频转码配置参数。详见 ByteRTCMixedStreamVideoConfig{@link #ByteRTCMixedStreamVideoConfig} 数据类型。建议设置。
 */

@property(strong, nonatomic) ByteRTCMixedStreamVideoConfig * _Nonnull videoConfig;
/**
 * 
 * @brief 音频合流配置参数，参看 ByteRTCMixedStreamAudioConfig{@link #ByteRTCMixedStreamAudioConfig}。建议设置。
 */

@property(strong, nonatomic) ByteRTCMixedStreamAudioConfig * _Nonnull audioConfig;
/**
 * 
 * @brief 客户端合流配置。详见 ByteRTCMixedStreamClientMixConfig{@link #ByteRTCMixedStreamClientMixConfig} 。建议设置。
 */

@property(strong, nonatomic) ByteRTCMixedStreamClientMixConfig * _Nullable clientMixConfig;
/**
 * 
 * @hidden for internal use only
 * @brief 转推同步配置。详见 ByteRTCMixedStreamSyncControlConfig{@link #ByteRTCMixedStreamSyncControlConfig} 。
 */

@property(strong, nonatomic) ByteRTCMixedStreamSyncControlConfig * _Nullable syncControlConfig;
/**
 * 
 * @hidden(macOS)
 * @brief 转推 CDN 空间音频配置。详见 ByteRTCMixedStreamSpatialAudioConfig{@link #ByteRTCMixedStreamSpatialAudioConfig} 。
 */

@property(strong, nonatomic) ByteRTCMixedStreamSpatialAudioConfig * _Nonnull spatialAudioConfig;
/**
 * 
 * @brief 服务端合流控制参数。详见 ByteRTCMixedStreamServerControlConfig{@link #ByteRTCMixedStreamServerControlConfig} 。
 */

@property(strong, nonatomic) ByteRTCMixedStreamServerControlConfig * _Nonnull serverControlConfig;
/**
 * 
 * @hidden for internal use only
 * @brief 动态扩展自定义参数。
 */

@property(strong, nonatomic) NSMutableDictionary *  _Nullable advancedConfig;
/**
 * 
 * @hidden for internal use only
 * @brief 业务透传鉴权信息
 */

@property(strong, nonatomic) NSMutableDictionary *  _Nullable authInfo;
/**
 * 
 * @brief 推流 CDN 地址。仅支持 RTMP 协议，Url 必须满足正则 `/^rtmps?:\/\
 *        本参数不支持过程中更新。
 */

@property(copy, nonatomic) NSString * _Nullable pushURL;
/**
 * 
 * @brief 推流房间 ID。`roomID` 和 `userID` 长度相加不得超过 126 字节。建议设置。 <br>
 *        本参数不支持过程中更新。
 */

@property(copy, nonatomic) NSString * _Nonnull roomID;
/**
 * 
 * @brief 推流用户 ID。`roomID` 和 `userID` 长度相加不得超过 126 字节。建议设置。 <br>
 *        本参数不支持过程中更新。
 */

@property(copy, nonatomic) NSString * _Nonnull userID;
/**
 * 
 * @brief 获取默认转推直播配置参数。
 * @return 转推直播配置参数，参看 ByteRTCMixedStreamConfig{@link #ByteRTCMixedStreamConfig}。
 */

+ (instancetype _Nonnull)defaultMixedStreamConfig;
@end

/**
 * 
 * @type keytype
 * @brief 单流转推直播配置参数。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCPushSingleStreamParam : NSObject
/**
 * 
 * @brief 推流 CDN 地址。仅支持 RTMP 协议，Url 必须满足正则 `/^rtmps?:\/\
 *        本参数不支持过程中更新。
 */

@property(copy, nonatomic) NSString * _Nullable url;
/**
 * 
 * @brief 媒体流所在的房间 ID
 */

@property(copy, nonatomic) NSString * _Nonnull roomId;
/**
 * 
 * @brief 媒体流所属的用户 ID
 */

@property(copy, nonatomic) NSString * _Nullable userId;
/**
 * 
 * @brief 媒体流是否为屏幕流。
 */

@property(nonatomic, assign) BOOL isScreen;
@end

/**
 * 
 * @type keytype
 * @brief 视频订阅配置信息
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCSubscribeVideoConfig : NSObject
/**
 * 
 * @brief 订阅的视频流分辨率下标。 <br>
 *        当远端用户通过调用 enableSimulcastMode:{@link #ByteRTCVideo#enableSimulcastMode:} 方法启动发布多路不同分辨率的视频流时，本地用户需通过此参数指定希望订阅的流。 <br>
 *        默认值为 0，即订阅第一路流。 <br>
 *        如果不想更改之前的设置，可以输入 -1。
 */

@property(assign, nonatomic) NSInteger videoIndex;
/**
 * 
 * @brief 远端用户优先级，参看 ByteRTCRemoteUserPriority{@link #ByteRTCRemoteUserPriority}，默认值为 0。
 */

@property(assign, nonatomic) NSInteger priority;
@end

/**
 * 
 * @type keytype
 * @brief 性能回退相关数据
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCSourceWantedData : NSObject
/**
 * 
 * @brief 推荐视频输入宽
 */

@property(nonatomic, assign) NSInteger width;
/**
 * 
 * @brief 推荐视频输入高
 */

@property(nonatomic, assign) NSInteger height;
/**
 * 
 * @brief 推荐视频输入帧率
 */

@property(nonatomic, assign) NSInteger frameRate;
@end

/**
 * 
 * @type keytype
 * @brief 流切换信息。本地用户订阅的远端流触发回退策略时的流切换信息。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCRemoteStreamSwitchEvent : NSObject
/**
 * 
 * @brief 订阅的音视频流的发布者的用户 ID。
 */

@property(nonatomic, copy) NSString * _Nonnull uid;
/**
 * 
 * @brief 流是否是屏幕流
 */

@property(nonatomic, assign) BOOL isScreen;
/**
 * 
 * @brief 流切换前订阅视频流的分辨率对应的索引
 */

@property(nonatomic, assign) NSInteger beforeVideoIndex;
/**
 * 
 * @brief 流切换后订阅视频流的分辨率对应的索引
 */

@property(nonatomic, assign) NSInteger afterVideoIndex;
/**
 * 
 * @brief 流切换前是否有视频流
 */

@property(nonatomic, assign) BOOL beforeVideoEnabled;
/**
 * 
 * @brief 流切换后是否有视频流
 */

@property(nonatomic, assign) BOOL afterVideoEnabled;
/**
 * 
 * @brief 流切换原因，详见 ByteRTCFallbackOrRecoverReason{@link #ByteRTCFallbackOrRecoverReason}。
 */

@property(nonatomic, assign) ByteRTCFallbackOrRecoverReason reason;
@end

/**
 * 
 * @hidden
 * @deprecated since 3.45 and will be deleted in 3.51, use ByteRTCVideoSinkDelegate{@link #ByteRTCVideoSinkDelegate} instead.
 * @type callback
 * @brief 自定义的视频渲染
 */

DEPRECATED_MSG_ATTRIBUTE("Please use ByteRTCVideoSinkDelegate")
BYTERTC_APPLE_EXPORT @protocol ByteRTCVideoSinkProtocol <NSObject>
@required
/**
 * 
 * @type callback
 * @brief 初始化渲染器
 * @return
 *         - YES: 自定义的渲染器初始化完成
 *         - NO: 自定义的渲染器初始化失败，不继续往下运行
 * @note 初始化渲染器的时候会回调这个方法
 */

- (BOOL)shouldInitialize DEPRECATED_MSG_ATTRIBUTE("Please use ByteRTCVideoSinkDelegate");;

/**
 * 
 * @type callback
 * @brief 启动渲染器
 * @note 在开启渲染功能的时候会回调这个方法
 */

- (void)shouldStart DEPRECATED_MSG_ATTRIBUTE("Please use ByteRTCVideoSinkDelegate");

/**
 * 
 * @type callback
 * @brief 停止渲染器
 * @note 在停止渲染功能的时候会回调这个方法
 */

- (void)shouldStop DEPRECATED_MSG_ATTRIBUTE("Please use ByteRTCVideoSinkDelegate");

/**
 * 
 * @type callback
 * @brief 释放渲染器
 * @note 渲染器即将被废弃的时候会回调这个方法
 */

- (void)shouldDispose DEPRECATED_MSG_ATTRIBUTE("Please use ByteRTCVideoSinkDelegate");

/**
 * 
 * @type callback
 * @brief 获取 PixelFormat 格式
 * @return Buffer 类型，{@link #ByteRTCVideoSinkPixelFormat}
 * @note 通过该方法的返回值，告知 SDK PixelFormat 的格式
 */

- (ByteRTCVideoPixelFormat)pixelFormat DEPRECATED_MSG_ATTRIBUTE("Please use ByteRTCVideoSinkDelegate");

/**
 * 
 * @type callback
 * @brief 输出视频的 PixelBuffer
 * @param pixelBuffer 视频的 PixelBuffer
 * @param rotation 视频旋转角度，{@link #ByteRTCVideoRotation}
 * @param cameraId 视频的相机 Id, {@link #ByteRTCCameraID}
 * @param extendedData 视频帧附加的数据,视频解码后获得的附加数据
 * @note 通过该方法获取视频的 PixelBuffer
 */

- (void)renderPixelBuffer:(CVPixelBufferRef _Nonnull)pixelBuffer
                 rotation:(ByteRTCVideoRotation)rotation
                 cameraId:(ByteRTCCameraID) cameraId
             extendedData:(NSData * _Nullable)extendedData DEPRECATED_MSG_ATTRIBUTE("Please use ByteRTCVideoSinkDelegate");

/**
 * 
 * @hidden constructor/destructor
 */

- (int)getRenderElapse;
@end

/**
 * 
 * @type keytype
 * @brief 自定义视频渲染器
 */

BYTERTC_APPLE_EXPORT @protocol ByteRTCVideoSinkDelegate <NSObject>
@optional
/**
 * 
 * @deprecated since 3.54, use onFrame: instead
 * @type api
 * @brief 输出视频的 PixelBuffer
 * @param pixelBuffer 视频的 PixelBuffer
 * @param rotation 视频旋转角度，参看 ByteRTCVideoRotation{@link #ByteRTCVideoRotation}
 * @param contentType 视频内部类型 参看 ByteRTCVideoContentType{@link #ByteRTCVideoContentType}
 * @param extendedData 视频解码后获得的附加数据
 */

- (void)renderPixelBuffer:(CVPixelBufferRef _Nonnull)pixelBuffer
                 rotation:(ByteRTCVideoRotation)rotation
                 contentType:(ByteRTCVideoContentType)contentType
             extendedData:(NSData * _Nullable)extendedData;
/**
 * 
 * @hidden for internal use only
 */

- (int)getRenderElapse;

@required
/**
 * 
 * @type api
 * @brief 输出视频的 PixelBuffer
 * @param videoFrame 视频帧
 */

- (void)onFrame:(ByteRTCVideoFrame * _Nonnull)videoFrame;

@end

/**
 * 
 * @hidden for internal use only
 * @type callback
 * @brief 外部渲染数据的消费接口
 */

@protocol ByteRTCVideoFrameConsumerObserver <NSObject>
/**
 * 
 * @brief 输出 yuv420 数据
 * @param ocFrame 数据 Buffer
 * @param width 视频宽度
 * @param rotation 视频旋转角度
 * @param timestamp 时间戳
 */

- (void)consumeYUV420Buffer:(CVPixelBufferRef _Nullable)ocFrame
    width:(NSInteger)width rotation:(NSInteger)rotation timestamp:(long)timestamp;
/**
 * 
 * @brief 输出 RGBA 数据
 * @param ocFrame 数据 Buffer
 * @param width 视频宽度
 * @param rotation 视频旋转角度
 * @param timestamp 时间戳
 */

- (void)consumeRGBABuffer:(CVPixelBufferRef _Nullable)ocFrame width:(NSInteger)width
    rotation:(NSInteger)rotation timestamp:(long)timestamp;
@end

/**
 * 
 * @hidden
 * @deprecated
 * @type callback
 * @region 视频管理
 */

BYTERTC_APPLE_EXPORT @protocol ByteRTCVideoFrameObserver <NSObject>
/**
 * 
 * @brief 本地屏幕流的视频帧数据回调
 * @param frame 本地屏幕视频帧数据，参考: ByteRTCVideoFrame{@link #ByteRTCVideoFrame}
 */

- (void)onLocalScreenFrame:(ByteRTCVideoFrame * _Nonnull)frame;
/**
 * 
 * @brief 本地视频流的视频帧数据回调
 * @param frame 本地视频流的视频帧数据，参考: ByteRTCVideoFrame{@link #ByteRTCVideoFrame}
 */

- (void)onLocalVideoFrame:(ByteRTCVideoFrame * _Nonnull)frame;

/**
 * 
 * @brief 远端屏幕流的视频帧数据回调
 * @param frame 远端屏幕的视频帧数据，参考: ByteRTCVideoFrame{@link #ByteRTCVideoFrame}
 * @param uid 远端屏幕共享用户 ID
 * @param room 对应流的房间 id
 */

- (void)onRemoteScreenFrame:(ByteRTCVideoFrame * _Nonnull)frame user:(NSString * _Nullable)uid
    room:(NSString * _Nullable)room;
/**
 * 
 * @brief 远端视频流的视频帧数据回调
 * @param frame 远端视频流的视频帧数据，参考: ByteRTCVideoFrame{@link #ByteRTCVideoFrame}
 * @param uid 远端屏幕共享用户 ID
 * @param room 对应流的房间 id
 */

- (void)onRemoteVideoFrame:(ByteRTCVideoFrame * _Nonnull)frame user:(NSString * _Nullable)uid
    room:(NSString * _Nullable)room;


/**
 * 
 * @hidden for internal use only
 */

- (void)OnMergeFrame:(ByteRTCVideoFrame * _Nonnull)frame user:(NSString * _Nullable)uid room:(NSString * _Nullable)room;

@end

/**
 * 
 * @type keytype
 * @brief 本地视频帧回调配置。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCLocalVideoSinkConfig : NSObject
/**
 * 
 * @brief 本地视频帧回调位置，参看 ByteRTCLocalVideoRenderPosition{@link #ByteRTCLocalVideoRenderPosition}，默认回调前处理后的视频帧。
 */

@property(nonatomic, assign) ByteRTCLocalVideoRenderPosition position;
/**
 * 
 * @brief 本地视频帧回调格式，参看 ByteRTCVideoSinkPixelFormat{@link #ByteRTCVideoSinkPixelFormat}，默认值为 0。
 */

@property(nonatomic, assign) ByteRTCVideoSinkPixelFormat requiredPixelFormat;

@end

/**
 * 
 * @type keytype
 * @brief 远端视频帧回调配置。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCRemoteVideoSinkConfig : NSObject
/**
 * 
 * @brief 远端视频帧回调位置，参看 ByteRTCLocalVideoRenderPosition{@link #ByteRTCLocalVideoRenderPosition}，默认回调后处理后的视频帧。
 */

@property(nonatomic, assign) ByteRTCRemoteVideoRenderPosition position;
/**
 * 
 * @brief 远端视频帧回调格式，参看 ByteRTCVideoSinkPixelFormat{@link #ByteRTCVideoSinkPixelFormat}，默认值为 0。
 */

@property(nonatomic, assign) ByteRTCVideoSinkPixelFormat requiredPixelFormat;
/**
 * 
 * @brief 是否将视频帧自动转正，参看 ByteRTCVideoApplyRotation{@link #ByteRTCVideoApplyRotation}，默认为不旋转。
 */

@property(nonatomic, assign) ByteRTCVideoApplyRotation applyRotation;
/**
 * 
 * @brief 是否将视频帧镜像。参看 ByteRTCVideoRenderMirrorType{@link #ByteRTCVideoRenderMirrorType}，默认为不镜像。 <br>
 *        本设置与 setRemoteVideoMirrorType:withMirrorType:{@link #ByteRTCVideo#setRemoteVideoMirrorType:withMirrorType:} （适用于内部渲染）相互独立。
 */

@property(nonatomic, assign) ByteRTCVideoRenderMirrorType mirrorType;

@end

/**
 * 
 * @type keytype
 * @brief 视频处理配置参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoPreprocessorConfig : NSObject
/**
 * 
 * @brief 视频帧的像素格式，参看 ByteRTCVideoPixelFormat{@link #ByteRTCVideoPixelFormat}。 <br>
 *        当前仅支持 `ByteRTCVideoPixelFormatI420` 和 `ByteRTCVideoPixelFormatUnknown` 格式。
 */

@property(nonatomic, assign) ByteRTCVideoPixelFormat requiredPixelFormat;

@end

/**
  * 
  * @type callback
  * @region 视频处理
  * @brief 视频处理回调接口类 <br>
  * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。
  */
 
BYTERTC_APPLE_EXPORT @protocol ByteRTCVideoProcessorDelegate <NSObject>

/**
 * 
 * @type api
 * @region 视频处理
 * @brief 获取 RTC SDK 采集得到的视频帧，根据 registerLocalVideoProcessor:withConfig:{@link #ByteRTCVideo#registerLocalVideoProcessor:withConfig:} 设置的视频前处理器，进行视频前处理，最终将处理后的视频帧给到 RTC SDK 用于编码传输。
 * @param srcFrame RTC SDK 采集得到的视频帧，参考: ByteRTCVideoFrame{@link #ByteRTCVideoFrame}
 * @return 经过视频前处理后的视频帧，返回给 RTC SDK 供编码和传输，参考: ByteRTCVideoFrame{@link #ByteRTCVideoFrame}
 * @note 如果需要取消视频前处理，可以将视频前处理器设置为 nullptr。
 * @list 自定义流处理
 * @order 16
 */

- (ByteRTCVideoFrame* _Nullable)processVideoFrame:(ByteRTCVideoFrame* _Nonnull)srcFrame;

@end
/**
 * 
 * @hidden(iOS)
 * @type keytype
 * @brief 屏幕采集设置参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCScreenCaptureParam : NSObject
/**
 * 
 * @brief 视频最大宽度，单位：像素。
 */

@property(nonatomic, assign) NSInteger width;
/**
 * 
 * @brief 视频最大高度，单位：像素。
 */

@property(nonatomic, assign) NSInteger height;
/**
 * 
 * @brief 屏幕采集帧率，单位：fps
 */

@property(nonatomic, assign) NSInteger frameRate;
/**
 * 
 * @brief 发送屏幕采集码率，单位 kbps
 */

@property(nonatomic, assign) NSInteger bitrate;
/**
 * 
 * @brief 视频最小编码码率, 单位 kbps。编码码率不会低于 `minBitrate`。 <br>
 *        默认值为 `0`。 <br>
 *        范围：[0, bitrate)，当 `bitrate` < `minBitrate` 时，为适配码率模式。 <br>
 *        以下情况，设置本参数无效： <br>
 *        - 当 `bitrate` 为 `0` 时，不对视频流进行编码发送。
 *        - 当 `bitrate` < `0` 时，适配码率模式。
 */

@property(nonatomic, assign) NSInteger minBitrate;
/**
 * 
 * @brief 采集区域
 */

@property(nonatomic, assign) CGRect regionRect;
/**
 * 
 * @brief 是否采集鼠标
 */

@property(nonatomic, assign) ByteRTCMouseCursorCaptureState mouseCursorCaptureState;
/**
 * 
 * @brief 屏幕过滤设置
 */

@property (strong, nonatomic) NSArray<NSNumber *> * _Nullable excludedWindowList;
/**
 * 
 * @brief 采集区域的边框高亮设置，参看 ByteRTCHighlightConfig{@link #ByteRTCHighlightConfig}。
 */

@property (strong, nonatomic) ByteRTCHighlightConfig * _Nonnull highlightConfig;
@end
/**
 * 
 * @type keytype
 * @brief 屏幕采集对象的具体信息
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCScreenCaptureSourceInfo : NSObject
/**
 * 
 * @brief 屏幕分享时，共享对象的类型，参看 ByteRTCScreenCaptureSourceType{@link #ByteRTCScreenCaptureSourceType}
 */

@property (assign, nonatomic) ByteRTCScreenCaptureSourceType sourceType;
/**
 * 
 * @brief 屏幕分享时，共享对象的 ID。
 */

@property (assign, nonatomic) intptr_t sourceId;
/**
 * 
 * @brief 屏幕分享时共享对象的名称。
 */

@property (copy, nonatomic) NSString * _Nullable sourceName;
/**
 * 
 * @brief 共享的应用窗体所属应用的名称 <br>
 *        当共享对象为应用窗体时有效
 */

@property (copy, nonatomic) NSString * _Nullable application;
/**
 * 
 * @brief 共享的应用窗体所属应用进程的 pid <br>
 *        当共享对象为应用窗体时有效
 */
 
@property (assign, nonatomic) int pid;
/**
 * 
 * @brief 共享的屏幕是否为主屏。 <br>
 *        当共享对象为屏幕时有效
 */
 
@property (assign, nonatomic) BOOL primaryMonitor;
/**
 * 
 * @brief 屏幕共享对象的坐标。多显示器的场景下，屏幕坐标系统以主屏左上角为原点 (0, 0)，向右向下扩展。
 */

@property (assign, nonatomic) CGRect regionRect;

@end

/**
 * 
 * @type keytype
 * @region 视频管理
 * @brief 屏幕采集设置参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCScreenParam : NSObject
/**
 * 
 * @brief 编码帧率,单位为 fps
 */

@property(nonatomic, assign) NSInteger frameRate;
/**
 * 
 * @brief 编码码率，小于 0 时 SDK 会根据高宽自适应码率, 单位 kbps
 */

@property(nonatomic, assign) NSInteger bitrate;
@end

/**
 * 
 * @type keytype
 * @brief 虚拟背景对象。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVirtualBackgroundSource: NSObject
/**
 * 
 * @brief 虚拟背景类型，详见 ByteRTCVirtualBackgroundSourceType{@link #ByteRTCVirtualBackgroundSourceType} 。
 */

@property(nonatomic, assign) ByteRTCVirtualBackgroundSourceType sourceType;
/**
 * 
 * @brief 纯色背景使用的颜色。 <br>
 *        格式为 0xAARRGGBB 。
 */

@property int sourceColor;
/**
 * 
 * @brief 自定义背景图片的绝对路径。 <br>
 *       - 支持的格式为 jpg、jpeg、png。
 *       - 图片分辨率超过 1080P 时，图片会被等比缩放至和视频一致。
 *       - 图片和视频宽高比一致时，图片会被直接缩放至和视频一致。
 *       - 图片和视频长宽比不一致时，为保证图片内容不变形，图片按短边缩放至与视频帧一致，使图片填满视频帧，对多出的高或宽进行剪裁。
 *       - 自定义图片带有局部透明效果时，透明部分由黑色代替。
 */

@property(nonatomic) NSString* _Nullable sourcePath;
@end

/**
 * 
 * @type callback
 * @region 视频数据回调
 * @brief 本地视频帧监测器 <br>
 * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。
 */

BYTERTC_APPLE_EXPORT @protocol ByteRTCLocalEncodedVideoFrameObserver<NSObject>
 @optional
/**
 * 
 * @type callback
 * @region 视频数据回调
 * @brief 调用 registerLocalEncodedVideoFrameObserver:{@link #ByteRTCVideo#registerLocalEncodedVideoFrameObserver:} 后，SDK 每次使用内部采集，采集到一帧视频帧，或收到一帧外部视频帧时，都会回调该事件。
 * @param streamIndex 本地视频帧类型，参看 ByteRTCStreamIndex{@link #ByteRTCStreamIndex}
 * @param frame 本地视频帧信息，参看 ByteRTCEncodedVideoFrame{@link #ByteRTCEncodedVideoFrame}
 * @list 自定义流处理
 * @order 5
 */

- (void)onLocalEncodedVideoFrame:(ByteRTCStreamIndex) streamIndex
    Frame:(ByteRTCEncodedVideoFrame * _Null_unspecified)frame;
@end

#pragma mark - ByteRTCEngineExternalVideoEncoderEventHandler

/**
 * 
 * @type callback
 * @brief 自定义编码帧回调类 <br>
 * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。
 */

BYTERTC_APPLE_EXPORT @protocol ByteRTCExternalVideoEncoderEventHandler<NSObject>
@required
/**
 * 
 * @type callback
 * @region 视频管理
 * @brief 提示自定义编码帧可以开始推送的回调。 <br>
 *        收到该回调后，你即可调用 pushExternalEncodedVideoFrame:withVideoIndex:withEncodedVideoFrame:{@link #ByteRTCVideo#pushExternalEncodedVideoFrame:withVideoIndex:withEncodedVideoFrame:} 向 SDK 推送自定义编码视频帧
 * @param streamIndex 可以推送的编码流的属性，参看 ByteRTCStreamIndex{@link #ByteRTCStreamIndex}
 * @list 自定义流处理
 * @order 0
 */

- (void)onStart:(ByteRTCStreamIndex)streamIndex;
@required
/**
 * 
 * @type callback
 * @region 视频管理
 * @brief 当收到该回调时，你需停止向 SDK 推送自定义编码视频帧
 * @param streamIndex 需停止推送的编码流的属性，参看 ByteRTCStreamIndex{@link #ByteRTCStreamIndex}
 * @list 自定义流处理
 * @order 1
 */

- (void)onStop:(ByteRTCStreamIndex)streamIndex;
@required
/**
 * 
 * @type callback
 * @region 视频管理
 * @brief 当自定义编码流的帧率或码率发生变化时，触发该回调
 * @param streamIndex 发生变化的编码流的属性，参看 ByteRTCStreamIndex{@link #ByteRTCStreamIndex}
 * @param videoIndex 对应编码流的下标
 * @param fps 变化后的帧率，单位：fps
 * @param bitRateKps 变化后的码率，单位：kbps
 * @list 自定义流处理
 * @order 2
 */

- (void)onRateUpdate:(ByteRTCStreamIndex)streamIndex
      withVideoIndex:(NSInteger)videoIndex
             withFps:(NSInteger)fps
         withBitRate:(NSInteger)bitRateKps;
@required
/**
 * 
 * @type callback
 * @region 视频管理
 * @brief 提示流发布端需重新生成关键帧的回调
 * @param streamIndex 远端编码流的属性，参看 ByteRTCStreamIndex{@link #ByteRTCStreamIndex}
 * @param videoIndex 对应编码流的下标
 * @list 自定义流处理
 * @order 3
 */

- (void)onRequestKeyFrame:(ByteRTCStreamIndex)streamIndex
           withVideoIndex:(NSInteger)videoIndex;
@required
/**
 * 
 * @valid since 3.56
 * @type callback
 * @brief 作为自定义编码视频流的发送端，你会在视频流可发送状态发生变化时，收到此回调。 <br>
 *        你可以根据此回调的提示，仅对可发送的视频流进行编码，以降低本端视频编码性能消耗。此回调会根据多个因素综合判断触发，包括：本端设备性能和本端网络性能，以及按需订阅场景下，远端用户是否订阅。
 * @param streamIndex 远端编码流的属性，参看 ByteRTCStreamIndex{@link #ByteRTCStreamIndex}。
 * @param videoIndex 对应编码流的下标
 * @param active 该路流可发送状态
 * @note 要收到此回调，必须调用 setVideoSourceType:WithStreamIndex:{@link #ByteRTCVideo#setVideoSourceType:WithStreamIndex:} 设置视频源是自定义编码，且通过 setExternalVideoEncoderEventHandler:{@link #ByteRTCVideo#setExternalVideoEncoderEventHandler:} 设置了回调句柄。
 * @list 自定义流处理
 * @order 4
 */

- (void)onActiveVideoLayer:(ByteRTCStreamIndex)streamIndex
            withVideoIndex:(NSInteger)videoIndex
                withActive:(BOOL)active;
@end

#pragma mark - ByteRTCEngineRemoteEncodedVideoFrameObserver

/**
 * 
 * @type callback
 * @region 视频管理
 * @brief 远端编码后视频数据监测器 <br>
 * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。
 */

BYTERTC_APPLE_EXPORT @protocol ByteRTCRemoteEncodedVideoFrameObserver<NSObject>
@required
/**
 * 
 * @type callback
 * @region 视频数据回调
 * @brief 调用 registerRemoteEncodedVideoFrameObserver:{@link #ByteRTCVideo#registerRemoteEncodedVideoFrameObserver:} 后，SDK 监测到远端编码后视频数据时，触发该回调
 * @param streamKey 收到的远端流信息，参看 ByteRTCRemoteStreamKey{@link #ByteRTCRemoteStreamKey}
 * @param videoFrame 收到的远端视频帧信息，参看 ByteRTCEncodedVideoFrame{@link #ByteRTCEncodedVideoFrame}
 * @list 自定义流处理
 * @order 6
 */

- (void)onRemoteEncodedVideoFrame:(ByteRTCRemoteStreamKey * _Nonnull)streamKey
                   withEncodedVideoFrame:(ByteRTCEncodedVideoFrame* _Nonnull)videoFrame;
@end

/**
 * 
 * @type keytype
 * @brief 视频帧基础信息
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoFrameInfo : NSObject
/**
 * 
 * @brief 视频帧的宽度（像素）
 */

@property(nonatomic, assign) NSInteger width;
/**
 * 
 * @brief 视频帧的高度（像素）
 */

@property(nonatomic, assign) NSInteger height;
/**
 * 
 * @brief 视频帧顺时针旋转角度。参看 ByteRTCVideoRotation{@link #ByteRTCVideoRotation}。
 */

@property(nonatomic, assign) ByteRTCVideoRotation rotation;
@end

#pragma mark - LiveTranscodingDelegate

/**
 * 
 * @deprecated since 3.52, use ByteRTCMixedStreamObserver{@link #ByteRTCMixedStreamObserver} instead.
 * @type callback
 * @region 转推直播
 * @brief 转推直播观察者。 <br>
 * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。
 */

@protocol LiveTranscodingDelegate <NSObject>
/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 是否具有推流能力。 <br>
 *       - false：不具备推流能力（默认值）
 *       - true：具备推流能力
 * @note 如果需要开启端云一体转推直播功能，你必须确保你的 App 包含 librtmp，具有推流能力。此时，设置该回调为 true。
 */

 - (BOOL)isSupportClientPushStream;
/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 转推直播状态回调
 * @param event 转推直播任务状态，参看 ByteRTCStreamMixingEvent{@link #ByteRTCStreamMixingEvent}。
 * @param taskId 转推直播任务 ID。
 * @param Code 转推直播错误码，参看 ByteRtcTranscoderErrorCode{@link #ByteRtcTranscoderErrorCode}。
 * @param mixType 转推直播类型，参看 ByteRTCStreamMixingType{@link #ByteRTCStreamMixingType}。
 */

 - (void)onStreamMixingEvent:(ByteRTCStreamMixingEvent)event
                  taskId:(NSString *_Nonnull)taskId
                      error:(ByteRtcTranscoderErrorCode)Code
                    mixType:(ByteRTCStreamMixingType)mixType;

@optional
/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 端云一体合流音频 PCM 回调
 * @param audioFrame PCM 编码的合流音频数据帧，参看 ByteRTCAudioFrame{@link #ByteRTCAudioFrame}。
 * @param timeStamp 时间戳，单位毫秒。
 * @param taskId 转推直播任务 ID。
 * @note 收到该回调的周期为每 10 毫秒一次，并且每次的音频数据量为 10 毫秒数据量。
 */

- (void)onMixingAudioFrame:(ByteRTCAudioFrame *_Nonnull)audioFrame timestamp:(int64_t)timeStamp taskId:(NSString *_Nonnull)taskId;

/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 端云一体合流视频 YUV 回调
 * @param videoFrame YUV 合流视频数据帧，参看 ByteRTCVideoFrame{@link #ByteRTCVideoFrame}。
 * @param taskId 转推直播任务 ID。
 * @note 收到该回调的周期取决于视频的帧率。
 */

- (void)onMixingVideoFrame:(ByteRTCVideoFrame *_Nonnull)videoFrame taskId:(NSString *_Nonnull)taskId;
/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 端云一体合流视频 SEI 数据
 * @param dataFrame SEI 数据，详见 ByteRTCFrameExtendedData {@link #ByteRTCFrameExtendedData}。
 * @param taskId 转推直播任务 ID。
 */

- (void)onMixingDataFrame:(ByteRTCFrameExtendedData *_Nonnull)dataFrame taskId:(NSString *_Nonnull)taskId;
/**
 * 
 * @hidden for internal use only
 * @type callback
 * @valid since 3.50
 * @brief 同步视频帧回调。仅在通过 ByteRTCTranscodingSyncControlParam{@link #ByteRTCTranscodingSyncControlParam} 设置启用单通模式，且其中 `syncClientVideoNeedMix=False` 时收到此回调。
 * @param videoFrame 同步视频帧数组，与 uids 对应。参看 ByteRTCVideoFrame{@link #ByteRTCVideoFrame}。
 * @param dataFrame SEI 数据。参看 ByteRTCFrameExtendedData{@link #ByteRTCFrameExtendedData}。
 * @param uids 同步视频帧对应的 uid 数组。
 * @param taskID 转推直播任务 ID。
 */

- (void)onCacheSyncVideo:(NSArray<ByteRTCVideoFrame *> *_Nonnull)videoFrames
           withDataFrame:(NSArray<ByteRTCFrameExtendedData*> *_Nonnull)dataFrames
                withUids:(NSArray<NSString*>*_Nonnull)uids
                  taskId:(NSString *_Nonnull)taskID;
@end

#pragma mark - ByteRTCPushMixedStreamToCDNObserver

/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 转推直播观察者。(Valid from 352.1) <br>
 * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。
 */

@protocol ByteRTCMixedStreamObserver <NSObject>
/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 是否具有推流能力。 <br>
 *       - false：不具备推流能力（默认值）
 *       - true：具备推流能力
 * @note
 *         - 如果需要开启端云一体转推直播功能，你必须确保你的 App 包含 librtmp，具有推流能力。此时，设置该回调为 true。
 */

 - (BOOL)isSupportClientPushStream;
/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 转推直播状态回调
 * @param event 转推直播任务状态，参看 ByteRTCStreamMixingEvent{@link #ByteRTCStreamMixingEvent}。
 * @param taskId 转推直播任务 ID。
 * @param errorCode 转推直播错误码，参看 ByteRTCStreamMixingErrorCode{@link #ByteRTCStreamMixingErrorCode} 和 ByteRTCStreamMixingErrorCode{@link #ByteRTCStreamMixingErrorCode}。
 * @param mixType 转推直播类型，参看 ByteRTCMixedStreamType{@link #ByteRTCMixedStreamType}。
 */

 - (void)onMixingEvent:(ByteRTCStreamMixingEvent)event
                  taskId:(NSString *_Nonnull)taskId
                      error:(ByteRTCStreamMixingErrorCode)errorCode
                    mixType:(ByteRTCMixedStreamType)mixType;

@optional
/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 端云一体合流音频 PCM 回调
 * @param audioFrame PCM 编码的合流音频数据帧，参看 ByteRTCAudioFrame{@link #ByteRTCAudioFrame}。
 * @param timeStamp 时间戳，单位毫秒。
 * @param taskId 转推直播任务 ID。
 * @note 收到该回调的周期为每 10 毫秒一次，并且每次的音频数据量为 10 毫秒数据量。
 */

- (void)onMixingAudioFrame:(ByteRTCAudioFrame *_Nonnull)audioFrame timestamp:(int64_t)timeStamp taskId:(NSString *_Nonnull)taskId;

/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 端云一体合流视频 YUV 回调
 * @param videoFrame YUV 合流视频数据帧，参看 ByteRTCVideoFrame{@link #ByteRTCVideoFrame}。
 * @param taskId 转推直播任务 ID。
 * @note 收到该回调的周期取决于视频的帧率。
 */

- (void)onMixingVideoFrame:(ByteRTCVideoFrame *_Nonnull)videoFrame taskId:(NSString *_Nonnull)taskId;
/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 端云一体合流视频 SEI 数据
 * @param dataFrame SEI 数据，详见 ByteRTCFrameExtendedData {@link #ByteRTCFrameExtendedData}。
 * @param taskId 转推直播任务 ID。
 */

- (void)onMixingDataFrame:(ByteRTCFrameExtendedData *_Nonnull)dataFrame taskId:(NSString *_Nonnull)taskId;

/**
 * 
 * @hidden for internal use only
 * @type callback
 * @region 转推直播
 * @brief 同步视频帧回调。
 * @param videoFrame 同步视频帧数组，与 uids 对应。
 * @param dataFrame SEI 数据。
 * @param uids 同步视频帧对应的 uid 数组。
 * @param task_id 转推直播任务 ID。
 */

- (void)onCacheSyncVideo:(NSArray<ByteRTCVideoFrame *> *_Nonnull)videoFrames withDataFrame:(NSArray<ByteRTCFrameExtendedData*> *_Nonnull)dataFrames
                 withUids:(NSArray<NSString*>*_Nonnull)uids taskId:(NSString *_Nonnull)task_id;
@end
/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 单流转推直播观察者。 <br>
 * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。
 */

@protocol ByteRTCPushSingleStreamToCDNObserver <NSObject>
/**
 * 
 * @type callback
 * @region 转推直播
 * @brief 单流转推直播状态回调
 * @param event 任务状态, 参看 ByteRTCSingleStreamPushEvent{@link #ByteRTCSingleStreamPushEvent}.
 * @param taskID 任务 ID
 * @param errorCode 错误码，参看 ByteRtcTranscoderErrorCode{@link #ByteRtcTranscoderErrorCode}。
 * @list CDN 推流
 * @order 0
 */

 - (void)onStreamPushEvent:(ByteRTCSingleStreamPushEvent)event
                  taskId:(NSString *_Nonnull)taskID
                      error:(NSInteger)errorCode;

@end

/**
 * 
 * @type callback
 * @region 视频特效
 * @brief 人脸检测结果回调观察者 <br>
 * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。
 */

@protocol ByteRTCFaceDetectionObserver <NSObject>
/**
 * 
 * @type callback
 * @region 视频特效
 * @brief 特效 SDK 进行人脸检测结果的回调。 <br>
 *        调用 enableFaceDetection:withInterval:withModelPath:{@link #ByteRTCVideoEffect#enableFaceDetection:withInterval:withModelPath:} 注册了 ByteRTCFaceDetectionObserver{@link #ByteRTCFaceDetectionObserver} ，并使用 RTC SDK 中包含的特效 SDK 进行视频特效处理时，你会收到此回调。
 * @param result 人脸检测结果, 参看 ByteRTCFaceDetectionResult{@link #ByteRTCFaceDetectionResult}。
 * @list 视频管理
 * @order 4
 */

- (void)onFaceDetectResult:(ByteRTCFaceDetectionResult * _Nonnull)result;
/**
 * 
 * @hidden for intrnal use only
 * @type callback
 * @region 视频特效
 * @brief 特效 SDK 进行人像属性检测结果的回调。 <br>
 *        调用 registerFaceDetectionObserver:withInterval:{@link #ByteRTCVideoEffect#registerFaceDetectionObserver:withInterval:} 注册了 ByteRTCFaceDetectionObserver{@link #ByteRTCFaceDetectionObserver}，并调用 setVideoEffectExpressionDetect:{@link #ByteRTCVideo#setVideoEffectExpressionDetect:} 开启人像属性检测后，你会收到此回调。
 * @param result 人像属性检测结果, 参看 ByteRTCExpressionDetectResult{@link #ByteRTCExpressionDetectResult}。
 */

- (void)onExpressionDetectResult:(ByteRTCExpressionDetectResult * _Nonnull)result;
@end

#pragma mark - ByteRTCEngineMediaMetadataObserver

/**
 * 
 * @hidden
 * @deprecated since 3.26 and will be deleted in 3.51, use sendSEIMessage:andMessage:andRepeatCount:andCountPerFrame:{@link #ByteRTCVideo#sendSEIMessage:andMessage:andRepeatCount:andCountPerFrame:} instead.
 * @type callback
 * @brief 使用内部源视频采集时,配置和获取附加数据接口
 */

BYTERTC_APPLE_EXPORT @protocol ByteRTCMediaMetadataObserver <NSObject>
@required
/**
 * 
 * @type callback
 * @region 视频数据回调
 * @brief 当 SDK 准备发送一个视频帧时，会回调该接口，以确定是否需要在该视频帧中添加 metadata
 * @param timestamp 待添加 metadata 视频帧的时间戳，单位微秒
 * @return 待发送的数据，大小不能超过 1024bytes
 * @note
 *       - 返回 null 代表不需要添加 metadata
 *       - 回调中不能做长时间逻辑处理，以免影响视频卡顿
 */

- (NSData *_Nullable)videoFrameMediaMetaDataAtTime:(NSTimeInterval)timestamp;

@optional
/**
 * 
 * @type callback
 * @region 视频数据回调
 * @brief 当 SDK 收到的视频帧包含 medatada 时，会回调该接口
 * @param uid 当前帧所属的用户 ID
 * @param extendedData metadata
 * @param timestamp 包含 metadata 视频帧的时间戳，单位为微秒
 * @note 回调中不能做长时间逻辑处理，以免影响视频卡顿
 */

- (void)receiveVideoFrameFromUID:(NSString * _Nonnull)uid
    withExtendedData:(NSData* _Nullable)extendedData atTimestamp:(NSTimeInterval)timestamp;
@end
/**
 * 
 * @type keytype
 * @brief 视频编码配置。参考 [设置视频发布参数](https:
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoEncoderConfig: NSObject
/**
 * 
 * @brief 视频宽度，单位：px
 */

@property(nonatomic, assign) NSInteger width;
/**
 * 
 * @brief 视频高度，单位：px
 */

@property(nonatomic, assign) NSInteger height;
/**
 * 
 * @brief 视频帧率，单位：fps
 */

@property(nonatomic, assign) NSInteger frameRate;
/**
 * 
 * @brief 最大编码码率，使用 SDK 内部采集时可选设置，自定义采集时必须设置，单位：kbps。 <br>
 *        设为 -1 即适配码率模式，系统将根据输入的分辨率和帧率自动计算适用的码率。 <br>
 *        设为 0 则不对视频流进行编码发送。 <br>
 *        344 及以上版本，内部采集时默认值为 -1，344 以前版本无默认值，需手动设置。
 */

@property(nonatomic, assign) NSInteger maxBitrate;
/**
 * 
 * @brief 视频最小编码码率, 单位 kbps。编码码率不会低于 `minBitrate`。 <br>
 *        默认值为 `0`。 <br>
 *        范围：[0, maxBitrate)，当 `maxBitrate` < `minBitrate` 时，为适配码率模式。 <br>
 *        以下情况，设置本参数无效： <br>
 *        - 当 `maxBitrate` 为 `0` 时，不对视频流进行编码发送。
 *        - 当 `maxBitrate` < `0` 时，适配码率模式。
 */

@property(nonatomic, assign) NSInteger minBitrate;
/**
 * 
 * @brief 编码策略偏好，默认为帧率优先。参看 ByteRTCVideoEncoderPreference{@link #ByteRTCVideoEncoderPreference}。
 */

@property(nonatomic, assign) ByteRTCVideoEncoderPreference encoderPreference;
@end

/**
 * 
 * @type keytype
 * @brief 屏幕流编码配置。 <br>
 * macOS 端的推荐配置参数参看 [PC 端屏幕共享](https:
 * iOS 端的推荐配置参数参看 [iOS 端屏幕共享](https:
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCScreenVideoEncoderConfig: NSObject
/**
 * 
 * @brief 视频最大宽度，单位：像素。
 */

@property(nonatomic, assign) NSInteger width;
/**
 * 
 * @brief 视频最大高度，单位：像素。
 */

@property(nonatomic, assign) NSInteger height;
/**
 * 
 * @brief 视频编码帧率，单位：fps。 <br>
 *        对于 macOS，建议设置为与采集帧率相同。 <br>
 *        对于 iOS，帧率将应用于屏幕采集和编码。
 */

@property(nonatomic, assign) NSInteger frameRate;
/**
 * 
 * @brief 最大编码码率，使用 SDK 内部采集时可选设置，自定义采集时必须设置，单位：kbps。 <br>
 *        设为 -1 即适配码率模式，系统将根据输入的分辨率和帧率自动计算适用的码率。 <br>
 *        设为 0 则不对视频流进行编码发送。 <br>
 *        3.44 及以上版本，内部采集时默认值为 -1，3.44 以前版本无默认值，需手动设置。
 */

@property(nonatomic, assign) NSInteger maxBitrate;
/**
 * 
 * @brief 最小编码码率，使用 SDK 内部采集时可选设置，自定义采集时必须设置，单位：kbps。 <br>
 *        最小编码码率必须小于或等于最大编码，否则不对视频流进行编码发送。
 */

@property(nonatomic, assign) NSInteger minBitrate;
/**
 * 
 * @brief 屏幕流编码模式。参见 ByteRTCScreenVideoEncoderPreference{@link #ByteRTCScreenVideoEncoderPreference}。
 */

@property(nonatomic, assign) ByteRTCScreenVideoEncoderPreference encoderPreference;
@end

/**
 * 
 * @type keytype
 * @brief 远端视频帧信息
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCRemoteVideoConfig : NSObject
/**
 * 
 * @brief 期望订阅的最高帧率，单位：fps，默认值为 0 即满帧订阅，设为大于 0 的值时开始生效。 <br>
 *        如果发布端发布帧率 > 订阅端订阅的帧率，下行媒体服务器 SVC 丢帧，订阅端收到通过此接口设置的帧率；如果发布端发布帧率 < 订阅端订阅的帧率，则订阅端只能收到发布的帧率。 <br>
 *        仅码流支持 SVC 分级编码特性时方可生效。
 */

@property (nonatomic, assign) int framerate;
/**
 * 
 * @brief 视频宽度，单位：px
 */

@property(nonatomic, assign) int  width;
/**
 * 
 * @brief 视频高度，单位：px
 */

@property(nonatomic, assign) int   height;
@end
/**
 * 
 * @type keytype
 * @brief 房间参数配置
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCRoomConfig : NSObject
/**
 * 
 * @brief 房间模式，参看 ByteRTCRoomProfile{@link #ByteRTCRoomProfile}，默认为普通音视频通话模式，进房后不可更改。
 */

@property(nonatomic) ByteRTCRoomProfile profile;
/**
 * 
 * @brief 是否自动发布音视频流，默认为自动发布。 <br>
 *        创建和加入多房间时，只能将其中一个房间设置为自动发布。若每个房间均不做设置，则默认在第一个加入的房间内自动发布流。 <br>
 *        若调用 setUserVisibility:{@link #ByteRTCRoom#setUserVisibility:} 将自身可见性设为 false，无论是默认的自动发布流还是手动设置的自动发布流都不会进行发布，你需要将自身可见性设为 true 后方可发布。
 */

@property(assign, nonatomic) BOOL isAutoPublish;
/**
 * 
 * @brief 是否自动订阅音频流，默认为自动订阅。 <br>
 *        包含主流和屏幕流。
 */

@property(assign, nonatomic) BOOL isAutoSubscribeAudio;
/**
 * 
 * @brief 是否自动订阅主视频流，默认为自动订阅。 <br>
 *        包含主流和屏幕流。
 */

@property(assign, nonatomic) BOOL isAutoSubscribeVideo;
/**
 * 
 * @brief 远端视频流参数，参看 ByteRTCRemoteVideoConfig{@link #ByteRTCRemoteVideoConfig}
 */

@property(nonatomic, strong) ByteRTCRemoteVideoConfig * _Nonnull remoteVideoConfig;
@end
/**
 * 
 * @type keytype
 * @brief 公共流裁剪信息
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCSourceCropInfo : NSObject
/**
 * 
 * @brief 裁剪后得到的视频帧左上角横坐标相对于裁剪前整体画面的比例，取值范围[0.0, 1.0)
 */

@property(assign, nonatomic) CGFloat locationX;
/**
 * 
 * @brief 裁剪后得到的视频帧左上角纵坐标相对于裁剪前整体画面的比例，取值范围[0.0, 1.0)
 */

@property(assign, nonatomic) CGFloat locationY;
/**
 * 
 * @brief 裁剪后得到的视频帧宽度相对于裁剪前整体画面的比例，取值范围(0.0, 1.0]
 */

@property(assign, nonatomic) CGFloat widthProportion;
/**
 * 
 * @brief 裁剪后得到的视频帧高度相对于裁剪前整体画面的比例，取值范围(0.0, 1.0]
 */

@property(assign, nonatomic) CGFloat heightProportion;
@end
/**
 * 
 * @type keytype
 * @brief 合成公共流的每条流的布局信息
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCPublicStreamRegion : NSObject
/**
 * 
 * @brief 用户 ID。必填。 <br>
 * 服务端将通过用户 ID 和 房间 ID，找到需要合成到公共流中的媒体流。
 */

@property(copy, nonatomic) NSString * _Nonnull userId;
/**
 * 
 * @brief 房间 ID。必填。 <br>
 *        服务端将通过用户 ID 和 房间 ID，找到需要合成到公共流中的媒体流。
 */

@property(copy, nonatomic) NSString * _Nonnull roomId;
/**
 * 
 * @brief 背景图片地址
 */

@property(copy, nonatomic) NSString * _Nonnull alternateImage;
/**
 * 
 * @brief 用户视频布局相对画布左侧的偏移量， 相对值。范围[0.0 - 1.0]
 */

@property(assign, nonatomic) CGFloat x;
/**
 * 
 * @brief 用户视频布局相对画布顶端的偏移量， 相对值。范围[0.0 - 1.0]
 */

@property(assign, nonatomic) CGFloat y;
/**
 * 
 * @brief 用户视频宽度相对用户原始视频宽度的比例，相对值。范围[0.0 - 1.0]
 */

@property(assign, nonatomic) CGFloat width;
/**
 * 
 * @brief 用户视频高度相对用户原始视频高度的比例，相对值。范围[0.0 - 1.0]
 */

@property(assign, nonatomic) CGFloat height;
/**
 * 
 * @brief 用户视频布局在画布中的层级，0 为底层，值越大越上层。范围[0 - 100]
 */

@property(assign, nonatomic) NSInteger zOrder;
/**
 * 
 * @brief 透明度，必填。可选范围为 [0.0, 1.0]。
 */

@property(assign, nonatomic) CGFloat alpha;
/**
 * 
 * @brief 推流内容控制。默认为 0。 <br>
 *      0: 输出的混流包含音视频 <br>
 *      1: 只包含音频 <br>
 *      2: 表示只包含视频
 */

@property(assign, nonatomic) NSInteger mediaType;
/**
 * 
 * @brief 推流媒体类型 <br>
 *        0：普通音视频流 <br>
 *        1: 屏幕流
 */

@property(assign, nonatomic) NSInteger streamType;
/**
 * 
 * @brief 视频显示模式。详见 ByteRTCRenderMode{@link #ByteRTCRenderMode} 数据类型。
 */

@property(assign, nonatomic) ByteRTCRenderMode renderMode;
/**
 * 
 * @brief 视频裁剪信息。 详见 ByteRTCSourceCropInfo{@link #ByteRTCSourceCropInfo}。
 */

@property(strong, nonatomic) ByteRTCSourceCropInfo * _Nonnull sourceCrop;
@end

/**
 * 
 * @type keytype
 * @brief 公共流的合流布局。必填
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCPublicStreamLayout : NSObject
/**
 * 
 * @brief 布局模式。可选： <br>
 *        - `0`: 自动布局。默认值
 *        - `2`: 自定义布局。
 */

@property(assign, nonatomic) NSInteger layoutMode;
/**
 * 
 * @brief 插帧模式。 <br>
 *         - `0`: 补最后一帧
 *         - `1`: 补背景图片，如果没有设置背景图片则补黑帧
 */

@property(assign, nonatomic) NSInteger interpolationMode;
/**
 * 
 * @brief 画布的背景颜色。格式为 RGB 定义下的 Hex 值，如 #FFB6C1 表示浅粉色。默认值 #000000，表示为黑色
 */

@property(copy, nonatomic) NSString *_Nonnull backgroundColor;
/**
 * 
 * @brief 背景图片地址
 */

@property(copy, nonatomic) NSString *_Nonnull backgroundImage;
/**
 * 
 * @brief 用户布局信息列表。每一个该类型对象为一路单独的视频流的布局信息。
 */

@property(copy, nonatomic) NSArray<ByteRTCPublicStreamRegion *> * _Nonnull regions;
@end

/**
 * 
 * @type keytype
 * @brief 公共流的视频编码参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCPublicStreamVideoConfig : NSObject
/**
 * 
 * @brief 公共流视频宽度，必填。单位为 px，范围为 [2, 1920]，必须是偶数。
 */

@property(assign, nonatomic) NSInteger width;
/**
 * 
 * @brief 公共流视频高度，必填。单位为 px，范围为 [16, 1280]，必须是偶数。
 */

@property(assign, nonatomic) NSInteger height;
/**
 * 
 * @brief 公共流视频帧率。必填 <br>
 *        范围：[1, 60]
 */

@property(assign, nonatomic) NSInteger fps;
/**
 * 
 * @brief 视频码率，必填 <br>
 *        范围：[1,10000000] <br>
 *        单位为 bps
 */

@property(assign, nonatomic) NSInteger bitrate;
@end

/**
 * 
 * @hidden currently not available
 * @type keytype
 * @brief 公共流的音频编码参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCPublicStreamAudioConfig : NSObject
/**
 * 
 * @brief 音频采样率，必填。单位为 Hz。可选取值：16000, 32000, 44100 和 48000
 */

@property(assign, nonatomic) NSInteger sampleRate;
/**
 * 
 * @brief 音频声道数，必填。 <br>
 * - 1: 单声道
 * - 2: 双声道
 */

@property(assign, nonatomic) NSInteger channels;
/**
 * 
 * @brief 音频码率，必填。单位为 kbps。 <br>
 * 正整数，可选取值：16, 32, 64。
 */

@property(assign, nonatomic) NSInteger bitrate;
@end

/**
 * 
 * @type keytype
 * @brief 水印图片相对视频流的位置和大小。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoByteWatermark: NSObject
/**
 * 
 * @brief 水印图片相对视频流左上角的横向偏移与视频流宽度的比值，取值范围为 [0,1)。
 */

@property(assign, nonatomic) float x;
/**
 * 
 * @brief 水印图片相对视频流左上角的纵向偏移与视频流高度的比值，取值范围为 [0,1)。
 */

@property(assign, nonatomic) float y;
/**
 * 
 * @brief 水印图片宽度与视频流宽度的比值，取值范围 [0,1)。
 */

@property(assign, nonatomic) float width;
/**
 * 
 * @brief 水印图片高度与视频流高度的比值，取值范围为 [0,1)。
 */

@property(assign, nonatomic) float height;
@end

/**
 * 
 * @type keytype
 * @brief 水印参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoWatermarkConfig: NSObject
/**
 * 
 * @brief 水印是否在视频预览中可见，默认可见。
 */

@property(nonatomic, assign) BOOL visibleInPreview;
/**
 * 
 * @brief 横屏时的水印位置和大小，参看 ByteRTCVideoByteWatermark{@link #ByteRTCVideoByteWatermark}。
 */

@property(strong, nonatomic) ByteRTCVideoByteWatermark * _Nonnull positionInLandscapeMode;
/**
 * 
 * @brief 竖屏时的水印位置和大小，参看 ByteRTCVideoByteWatermark{@link #ByteRTCVideoByteWatermark}。
 */

@property(strong, nonatomic) ByteRTCVideoByteWatermark * _Nonnull positionInPortraitMode;
@end

/**
 * 
 * @type keytype
 * @brief 公共流参数
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCPublicStreaming : NSObject
/**
 * 
 * @brief 视频流公共流整体布局参数，必填。详见 ByteRTCPublicStreamLayout{@link #ByteRTCPublicStreamLayout}
 */

@property(strong, nonatomic) ByteRTCPublicStreamLayout * _Nonnull layout;
/**
 * 
 * @brief 公共流视频编码参数。详见 ByteRTCPublicStreamVideoConfig{@link #ByteRTCPublicStreamVideoConfig}。
 */

@property(strong, nonatomic) ByteRTCPublicStreamVideoConfig * _Nonnull video;
/**
 * 
 * @hidden currently not available
 * @brief 公共流音频编码参数。详见 ByteRTCPublicStreamAudioConfig{@link #ByteRTCPublicStreamAudioConfig}
 */

@property(strong, nonatomic) ByteRTCPublicStreamAudioConfig * _Nonnull audio;
/**
 * 
 * @hidden currently not available
 * @brief 设置媒体流所在房间的房间 ID。服务端将通过用户 ID 和 房间 ID，找到需要合成到公共流中的媒体流。必填。
 */

@property(copy, nonatomic) NSString * _Nullable roomId;
/**
 * 
 * @brief 获取默认的公共流转码配置属性。
 * @return 包含默认配置的 ByteRTCPublicStreaming{@link #ByteRTCPublicStreaming} 结构体
 */

+ (instancetype _Nonnull)defaultPublicStreaming;
@end
/**
 * 
 * @type api
 * @hidden(iOS)
 * @region 视频设备管理
 * @brief 主要用于枚举、设置视频采集设备
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoDeviceManager : NSObject
/**
 * 
 * @type api
 * @region 视频设备管理
 * @brief 获取视频采集设备列表。
 * @return 包含系统中所有视频采集设备的列表，参看 ByteRTCDeviceCollection{@link #ByteRTCDeviceCollection}。 <br>
 * 等待超时后会返回空列表。超时时间默认为 10 s。建议通过 rtcEngine:onVideoDeviceStateChanged:device_type:device_state:device_error:{@link #ByteRTCVideoDelegate#rtcEngine:onVideoDeviceStateChanged:device_type:device_state:device_error:} 监听到 `ByteRTCMediaDeviceListUpdated` 后，再次调用本接口获取。
 * @note 你可以在收到 rtcEngine:onVideoDeviceStateChanged:device_type:device_state:device_error:{@link #ByteRTCVideoDelegate#rtcEngine:onVideoDeviceStateChanged:device_type:device_state:device_error:} 了解设备变更后，重新调用本接口以获得新的设备列表。
 */

- (ByteRTCDeviceCollection * _Nonnull)enumerateVideoCaptureDevices;
/**
 * 
 * @type api
 * @region 视频设备管理
 * @brief 获取当前 SDK 正在使用的视频采集设备信息
 * @param deviceID 视频设备 ID
 * @return
 *        - 0：方法调用成功
 *        - !0：方法调用失败
 */

- (int)getVideoCaptureDevice:(NSString * _Nonnull * _Nonnull) deviceID;
/**
 * 
 * @type api
 * @region 视频设备管理
 * @brief 设置当前视频采集设备
 * @param deviceID 视频设备 ID。调用 enumerateVideoCaptureDevices{@link #ByteRTCVideoDeviceManager#enumerateVideoCaptureDevices} 获取全量视频设备。
 * @return
 *        - 0：方法调用成功
 *        - !0：方法调用失败
 */

- (int)setVideoCaptureDevice:(NSString* _Nonnull)deviceID;
@end
/**
 * 
 * @type callback
 * @brief 截取视频画面回调类 <br>
 * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。
 */

BYTERTC_APPLE_EXPORT @protocol ByteRTCVideoSnapshotCallbackDelegate <NSObject>
@required
/**
 * 
 * @type callback
 * @brief 调用 takeLocalSnapshot:callback:{@link #ByteRTCVideo#takeLocalSnapshot:callback:} 截取视频画面时，收到此回调。
 * @param taskId 本地截图任务的编号。和 takeLocalSnapshot:callback:{@link #ByteRTCVideo#takeLocalSnapshot:callback:} 的返回值一致。
 * @param streamIndex 截图的视频流的属性，参看 ByteRTCStreamIndex{@link #ByteRTCStreamIndex}。
 * @param image 截图。你可以保存为文件，或对其进行二次处理。截图失败时，为空。
 * @param errorCode 截图错误码： <br>
 *        - 0: 成功
 *        - -1: 截图错误。生成图片数据失败或 RGBA 编码失败
 *        - -2: 截图错误。流无效。
 *        - -3: 截图错误。截图超时,超时时间 1 秒。
 * @list 高级功能
 * @order 4
 */

- (void)onTakeLocalSnapshotResult:(NSInteger) taskId
                      streamIndex:(ByteRTCStreamIndex)streamIndex
                            image:(ByteRTCImage * _Nullable)image
                        errorCode:(NSInteger)errorCode;
/**
 * 
 * @type callback
 * @brief 调用 takeRemoteSnapshot:callback:{@link #ByteRTCVideo#takeRemoteSnapshot:callback:} 截取视频画面时，收到此回调。
 * @param taskId 远端截图任务的编号。和 takeRemoteSnapshot:callback:{@link #ByteRTCVideo#takeRemoteSnapshot:callback:} 的返回值一致。
 * @param streamKey 截图的视频流，参看 ByteRTCRemoteStreamKey{@link #ByteRTCRemoteStreamKey}。
 * @param image 截图。你可以保存为文件，或对其进行二次处理。截图失败时，为空。
 * @param errorCode 截图错误码： <br>
 *        - 0: 成功
 *        - -1: 截图错误。生成图片数据失败或 RGBA 编码失败
 *        - -2: 截图错误。流无效。
 *        - -3: 截图错误。截图超时,超时时间 1 秒。
 * @list 高级功能
 * @order 5
 */

- (void)onTakeRemoteSnapshotResult:(NSInteger)taskId
                         streamKey:(ByteRTCRemoteStreamKey * _Nonnull)streamKey
                             image:(ByteRTCImage * _Nullable)image
                         errorCode:(NSInteger)errorCode;
@end

/**
 * 
 * @type api
 * @region 音视频处理
 * @brief 高级视频特效，参看[集成指南](https:
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCVideoEffect : NSObject

/**
 * 
 * @hidden for internal use only
 * @type api
 * @brief 设置视频特效算法模型地址，并初始化特效模块。
 * @param finder ResourceFinder 地址
 * @param deleter ResourceDeleter 地址
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 */

- (int) setAlgoModelResourceFinder:(void*_Nonnull)finder deleter:(void*_Nonnull)deteter;

#if BYTERTC_TARGET_MAC
/**
 * 
 * @type api
 * @hidden(iOS)
 * @region 视频特效
 * @brief 从特效 SDK 获取授权消息，用于获取在线许可证。
 * @param ppmsg 授权消息字符串地址
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @note
 *        - 使用视频特效的功能前，你必须获取特效 SDK 的在线许可证。
 *        - 通过此接口获取授权消息后，参考 [在线授权说明](https:
 */

- (int)getAuthMessage:(NSString *_Nullable*_Nullable)ppmsg;
#endif

/**
 * 
 * @type api
 * @brief 检查视频特效证书，设置算法模型路径，并初始化特效模块。
 * @param licenseFile 证书文件的绝对路径，用于鉴权。
 * @param algoModelDir 算法模型绝对路径，即存放特效 SDK 所有算法模型的目录。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @list 视频处理
 * @order 10
 */

- (int) initCVResource:(NSString* _Nonnull)licenseFile
            withAlgoModelDir: (NSString* _Nonnull)algoModelDir;

/**
 * 
 * @type api
 * @brief 开启高级美颜、滤镜等视频特效。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @note
 *      - 调用本方法前，必须先调用 initCVResource:withAlgoModelDir:{@link #ByteRTCVideoEffect#initCVResource:withAlgoModelDir:} 进行初始化。
 *      - 调用该方法后，特效不直接生效，你还需调用 setEffectNodes:{@link #ByteRTCVideoEffect#setEffectNodes:} 设置视频特效素材包或调用 setColorFilter:{@link #ByteRTCVideoEffect#setColorFilter:} 设置滤镜。
 *      - 调用 disableVideoEffect{@link #ByteRTCVideoEffect#disableVideoEffect} 关闭视频特效。
 * @list 视频处理
 * @order 11
 */

- (int) enableVideoEffect;

/**
 * 
 * @type api
 * @brief 关闭视频特效。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @note 调用 enableVideoEffect{@link #ByteRTCVideoEffect#enableVideoEffect} 开启视频特效。
 * @list 视频处理
 * @order 12
 */

- (int) disableVideoEffect;

/**
 * 
 * @hidden for internal use only
 * @type api
 * @region 视频特效
 * @brief 返回视频特效句柄。私有接口。
 */

- (void* _Nullable)getVideoEffectHandle;

/**
 * 
 * @hidden for internal use only
 * @type api
 * @region 视频特效
 * @brief 私有接口 <br>
 * 设置视频特效素材包
 * @param stickerPath 特效素材包绝对路径。 <br>
 *        要取消当前视频特效，将此参数设置为 null。
 * @return
  *      - 0: 调用成功。
  *      - 1000: 未集成特效 SDK。
  *      - 1001: 特效 SDK 不支持该功能。
  *      - < 0: 调用失败。具体错误码，参看 [错误码表](https:
 * @note 在调用这个方法之前，你须先调用 enableVideoEffect:{@link #ByteRTCVideoEffect#enableVideoEffect:} 。
 */

- (int) applyStickerEffect:(NSString* _Nullable)stickerPath;

/**
 * 
 * @type api
 * @brief 设置视频特效素材包。
 * @param effectNodes 特效素材包绝对路径数组。 <br>
 *        要取消当前视频特效，将此参数设置为 null。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @note 调用本方法前，必须先调用 enableVideoEffect{@link #ByteRTCVideoEffect#enableVideoEffect}。
 * @list 视频处理
 * @order 13
 */

- (int) setEffectNodes:(NSArray<NSString*>*_Nonnull)effectNodes;

/**
 * 
 * @hidden for internal use only
 * @type api
 * @brief 叠加视频特效素材包。
 * @param effectNodes 特效素材包路径数组。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @note 该接口会在 setEffectNodes:{@link #ByteRTCVideoEffect#setEffectNodes:} 设置的特效基础上叠加特效。
 */

- (int) appendEffectNodes:(NSArray<NSString*>*_Nonnull)effectNodes;

/**
 * 
 * @hidden for internal use only
 * @type api
 * @brief 移除指定的视频特效资源。
 * @param effectNodes 特效素材包路径数组。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @note 移除 setEffectNodes:{@link #ByteRTCVideoEffect#setEffectNodes:} 或 appendEffectNodes:{@link #ByteRTCVideoEffect#appendEffectNodes:} 设置的视频特效资源。
 */

- (int) removeEffectNodes:(NSArray<NSString*>*_Nonnull)effectNodes;

/**
 * 
 * @type api
 * @brief 设置特效强度。
 * @param node 特效素材包绝对路径，参考[素材包结构说明](https:
 * @param key 需要设置的素材 key 名称，参考[素材 key 对应说明](https:
 * @param value 特效强度值，取值范围 [0,1]，超出范围时设置无效。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @list 视频处理
 * @order 14
 */

- (int) updateEffectNode:(NSString* _Nonnull)node
                key:(NSString* _Nonnull)key value:(float) value;

/**
 * 
 * @type api
 * @brief 设置颜色滤镜。
 * @param filterRes 滤镜资源包绝对路径。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @note 调用 setColorFilterIntensity:{@link #ByteRTCVideoEffect#setColorFilterIntensity:} 设置已启用颜色滤镜的强度。设置强度为 0 时即关闭颜色滤镜。
 * @list 视频处理
 * @order 15
 */

- (int) setColorFilter:(NSString* _Nonnull)filterRes;

/**
 * 
 * @type api
 * @brief 设置已启用颜色滤镜的强度。
 * @param intensity 滤镜强度。取值范围 [0,1]，超出范围时设置无效。 <br>
 *                  当设置滤镜强度为 0 时即关闭颜色滤镜。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @list 视频处理
 * @order 16
 */

- (int) setColorFilterIntensity:(float) intensity;

/**
 * 
 * @type api
 * @brief 将摄像头采集画面中的人像背景替换为指定图片或纯色背景。
 * @param backgroundStickerPath 背景贴纸特效素材绝对路径。
 * @param source 背景贴纸对象，参看 ByteRTCVirtualBackgroundSource{@link #ByteRTCVirtualBackgroundSource}。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @note
 *      - 调用本方法前，必须先调用 initCVResource:withAlgoModelDir:{@link #ByteRTCVideoEffect#initCVResource:withAlgoModelDir:} 进行初始化。
 *      - 调用 disableVirtualBackground{@link #ByteRTCVideoEffect#disableVirtualBackground} 关闭虚拟背景。
 * @list 视频处理
 * @order 17
 */

- (int) enableVirtualBackground:(NSString* _Nonnull)backgroundStickerPath
                withSource:(ByteRTCVirtualBackgroundSource* _Nonnull)source;

/**
 * 
 * @type api
 * @brief 关闭虚拟背景。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @note 调用 enableVirtualBackground:withSource:{@link #ByteRTCVideoEffect#enableVirtualBackground:withSource:} 开启虚拟背景后，可以调用此接口关闭虚拟背景。
 * @list 视频处理
 * @order 18
 */

- (int) disableVirtualBackground;

/**
 * 
 * @hidden for internal use only
 * @type api
 * @brief 开启人像属性检测。
 * @param config 人像属性检测参数，参看 ByteRTCExpressionDetectConfig{@link #ByteRTCExpressionDetectConfig}。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 */

- (int) setVideoEffectExpressionDetect:(ByteRTCExpressionDetectConfig* _Nonnull)config;

/**
 * 
 * @deprecated since 3.50 and will be deleted in 3.55, use enableFaceDetection:withInterval:withModelPath:{@link #ByteRTCVideoEffect#enableFaceDetection:withInterval:withModelPath:} and disableFaceDetection{@link #ByteRTCVideoEffect#disableFaceDetection} instead.
 * @type api
 * @brief 注册人脸检测结果回调观察者。 <br>
 *        注册此观察者后，你会周期性收到 onFaceDetectResult:{@link #ByteRTCFaceDetectionObserver#onFaceDetectResult:} 回调。
 * @param observer 人脸检测结果回调观察者，参看 ByteRTCFaceDetectionObserver{@link #ByteRTCFaceDetectionObserver}。
 * @param interval 时间间隔，必须大于 0。单位：ms。实际收到回调的时间间隔大于 `interval`，小于 `interval+视频采集帧间隔`。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 */

- (int) registerFaceDetectionObserver:(_Nullable id<ByteRTCFaceDetectionObserver>) observer
                withInterval:(NSInteger)interval __deprecated_msg("Will be removed in new version");

/**
 * 
 * @type api
 * @brief 开启人脸识别功能，并设置人脸检测结果回调观察者。 <br>
 *        此观察者后，你会周期性收到 onFaceDetectResult:{@link #ByteRTCFaceDetectionObserver#onFaceDetectResult:} 回调。
 * @param observer 人脸检测结果回调观察者，参看 ByteRTCFaceDetectionObserver{@link #ByteRTCFaceDetectionObserver}。
 * @param interval 两次回调之间的最小时间间隔，必须大于 0，单位为毫秒。实际收到回调的时间间隔大于 interval，小于 interval+视频采集帧间隔。
 * @param path 人脸检测算法模型文件路径，一般为 ttfacemodel 文件夹中 tt_face_vXXX.model 文件的绝对路径。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - -1004: 初始化中，初始化完成后启动此功能。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @list 视频处理
 * @order 19
 */

- (int) enableFaceDetection:(_Nullable id<ByteRTCFaceDetectionObserver>) observer
               withInterval:(NSUInteger)interval
              withModelPath:(NSString* _Nonnull)path;

/**
 * 
 * @type api
 * @brief 关闭人脸识别功能。
 * @return
 *      - 0: 调用成功。
 *      - –1000: 未集成特效 SDK。
 *      - –1001: 特效 SDK 不支持该功能。
 *      - –1002: 特效 SDK 版本不兼容。
 *      - < 0: 调用失败，错误码对应具体描述参看 [错误码表](https:
 * @list 视频处理
 * @order 20
 */

- (int) disableFaceDetection;
@end


/**
 * 
 * @type keytype
 * @brief RTC 智能决策后得到的帧率和分辨率积（宽*高）。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCFrameUpdateInfo : NSObject
/**
 * 
 * @brief 分辨率积（宽*高）。
 */

@property(assign, nonatomic) int pixel;
/**
 * 
 * @brief 帧率。
 */

@property(assign, nonatomic) int framerate;
@end
/**
 * 
 * @hidden(macOS)
 * @type keytype
 * @brief 蜂窝网络辅助增强应用的媒体模式
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCMediaTypeEnhancementConfig: NSObject
/**
 * 
 * @brief 对信令消息，是否启用蜂窝网络辅助增强。默认不启用。
 */

@property (assign, nonatomic) BOOL enhanceSignaling;
/**
 * 
 * @brief 对屏幕共享以外的其他音频，是否启用蜂窝网络辅助增强。默认不启用。
 */

@property (assign, nonatomic) BOOL enhanceAudio;
/**
 * 
 * @brief 对屏幕共享视频以外的其他视频，是否启用蜂窝网络辅助增强。默认不启用。
 */

@property (assign, nonatomic) BOOL enhanceVideo;
/**
 * 
 * @brief 对屏幕共享音频，是否启用蜂窝网络辅助增强。默认不启用。
 */

@property (assign, nonatomic) BOOL enhanceScreenAudio;
/**
 * 
 * @brief 对屏幕共享视频，是否启用蜂窝网络辅助增强。默认不启用。
 */

@property (assign, nonatomic) BOOL enhanceScreenVideo;
@end

/**
* 
* @hidden internal use only
* @type keytype
* @brief 缓存同步模式。
*/

typedef NS_ENUM(NSUInteger, ByteRTCChorusCacheSyncMode) {
    /**
     * 
     * @brief 合唱场景下，主唱应采用此模式，以发送带时间戳信息的媒体数据。
     */
    
    ByteRTCChorusCacheSyncModeProducer= 0,
    /**
     * 
     * @brief 合唱场景下，副唱应采用此模式。 <br>
     *        此模式下，副唱收到来自主唱的带时间戳的媒体数据。副唱发送的媒体数据中带有来自主唱的时间戳。
     */
    
    ByteRTCChorusCacheSyncModeRetransmitter= 1,
    /**
     * 
     * @brief 合唱场景下，听众应采用此模式。 <br>
     *        此模式下，听众收到来自主唱的时间戳，并据此对齐来自主唱和副唱的媒体数据，以获得良好的合唱播放效果。
     */
    
    ByteRTCChorusCacheSyncModeConsumer = 2
};

/**
 * 
 * @type keytype
 * @hidden for internal use
 * @brief 合唱缓存同步事件。
 */

typedef NS_ENUM(NSUInteger, ByteRTCChorusCacheSyncEvent) {
    /**
    * 
    * @brief 成功。
    */
   
    ByteRTCChorusCacheSyncEventStartSuccess = 0,
    /**
    * 
    * @brief 失败。
    */
   
    ByteRTCChorusCacheSyncEventStartFailed = 1,
};

/**
 * 
 * @hidden for internal use only
 * @type errorcode
 * @brief 缓存同步错误码。
 */
  
typedef NS_ENUM(NSUInteger, ByteRTCChorusCacheSyncError) {
    /**
     * 
     * @brief 成功。
     */
    
    ByteRTCChorusCacheSyncErrorOK = 0,
    /**
     * 
     * @brief 失败。推送至 CDN 时，应进行以下设置： <br>
     *        - `IMixedStreamConfig.MixedStreamSyncControlConfig.enable_sync = true`；
     *        - `IMixedStreamConfig.MixedStreamSyncControlConfig.base_user_id = {uid of producer}`。
     */
    
    ByteRTCChorusCacheSyncErrorWrongState = 1,
    /**
     * 
     * @brief 缓存同步功能已启动，不需要重复开启。
     */
    
    ByteRTCChorusCacheSyncErrorAlreadyRunning = 2
};

/**
 * 
 * @hidden for internal use only
 * @type keytype
 * @brief 缓存同步配置。
 */

BYTERTC_APPLE_EXPORT @interface ByteRTCChorusCacheSyncConfig: NSObject
/**
 * 
 * @brief 最大媒体缓存时长（ms）。 <br>
 *        取值范围是 `[500, 2500]`，默认值是 `2000`。 <br>
 *        值越大，同步效果越好，但会造成占用内存较大。如果参与缓存同步的各路媒体流之间的时间差超过此值，会造成丢帧。
 */

@property(assign, nonatomic) int maxCacheTimeMs;
/**
 * 
 * @brief 模式。参看 ByteRTCChorusCacheSyncMode{@link #ByteRTCChorusCacheSyncMode}. 默认值是 `retransmitter`。
 */

@property (assign, nonatomic) ByteRTCChorusCacheSyncMode mode;
/**
 * 
 * @brief 收到 onSyncedVideoFrames:withUids:{@link #ByteRTCChorusCacheSyncObserver#onSyncedVideoFrames:withUids:} 的频率。 <br>
 *        默认值是 `15`。此值通常应小于等于原始视频帧率；如果大于原始视频帧率，可能会收到重复帧。
 */

@property(assign, nonatomic) int videoFps;
@end

/**
 * 
 * @hidden for internal use only
 * @type callback
 * @brief 缓存同步 Observer
 */

@protocol ByteRTCChorusCacheSyncObserver <NSObject>
/**
 * 
 * @type callback
 * @brief 调用 startChorusCacheSync:observer:{@link #ByteRTCVideo#startChorusCacheSync:observer:}，并设置为 `consumer` 的用户会通过此回调获取经缓存同步后的视频帧。获取频率通过启动同步时的 `fps` 进行设置。
 * @param videoFrames 对应 `uids` 的视频帧。参看 ByteRTCVideoFrame{@link #ByteRTCVideoFrame}。
 * @param uids 参与合唱缓存同步的 `producer` 和 `retransmitter` 的列表，不包括参与但未发送媒体数据的用户。
 */

- (void)onSyncedVideoFrames:(NSArray<ByteRTCVideoFrame*>*)videoFrames withUids:(NSArray<NSString*>*)uids;
/**
 * 
 * @type callback
 * @brief 参与合唱缓存同步的 `producer` 和 `retransmitter` 发生变化时，收到此回调。
 * @param uids 当前的参与者列表
 * @note 有以下情况可能造成参与者发生变化： <br>
 *        - 用户主动调用 startChorusCacheSync:observer:{@link #ByteRTCVideo#startChorusCacheSync:observer:} 或 stopChorusCacheSync{@link #ByteRTCVideo#stopChorusCacheSync};
 *        - 原本参与缓存同步的用户发生异常退出。
 */

- (void)onSyncedUsersChanged:(NSArray<NSString*>*)uids;
/**
 * 
 * @type callback
 * @brief 缓存同步事件回调
 * @param event 事件，参看 ByteRTCChorusCacheSyncEvent{@link #ByteRTCChorusCacheSyncEvent}。
 * @param error 错误码，参看 ByteRTCChorusCacheSyncError{@link #ByteRTCChorusCacheSyncError}。
 */

- (void)onSyncEvent:(ByteRTCChorusCacheSyncEvent)event withError:(ByteRTCChorusCacheSyncError)error;
@end