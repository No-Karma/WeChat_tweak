//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class MPCustomInteractiveHandler, MPDragDownGestureRecognizer, NSString, UIGestureRecognizer;

@interface MPDragDownGestureHandler : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _isShouldBegin;
    _Bool _isRunning;
    UIGestureRecognizer *_recognizeSimultaneouslyGestureRecognizer;
    MPCustomInteractiveHandler *_interactiveHandler;
    id <MPDragDownGestureHandlerDelegate> _delegate;
    MPDragDownGestureRecognizer *_recognizer;
    double _distance;
}

- (void).cxx_destruct;
- (void)clearGesture;
- (void)dealloc;
@property(nonatomic) __weak id <MPDragDownGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (id)gestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleGestureRecognizer:(id)arg1;
- (id)initWithView:(id)arg1 interactiveHandler:(id)arg2 delegate:(id)arg3;
@property(nonatomic) __weak MPCustomInteractiveHandler *interactiveHandler; // @synthesize interactiveHandler=_interactiveHandler;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool isShouldBegin; // @synthesize isShouldBegin=_isShouldBegin;
@property(nonatomic) __weak UIGestureRecognizer *recognizeSimultaneouslyGestureRecognizer; // @synthesize recognizeSimultaneouslyGestureRecognizer=_recognizeSimultaneouslyGestureRecognizer;
@property(retain, nonatomic) MPDragDownGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (void)setupGestureWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

