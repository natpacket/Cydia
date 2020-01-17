/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <AssistantServices/ADSADOCommand.h>
#import <AssistantServices/ADCommandCenterClient.h>
#import <AssistantServices/ADCommandCenterRequestDelegate.h>
#import <AssistantServices/ADCommandCenterSpeechDelegate.h>
#import <AssistantServices/XXUnknownSuperclass.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXUnknownSuperclass__
#define __XXUnknownSuperclass__ 1
@interface XXUnknownSuperclass : NSObject
@end
#endif

@interface XXUnknownSuperclass (AFDaemonMessaging)
- (void)setInfoWithAceObject:(id)aceObject;	// 0x9031
@end

@interface XXUnknownSuperclass (AssistantExtensions)
+ (id)hexStringFromBytes:(const char *)bytes length:(unsigned)length;	// 0x24a7d
@end

@interface XXUnknownSuperclass (SADExtras) <ADSADOCommand>
- (id)expectedResponseClassName;	// 0x294c9
- (id)domainFromSADObject;	// 0x294a1
@end

@interface XXUnknownSuperclass (SADExtras) <ADSADOCommand>
- (id)expectedResponseClassName;	// 0x29511
- (id)domainFromSADObject;	// 0x294d9
@end

@interface XXUnknownSuperclass (SADExtras) <ADSADOCommand>
- (id)expectedResponseClassName;	// 0x29549
- (id)domainFromSADObject;	// 0x29521
@end

@interface XXUnknownSuperclass (SADExtras) <ADSADOCommand>
- (id)expectedResponseClassName;	// 0x29581
- (id)domainFromSADObject;	// 0x29559
@end

@interface XXUnknownSuperclass (SADExtras) <ADSADOCommand>
- (id)expectedResponseClassName;	// 0x295b9
- (id)domainFromSADObject;	// 0x29591
@end

@interface XXUnknownSuperclass (SADExtras) <ADSADOCommand>
- (id)expectedResponseClassName;	// 0x295f1
- (id)domainFromSADObject;	// 0x295c9
@end

@interface XXUnknownSuperclass (Assistant) <ADCommandCenterClient, ADCommandCenterRequestDelegate, ADCommandCenterSpeechDelegate>
- (void)adSpeechSetRecordingRoute:(int)route;	// 0x2b091
- (int)adSpeechRecordingRoute;	// 0x2b04d
- (void)adSpeechRecognitionDidFail:(id)adSpeechRecognition;	// 0x2af85
- (void)adSpeechDidRecognizePhrases:(id)adSpeech correctionContext:(id)context;	// 0x2aecd
- (void)adSpeechRecordingDidFail:(id)adSpeechRecording;	// 0x2ae05
- (void)adSpeechRecordingDidCancel;	// 0x2ad99
- (void)adSpeechRecordingDidEnd;	// 0x2ad2d
- (void)adSpeechRecordingDidUpdateAveragePower:(float)adSpeechRecording peakPower:(float)power;	// 0x2ac4d
- (void)adSpeechRecordingDidBegin;	// 0x2abe1
- (void)adSpeechRecordingWillBegin;	// 0x2ab75
- (void)adShouldSpeakChanged:(BOOL)ad;	// 0x2aac5
- (void)adRequestDidFailWithError:(id)adRequest;	// 0x2a9fd
- (void)adRequestReplyContextMayInitiateCall;	// 0x2a991
- (void)adRequestDidReceiveCommand:(id)adRequest;	// 0x2a901
- (void)adRequestDidFinish;	// 0x2a895
@end

@interface XXUnknownSuperclass (ADSAExtensions)
- (BOOL)shouldRetry;	// 0x2b0d5
@end

@interface XXUnknownSuperclass (ADSAExtensions)
- (id)afSpeechTokenPhrases;	// 0x2b13d
@end

@interface XXUnknownSuperclass (ADSAExtensions)
- (id)description;	// 0x2b8a1
- (id)_firstInterpretation;	// 0x2b6a9
- (id)afCorrectionContext;	// 0x2b63d
@end

@interface XXUnknownSuperclass (ADSAExtensions)
- (void)setAFDictationOptions:(id)options;	// 0x2ba51
- (id)_sasReturnKeyTypeFromAFDictationReturnKeyType:(int)afdictationReturnKeyType;	// 0x2b9b1
- (id)_sasKeyboardTypeFromAFDicatationKeyboardType:(int)afdicatationKeyboardType;	// 0x2b911
@end

@interface XXUnknownSuperclass (ADSAExtensions)
- (void)setAFCorrectionContext:(id)context;	// 0x2bc5d
- (void)setAFSpeechCorrectionInfo:(id)info;	// 0x2bc01
@end

@interface XXUnknownSuperclass (ADSAExtensions)
- (void)setAFCorrectionContext:(id)context;	// 0x2bcf9
@end

@interface XXUnknownSuperclass (ADSAExtensions)
- (void)setAFSpeechActivationEvent:(int)event;	// 0x2bd95
@end

@interface XXUnknownSuperclass (ADSAExtensions)
- (id)description;	// 0x2be01
@end

@interface XXUnknownSuperclass (ADRetryManager)
- (BOOL)_ad_isRetryableCommand;	// 0x2d5c9
@end

@interface XXUnknownSuperclass (ADRetryManager)
- (BOOL)_ad_isRetryableCommand;	// 0x2d5cd
@end

@interface XXUnknownSuperclass (ADRetryManager)
- (BOOL)_ad_isRetryableCommand;	// 0x2d5d1
@end

@interface XXUnknownSuperclass (ADRetryManager)
- (BOOL)_ad_isRetryableCommand;	// 0x2d5d5
@end

@interface XXUnknownSuperclass (ADRetryManager)
- (BOOL)_ad_isRetryableCommand;	// 0x2d5d9
@end

@interface XXUnknownSuperclass (ADRetryManager)
- (BOOL)_ad_isRetryableCommand;	// 0x2d5dd
@end

@interface XXUnknownSuperclass (ADRetryManager)
- (BOOL)_ad_isRetryableCommand;	// 0x2d5e1
@end

@interface XXUnknownSuperclass (ADSAExtensions)
- (int)resultCallbackCode;	// 0x2de41
@end

@interface XXUnknownSuperclass (ResultCallbacks)
- (int)resultCallbackCode;	// 0x2de49
@end

@interface XXUnknownSuperclass (ResultCallbacks)
- (int)resultCallbackCode;	// 0x2de4d
@end

@interface XXUnknownSuperclass (ResultCallbacks)
- (int)resultCallbackCode;	// 0x2de6d
@end

@interface XXUnknownSuperclass (AssistantExtensions)
- (BOOL)isOlderThanAge:(id)age;	// 0x30729
- (id)age;	// 0x306cd
- (BOOL)isWithinAccuracy:(double)accuracy;	// 0x3068d
@end

@interface XXUnknownSuperclass (ADLocationExtensions)
- (void)setPropertiesWithCLLocation:(id)cllocation;	// 0x30795
@end

@interface XXUnknownSuperclass (ADLocationExtensions)
- (double)desiredCLAccuracy;	// 0x30931
@end