/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSMutableArray, NSArray;

@interface ASMoveItemsTask : ASTask {
	NSMutableArray *_moveItems;	// 104 = 0x68
	NSArray *_pushedMoveRequests;	// 108 = 0x6c
	int _dataclass;	// 112 = 0x70
}
@property(assign) int dataclass;	// G=0x5054d; S=0x5055d; @synthesize=_dataclass
@property(retain) NSArray *pushedMoveRequests;	// G=0x50515; S=0x50529; @synthesize=_pushedMoveRequests
// declared property setter: - (void)setDataclass:(int)dataclass;	// 0x5055d
// declared property getter: - (int)dataclass;	// 0x5054d
// declared property setter: - (void)setPushedMoveRequests:(id)requests;	// 0x50529
// declared property getter: - (id)pushedMoveRequests;	// 0x50515
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x50489
- (id)requestBody;	// 0x502c9
- (void)finishWithError:(id)error;	// 0x50079
- (BOOL)processContext:(id)context;	// 0x4fb51
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x4fb41
- (void)addSourceID:(id)anId sourceFolder:(id)folder destinatonFolder:(id)folder3;	// 0x4fa55
- (int)commandCode;	// 0x4fa51
- (void)dealloc;	// 0x4f9f1
@end