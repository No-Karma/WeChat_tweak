//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RTEAttachmentView.h"

#import "FavFullScreenImageViewControllerDelegate.h"
#import "IQQMailExt.h"

@class FavFullScreenImageViewController, MMUIImageView, MMUILabel, NSString, UIActivityIndicatorView;

@interface MailRTEImageAttachmentView : RTEAttachmentView <FavFullScreenImageViewControllerDelegate, IQQMailExt>
{
    UIActivityIndicatorView *m_loadingView;
    MMUILabel *m_failLabel;
    unsigned int _dataSize;
    unsigned int _uiPlayTimes;
    id <MailRTEImageAttachmentViewDelegate> _delegate;
    MMUIImageView *_imageView;
    NSString *_localImagePath;
    FavFullScreenImageViewController *_favImageVC;
    double _imageScale;
}

- (void).cxx_destruct;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 ErrNo:(int)arg3;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize=_dataSize;
- (void)dealloc;
@property(nonatomic) __weak id <MailRTEImageAttachmentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak FavFullScreenImageViewController *favImageVC; // @synthesize favImageVC=_favImageVC;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(retain, nonatomic) MMUIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithAttachment:(id)arg1;
- (void)layoutView;
@property(retain, nonatomic) NSString *localImagePath; // @synthesize localImagePath=_localImagePath;
- (id)mailRTEAttachment;
- (void)onClickObject;
- (void)onEdit:(id)arg1;
- (void)onFavFullScreenEditImageAt:(unsigned int)arg1 withImage:(id)arg2;
- (void)onLongPressObject;
- (void)openImageWithEdit:(_Bool)arg1;
@property(nonatomic) unsigned int uiPlayTimes; // @synthesize uiPlayTimes=_uiPlayTimes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

