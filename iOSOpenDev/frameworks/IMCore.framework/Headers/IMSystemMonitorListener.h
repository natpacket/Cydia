/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */



@protocol IMSystemMonitorListener
@optional
- (void)systemDidLogout;
- (void)systemDidFastUserSwitchIn;
- (void)systemDidFastUserSwitchOut;
- (void)systemRestoreStateDidChange;
- (void)systemDidFinishMigration;
- (void)systemDidStopBackup;
- (void)systemDidStartBackup;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidSuspendForEventsOnly;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillResignActive;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)systemWillShutdown;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)screenUnlocked;
- (void)screenLocked;
- (void)screenSaverDidStop;
- (void)screenSaverDidStart;
- (void)systemDidBecomeUnidle;
- (void)systemDidBecomeIdle;
@end
