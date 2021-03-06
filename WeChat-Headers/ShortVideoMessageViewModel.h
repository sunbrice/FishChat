//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSString, UIImage;

@interface ShortVideoMessageViewModel : CommonMessageViewModel
{
    UIImage *m_thumbImage;
    struct CGSize m_thumbImageSize;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) struct CGSize thumbImageSize; // @synthesize thumbImageSize=m_thumbImageSize;
- (void).cxx_destruct;
- (void)refreshAfterThumbImageDidChange;
- (void)onMessageStopPlaying;
- (void)onMessageStartPlaying;
@property(readonly, nonatomic) _Bool isSightVideoPlayable;
@property(readonly, nonatomic) NSString *thumbImagePath;
@property(readonly, nonatomic) NSString *videoPath;
@property(readonly, nonatomic) UIImage *thumbImage;
- (_Bool)isShowSendFailView;
- (_Bool)isShowSendingView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

