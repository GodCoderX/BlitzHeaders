//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CBInterstitialPlayback.h"
#import "CBViewProtocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, CBFlatProgressBar, CBToasterView, CBTouchCallbackView, NSDictionary, NSString, NSTimer, UIButton, UIImage, UIImageView, UILabel;

@interface CBNativeInterstitialView : UIView <CBViewProtocol, CBInterstitialPlayback>
{
    _Bool _videoConfirmationEnabled;
    _Bool _videoFinished;
    _Bool _videoPlaying;
    _Bool _videoLoadSuccess;
    _Bool _videoControlsViewVisible;
    _Bool _videoControlsTogglable;
    _Bool _postVideoToasterEnabled;
    _Bool _postVideoNotificationEnabled;
    _Bool _videoProgressTimerEnabled;
    _Bool _closing;
    _Bool _fullscreen;
    _Bool _preroll_popup_fullscreen;
    int _mediaType;
    int _state;
    CDUnknownBlockType _clickCallback;
    CDUnknownBlockType _closeCallback;
    CDUnknownBlockType _displayCallback;
    CDUnknownBlockType _readyToDisplayCallback;
    CDUnknownBlockType _failCallback;
    CDUnknownBlockType _playbackCompletedCallback;
    long long _orientation;
    double _adScaleLandscape;
    double _frameScaleLandscape;
    double _adScalePortrait;
    double _frameScalePortrait;
    double _closeScaleLandscape;
    double _closeScalePortrait;
    double _replayScaleLandscape;
    double _replayScalePortrait;
    double _videoAdControlClickButtonScale;
    double _postVideoControlsIconScale;
    double _postVideoNotificationIconImageScale;
    double _postVideoControlsButtonScale;
    double _videoConfirmationButtonImageScale;
    double _videoConfirmationIconScale;
    double _videoDuration;
    double _currentSecond;
    unsigned long long _playCount;
    unsigned long long _closeButtonDelayInSeconds;
    UIImage *_adImagePortrait;
    UIImage *_adImageLandscape;
    UIImage *_frameImagePortrait;
    UIImage *_frameImageLandscape;
    UIImage *_closeImagePortrait;
    UIImage *_closeImageLandscape;
    UIImage *_replayImageLandscape;
    UIImage *_replayImagePortrait;
    NSDictionary *_assets;
    NSDictionary *_ux;
    NSString *_adId;
    UIButton *_adUnit;
    UIImageView *_frameUnit;
    UIButton *_closeButton;
    UIButton *_replayButton;
    UIView *_fullscreenBackground;
    UIView *_videoConfirmationView;
    UIImage *_videoConfirmationButtonImage;
    UIButton *_videoConfirmationButton;
    UIImage *_videoConfirmationIcon;
    UIImageView *_videoConfirmationIconImageView;
    UILabel *_videoConfirmationLabel;
    CBTouchCallbackView *_videoAdControlsView;
    UIView *_videoAdControlsDarkViewBottom;
    UIView *_videoAdControlsDarkViewTop;
    UIImage *_videoAdControlClickImage;
    UIButton *_videoAdControlClickButton;
    CBFlatProgressBar *_progressIndicator;
    CBToasterView *_postVideoControls;
    UIImage *_postVideoControlsIconImage;
    UIImageView *_postVideoControlsIconImageView;
    UIImage *_postVideoControlsButtonImage;
    UIButton *_postVideoControlsButton;
    UILabel *_postVideoControlsTitle;
    UILabel *_postVideoControlsTagline;
    CBToasterView *_postVideoNotification;
    UIImageView *_postVideoNotificationIconImageView;
    UILabel *_postVideoNotificationText;
    UIImage *_postVideoNotificationIconImage;
    NSTimer *_currentHudTimer;
    UILabel *_progressTimer;
    NSTimer *_videoProgressTimer;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
    NSString *_videoId;
    struct dispatch_group_s *_group;
    unsigned long long _supportedOrientations;
}

