/*
 * Copyright (c) 2020 The VolcEngineRTC project authors. All Rights Reserved.
 * @brief VolcEngineRTC audio Frame
 */

#pragma once

#include <stdint.h>
#include <stddef.h>
#include <memory>
#include "bytertc_audio_defines.h"

namespace bytertc {

/**
 * 
 * @type keytype
 * @region 音频管理
 * @brief 音频帧类型
 */

enum AudioFrameType {
    /**
     * 
     * @brief PCM 16bit
     */
    
    kAudioFrameTypePCM16 = 0
};

/**
 * 
 * @type keytype
 * @region 音频管理
 * @brief 音频帧构建类
 */

typedef struct AudioFrameBuilder {
    /**
     * 
     * @brief 音频采样率
     */
    
    AudioSampleRate sample_rate;

    /**
     * 
     * @brief 音频通道数
     */
    
    AudioChannel channel;

    /**
     * 
     * @brief 音频帧时间戳，单位：微秒
     * @note 此时间戳不是 Linux 时间戳，只是 SDK 内部时间戳，仅保证帧之间时间戳的相对关系。
     */
    
    int64_t timestamp_us = 0;

    /**
     * 
     * @brief 音频帧数据
     */
    
    uint8_t* data;

    /**
     * 
     * @brief 音频帧数据大小
     */
    
    int64_t data_size = 0;

    /**
     * 
     * @brief 是否深拷贝
     */
    
    bool deep_copy = true;
} AudioFrameBuilder;
/**
 * 
 * @type keytype
 * @brief 音频帧
 */

class IAudioFrame {
public:
    /**
     * 
     * @type api
     * @region 音频管理
     * @brief 获取音频帧时间戳。
     * @return 音频帧时间戳，单位：微秒
     */
    
    virtual int64_t timestampUs() const = 0;
    /**
     * 
     * @type api
     * @region 音频管理
     * @brief 获取音频采样率。参看 AudioSampleRate{@link #AudioSampleRate}
     * @return 音频采样率，单位：Hz
     */
    
    virtual AudioSampleRate sampleRate() const = 0;
    /**
     * 
     * @type api
     * @region 音频管理
     * @brief 获取音频通道数。参看 AudioChannel{@link #AudioChannel}
     * @return 音频通道数
     * @note 双声道的情况下，左右声道的音频帧数据以 LRLRLR 形式排布。
     */
    
    virtual AudioChannel channel() const = 0;
    /**
     * 
     * @type api
     * @region 音频管理
     * @brief 获取音频帧内存块地址
     * @return 音频帧内存块地址
     */
    
    virtual uint8_t* data() const = 0;
    /**
     * 
     * @type api
     * @region 音频管理
     * @brief 获取音频帧数据大小
     * @return 音频帧数据大小，单位：字节。
     */
    
    virtual int dataSize() const = 0;
    /**
     * 
     * @type api
     * @region 音频管理
     * @brief 获取音频帧类型
     * @return 音频帧类型，目前只支持 PCM，详见 AudioFrameType{@link #AudioFrameType}
     */
    
    virtual AudioFrameType frameType() const = 0;
    /**
     * 
     * @type api
     * @region 音频管理
     * @brief 释放音频帧
     */
    
    virtual void release() = 0;
    /**
     * 
     * @type api
     * @region 音频管理
     * @brief 获取音频静音标志
     * @return 是否静音数据 <br>
     *        - true: 是
     *        - false: 否
     */
    
    virtual bool isMutedData() const = 0;
    /**
     * 
     * @hidden constructor/destructor
     */
    
protected:
    /**
     * 
     * @hidden constructor/destructor
     * @brief 析构函数
     */
    
    virtual ~IAudioFrame() = default;
};

/**
 * 
 * @type api
 * @region 音频管理
 * @brief 创建 IAudioFrame
 * @param builder 音频帧构建实例，参看 AudioFrameBuilder{@link #AudioFrameBuilder}
 * @return 详见 IAudioFrame{@link #IAudioFrame}
 * @list 音频管理
 * @order 0
 */

BYTERTC_API IAudioFrame* buildAudioFrame(const AudioFrameBuilder& builder);

/**
 * 
 * @type keytype
 * @brief 音频回调方法
 */

enum class AudioFrameCallbackMethod{
    /**
     * 
     * @brief 本地麦克风录制的音频数据回调
     */
    