+ (void)prefetchWebImage:(id)arg1;
+ (void)prefetchAssets:(id)arg1;
@property unsigned long long supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) struct dispatch_group_s *group; // @synthesize group=_group;
@property(nonatomic) _Bool preroll_popup_fullscreen; // @synthesize preroll_popup_fullscreen=_preroll_popup_fullscreen;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSTimer *videoProgressTimer; // @synthesize videoProgressTimer=_videoProgressTimer;
@property(retain, nonatomic) UILabel *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) NSTimer *currentHudTimer; // @synthesize currentHudTimer=_currentHudTimer;
@property(retain, nonatomic) UIImage *postVideoNotificationIconImage; // @synthesize postVideoNotificationIconImage=_postVideoNotificationIconImage;
@property(retain, nonatomic) UILabel *postVideoNotificationText; // @synthesize postVideoNotificationText=_postVideoNotificationText;
@property(retain, nonatomic) UIImageView *postVideoNotificationIconImageView; // @synthesize postVideoNotificationIconImageView=_postVideoNotificationIconImageView;
@property(retain, nonatomic) CBToasterView *postVideoNotification; // @synthesize postVideoNotification=_postVideoNotification;
@property(retain, nonatomic) UILabel *postVideoControlsTagline; // @synthesize postVideoControlsTagline=_postVideoControlsTagline;
@property(retain, nonatomic) UILabel *postVideoControlsTitle; // @synthesize postVideoControlsTitle=_postVideoControlsTitle;
@property(retain, nonatomic) UIButton *postVideoControlsButton; // @synthesize postVideoControlsButton=_postVideoControlsButton;
@property(retain, nonatomic) UIImage *postVideoControlsButtonImage; // @synthesize postVideoControlsButtonImage=_postVideoControlsButtonImage;
@property(retain, nonatomic) UIImageView *postVideoControlsIconImageView; // @synthesize postVideoControlsIconImageView=_postVideoControlsIconImageView;
@property(retain, nonatomic) UIImage *postVideoControlsIconImage; // @synthesize postVideoControlsIconImage=_postVideoControlsIconImage;
@property(retain, nonatomic) CBToasterView *postVideoControls; // @synthesize postVideoControls=_postVideoControls;
@property(retain, nonatomic) CBFlatProgressBar *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) UIButton *videoAdControlClickButton; // @synthesize videoAdControlClickButton=_videoAdControlClickButton;
@property(retain, nonatomic) UIImage *videoAdControlClickImage; // @synthesize videoAdControlClickImage=_videoAdControlClickImage;
@property(retain, nonatomic) UIView *videoAdControlsDarkViewTop; // @synthesize videoAdControlsDarkViewTop=_videoAdControlsDarkViewTop;
@property(retain, nonatomic) UIView *videoAdControlsDarkViewBottom; // @synthesize videoAdControlsDarkViewBottom=_videoAdControlsDarkViewBottom;
@property(retain, nonatomic) CBTouchCallbackView *videoAdControlsView; // @synthesize videoAdControlsView=_videoAdControlsView;
@property(retain, nonatomic) UILabel *videoConfirmationLabel; // @synthesize videoConfirmationLabel=_videoConfirmationLabel;
@property(retain, nonatomic) UIImageView *videoConfirmationIconImageView; // @synthesize videoConfirmationIconImageView=_videoConfirmationIconImageView;
@property(retain, nonatomic) UIImage *videoConfirmationIcon; // @synthesize videoConfirmationIcon=_videoConfirmationIcon;
@property(retain, nonatomic) UIButton *videoConfirmationButton; // @synthesize videoConfirmationButton=_videoConfirmationButton;
@property(retain, nonatomic) UIImage *videoConfirmationButtonImage; // @synthesize videoConfirmationButtonImage=_videoConfirmationButtonImage;
@property(retain, nonatomic) UIView *videoConfirmationView; // @synthesize videoConfirmationView=_videoConfirmationView;
@property(retain, nonatomic) UIView *fullscreenBackground; // @synthesize fullscreenBackground=_fullscreenBackground;
@property(retain, nonatomic) UIButton *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *frameUnit; // @synthesize frameUnit=_frameUnit;
@property(retain, nonatomic) UIButton *adUnit; // @synthesize adUnit=_adUnit;
@property(retain, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(retain, nonatomic) NSDictionary *ux; // @synthesize ux=_ux;
@property(retain, nonatomic) NSDictionary *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) UIImage *replayImagePortrait; // @synthesize replayImagePortrait=_replayImagePortrait;
@property(retain, nonatomic) UIImage *replayImageLandscape; // @synthesize replayImageLandscape=_replayImageLandscape;
@property(retain, nonatomic) UIImage *closeImageLandscape; // @synthesize closeImageLandscape=_closeImageLandscape;
@property(retain, nonatomic) UIImage *closeImagePortrait; // @synthesize closeImagePortrait=_closeImagePortrait;
@property(retain, nonatomic) UIImage *frameImageLandscape; // @synthesize frameImageLandscape=_frameImageLandscape;
@property(retain, nonatomic) UIImage *frameImagePortrait; // @synthesize frameImagePortrait=_frameImagePortrait;
@property(retain, nonatomic) UIImage *adImageLandscape; // @synthesize adImageLandscape=_adImageLandscape;
@property(retain, nonatomic) UIImage *adImagePortrait; // @synthesize adImagePortrait=_adImagePortrait;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) _Bool closing; // @synthesize closing=_closing;
@property(nonatomic) _Bool videoProgressTimerEnabled; // @synthesize videoProgressTimerEnabled=_videoProgressTimerEnabled;
@property(nonatomic) _Bool postVideoNotificationEnabled; // @synthesize postVideoNotificationEnabled=_postVideoNotificationEnabled;
@property(nonatomic) _Bool postVideoToasterEnabled; // @synthesize postVideoToasterEnabled=_postVideoToasterEnabled;
@property(nonatomic) _Bool videoControlsTogglable; // @synthesize videoControlsTogglable=_videoControlsTogglable;
@property(nonatomic) unsigned long long closeButtonDelayInSeconds; // @synthesize closeButtonDelayInSeconds=_closeButtonDelayInSeconds;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) _Bool videoControlsViewVisible; // @synthesize videoControlsViewVisible=_videoControlsViewVisible;
@property(nonatomic) _Bool videoLoadSuccess; // @synthesize videoLoadSuccess=_videoLoadSuccess;
@property(nonatomic) double currentSecond; // @synthesize currentSecond=_currentSecond;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) _Bool videoPlaying; // @synthesize videoPlaying=_videoPlaying;
@property(nonatomic) _Bool videoFinished; // @synthesize videoFinished=_videoFinished;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) double videoConfirmationIconScale; // @synthesize videoConfirmationIconScale=_videoConfirmationIconScale;
@property(nonatomic) double videoConfirmationButtonImageScale; // @synthesize videoConfirmationButtonImageScale=_videoConfirmationButtonImageScale;
@property(nonatomic) double postVideoControlsButtonScale; // @synthesize postVideoControlsButtonScale=_postVideoControlsButtonScale;
@property(nonatomic) double postVideoNotificationIconImageScale; // @synthesize postVideoNotificationIconImageScale=_postVideoNotificationIconImageScale;
@property(nonatomic) double postVideoControlsIconScale; // @synthesize postVideoControlsIconScale=_postVideoControlsIconScale;
@property(nonatomic) double videoAdControlClickButtonScale; // @synthesize videoAdControlClickButtonScale=_videoAdControlClickButtonScale;
@property(nonatomic) double replayScalePortrait; // @synthesize replayScalePortrait=_replayScalePortrait;
@property(nonatomic) double replayScaleLandscape; // @synthesize replayScaleLandscape=_replayScaleLandscape;
@property(nonatomic) double closeScalePortrait; // @synthesize closeScalePortrait=_closeScalePortrait;
@property(nonatomic) double closeScaleLandscape; // @synthesize closeScaleLandscape=_closeScaleLandscape;
@property(nonatomic) double frameScalePortrait; // @synthesize frameScalePortrait=_frameScalePortrait;
@property(nonatomic) double adScalePortrait; // @synthesize adScalePortrait=_adScalePortrait;
@property(nonatomic) double frameScaleLandscape; // @synthesize frameScaleLandscape=_frameScaleLandscape;
@property(nonatomic) double adScaleLandscape; // @synthesize adScaleLandscape=_adScaleLandscape;
@property(nonatomic) _Bool videoConfirmationEnabled; // @synthesize videoConfirmationEnabled=_videoConfirmationEnabled;
@property long long orientation; // @synthesize orientation=_orientation;
@property(copy) CDUnknownBlockType playbackCompletedCallback; // @synthesize playbackCompletedCallback=_playbackCompletedCallback;
@property(copy) CDUnknownBlockType failCallback; // @synthesize failCallback=_failCallback;
@property(copy) CDUnknownBlockType readyToDisplayCallback; // @synthesize readyToDisplayCallback=_readyToDisplayCallback;
@property(copy) CDUnknownBlockType displayCallback; // @synthesize displayCallback=_displayCallback;
@property(copy) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(copy) CDUnknownBlockType clickCallback; // @synthesize clickCallback=_clickCallback;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)shouldAdjustFrameForStatusBar;
- (_Bool)needsIPhonePortrait;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)stopPlayback;
- (void)stopVideoProgressTimer;
- (void)updateVideoProgress;
- (void)playerLayerHack;
- (void)startPlayback:(_Bool)arg1;
- (void)startPlayback;
- (void)videoDidPlayToEndTime;
- (void)videoConfirmationContinue:(id)arg1;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)approvedClick:(id)arg1 forEvent:(id)arg2;
- (void)videoAdControlClickButtonTap:(id)arg1 forEvent:(id)arg2;
- (id)element:(id)arg1 forEvent:(id)arg2;
- (void)postVideoControlsClick:(id)arg1 forEvent:(id)arg2;
- (void)click:(id)arg1 forEvent:(id)arg2;
- (void)stopCurrentHudTimer;
- (void)hudClick;
- (void)toggleHudControls;
- (void)close:(id)arg1;
- (void)replay:(id)arg1;
- (struct CGRect)offsetRect:(struct CGRect)arg1 withDict:(id)arg2;
- (void)layoutVideoControlsWithAdFrame:(struct CGRect)arg1;
- (void)layoutVideoCloseButtonForPortrait;
- (void)layoutReplayButton;
- (void)layoutCloseButton;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)displayUI;
- (id)prepareWithResponse:(id)arg1;
- (_Bool)canDisplay;
- (void)loadImage:(id)arg1 scaleKey:(id)arg2 assets:(id)arg3 group:(struct dispatch_group_s *)arg4;
- (void)initVideoControls;
- (double)currentItemPlayableDuration;
- (double)currentItemPlayTime;
- (void)pause;
- (void)audioRouteHeadphones;
- (void)audioRoutePhoneCall;
- (void)audioInterruptShouldResume;
- (void)delayedPlay;
- (void)play;
- (void)initVideo;
- (void)destroy;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