    kRecord,
    /**
     * 
     * @brief 订阅的远端所有用户混音后的音频数据回调
     */
    
    kPlayback,
    /**
     * 
     * @brief 本地麦克风录制和订阅的远端所有用户混音后的音频数据回调
     */
    
    kMixed,
    /**
     * 
     * @brief 订阅的远端每个用户混音前的音频数据回调
     */
    
    kRemoteUser,
    /**
     * 
     * @brief 本地屏幕录制的音频数据回调
     */
    
    kRecordScreen,
};

/**
 * 
 * @type callback
 * @region 音频数据回调
 * @brief 音频数据回调观察者 <br>
 * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。 <br>
 * 本接口类中的回调周期均为 20 ms。
 */

class IAudioFrameObserver {
public:
    /**
     * 
     * @hidden constructor/destructor
     * @brief 析构函数
     */
    
    virtual ~IAudioFrameObserver() {
    }
    /**
     * 
     * @hidden for internal use only
     * @valid since 3.50
     */
    
    virtual void onRecordAudioFrameOriginal(const IAudioFrame& audio_frame) = 0;
    
    /**
     * 
     * @type callback
     * @region 音频数据回调
     * @brief 返回麦克风录制的音频数据
     * @param audio_frame 音频数据, 详见：IAudioFrame{@link #IAudioFrame}
     * @list 自定义流处理
     * @order 11
     */
    
    virtual void onRecordAudioFrame(const IAudioFrame& audio_frame) = 0;

    /**
     * 
     * @type callback
     * @region 音频数据回调
     * @brief 返回订阅的所有远端用户混音后的音频数据。
     * @param audio_frame 音频数据, 详见：IAudioFrame{@link #IAudioFrame}
     * @list 自定义流处理
     * @order 12
     */
    
    virtual void onPlaybackAudioFrame(const IAudioFrame& audio_frame) = 0;
    /**
     * 
     * @type callback
     * @region 音频数据回调
     * @brief 返回远端单个用户的音频数据
     * @param stream_info 远端流信息，参看 RemoteStreamKey{@link #RemoteStreamKey}。
     * @param audio_frame 音频数据, 参看 IAudioFrame{@link #IAudioFrame}。
     * @note 此回调在播放线程调用。不要在此回调中做任何耗时的事情，否则可能会影响整个音频播放链路。
     * @list 自定义流处理
     * @order 13
     */
    
    virtual void onRemoteUserAudioFrame(const RemoteStreamKey& stream_info, const IAudioFrame& audio_frame) = 0;

    /**
     * 
     * @type callback
     * @region 音频数据回调
     * @brief 返回本地麦克风录制和订阅的所有远端用户混音后的音频数据
     * @param audio_frame 音频数据, 详见：IAudioFrame{@link #IAudioFrame}
     * @list 自定义流处理
     * @order 14
     */
    
    virtual void onMixedAudioFrame(const IAudioFrame& audio_frame) = 0;

    /**
     * 
     * @type callback
     * @region 屏幕音频数据回调
     * @brief 返回本地屏幕录制的音频数据
     * @param audio_frame 音频数据, 详见：IAudioFrame{@link #IAudioFrame}
     * @list 自定义流处理
     * @order 15
     */
    
    virtual void onRecordScreenAudioFrame(const IAudioFrame& audio_frame) {
    }
};
/**
 * 
 * @type callback
 * @brief 自定义音频处理器。 <br>
 * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。
 */

class IAudioFrameProcessor{
public:
    /**
     * 
     * @type callback
     * @brief 回调本地采集的音频帧地址，供自定义音频处理。
     * @param audio_frame 音频帧地址，参看 IAudioFrame{@link #IAudioFrame}
     * @note
     *        - 完成自定义音频处理后，SDK 会对处理后的音频帧进行编码，并传输到远端。
     *        - 调用 `enableAudioProcessor`，并在参数中选择本地采集的音频时，每 10 ms 收到此回调。
     * @list 自定义流处理
     * @order 8
     */
    
    virtual int onProcessRecordAudioFrame(IAudioFrame& audio_frame) = 0;
    /**
     * 
     * @type callback
     * @brief 回调远端音频混音的音频帧地址，供自定义音频处理。
     * @param audio_frame 音频帧地址，参看 IAudioFrame{@link #IAudioFrame}
     * @note 调用 `enableAudioProcessor`，并在参数中选择远端音频流的的混音音频时，每 10 ms 收到此回调。
     * @list 自定义流处理
     * @order 7
     */
    
    virtual int onProcessPlayBackAudioFrame(IAudioFrame& audio_frame) = 0;
    /**
     * 
     * @type callback
     * @brief 回调单个远端用户的音频帧地址，供自定义音频处理。
     * @param stream_info 音频流信息，参看 RemoteStreamKey{@link #RemoteStreamKey}
     * @param audio_frame 音频帧地址，参看 IAudioFrame{@link #IAudioFrame}
     * @note 调用 `enableAudioProcessor`，并在参数中选择各个远端音频流时，每 10 ms 收到此回调。
     * @list 自定义流处理
     * @order 9
     */
    
    virtual int onProcessRemoteUserAudioFrame(const RemoteStreamKey& stream_info, IAudioFrame& audio_frame) = 0;
    /**
     * 
     * @hidden(macOS, Windows, Linux)
     * @valid since 3.50
     * @type callback
     * @brief 软件耳返音频数据的回调。你可根据此回调自定义处理音频。 <br>
     *        耳返音频中包含通过调用 `setVoiceReverbType` 和 `setVoiceChangerType` 设置的音频特效。
     * @param audio_frame 音频帧地址。参看 IAudioFrame{@link #IAudioFrame}。
     * @note
     *        - 此数据处理只影响软件耳返音频数据。
     *        - 要启用此回调，必须调用 `enableAudioProcessor`，并选择耳返音频，每 10 ms 收到此回调。
     * @return
     *        - 0： 成功。
     *        - < 0： 失败。
     */
    
    virtual int onProcessEarMonitorAudioFrame(IAudioFrame& audio_frame) = 0;
    /**
     * 
     * @type callback
     * @brief 屏幕共享的音频帧地址回调。你可根据此回调自定义处理音频。
     * @param audio_frame 音频帧地址，参看 IAudioFrame{@link #IAudioFrame}。
     * @note 调用 `enableAudioProcessor`，把返回给音频处理器的音频类型设置为屏幕共享音频后，每 10 ms 收到此回调。
     * @list 自定义流处理
     * @order 10
     */
    
    virtual int onProcessScreenAudioFrame(IAudioFrame& audio_frame) = 0;
    /**
     * 
     * @hidden constructor/destructor
     * @brief 析构函数
     */
    
    virtual ~IAudioFrameProcessor() {
    }
};

/**
 * 
 * @deprecated since 3.37 and will be deleted in 3.51.
 * @type callback
 * @region 音频数据回调
 * @brief 音频数据回调观察者 <br>
 * 注意：回调函数是在 SDK 内部线程（非 UI 线程）同步抛出来的，请不要做耗时操作或直接操作 UI，否则可能导致 app 崩溃。
 */

class IRemoteAudioFrameObserver {
public:
    /**
     * 
     * @hidden constructor/destructor
     * @brief 析构函数
     */
    
    virtual ~IRemoteAudioFrameObserver() {
    }

    /**
     * 
     * @type callback
     * @region 音频数据回调
     * @brief 获得单个流的音频数据，此回调通过调用 registerAudioFrameObserver{@link #IRTCVideo#registerAudioFrameObserver} 触发。
     * @param audio_frame 音频数据, 详见： IAudioFrame{@link #IAudioFrame}
     * @param stream_info 该音频流的业务信息, 详见： RemoteStreamKey{@link #RemoteStreamKey}
     */
    
    virtual void onRemoteAudioFrame(const IAudioFrame& audio_frame, const RemoteStreamKey& stream_info) = 0;
};



}  