//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIColor, UIImage, UIImageView, UILabel, UISlider, UISwitch, UITextField, UIView;

@interface WCSVGDetailViewController : MMUIViewController <UITextFieldDelegate>
{
    UIColor *_color;
    NSString *_imageName;
    UIImage *_image;
    UIImageView *_imageView;
    UILabel *_sizeLabel;
    UITextField *_widthTextField;
    UITextField *_heightTextField;
    UILabel *_colorLabel;
    UIView *_colorView;
    UILabel *_colorDetailLabel;
    UISwitch *_colorSwitch;
    UISlider *_redColorSlider;
    UISlider *_greenColorSlider;
    UISlider *_blueColorSlider;
    UISlider *_alphaColorSlider;
    UILabel *_rotaionLabel;
    UITextField *_rotationTextField;
    UILabel *_opacityLabel;
    UILabel *_opacityDetailLabel;
    UISlider *_opacitySlider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UISlider *alphaColorSlider; // @synthesize alphaColorSlider=_alphaColorSlider;
@property(retain, nonatomic) UISlider *blueColorSlider; // @synthesize blueColorSlider=_blueColorSlider;
@property(retain, nonatomic) UILabel *colorDetailLabel; // @synthesize colorDetailLabel=_colorDetailLabel;
@property(retain, nonatomic) UILabel *colorLabel; // @synthesize colorLabel=_colorLabel;
- (void)colorSliderDidChangeValue:(id)arg1;
@property(retain, nonatomic) UISwitch *colorSwitch; // @synthesize colorSwitch=_colorSwitch;
- (void)colorSwitchDidChangeValue:(id)arg1;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
- (void)endEditing;
@property(retain, nonatomic) UISlider *greenColorSlider; // @synthesize greenColorSlider=_greenColorSlider;
@property(retain, nonatomic) UITextField *heightTextField; // @synthesize heightTextField=_heightTextField;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)initImage;
- (void)initView;
@property(retain, nonatomic) UILabel *opacityDetailLabel; // @synthesize opacityDetailLabel=_opacityDetailLabel;
@property(retain, nonatomic) UILabel *opacityLabel; // @synthesize opacityLabel=_opacityLabel;
@property(retain, nonatomic) UISlider *opacitySlider; // @synthesize opacitySlider=_opacitySlider;
- (void)opacitySliderDidChangeValue:(id)arg1;
@property(retain, nonatomic) UISlider *redColorSlider; // @synthesize redColorSlider=_redColorSlider;
@property(retain, nonatomic) UILabel *rotaionLabel; // @synthesize rotaionLabel=_rotaionLabel;
@property(retain, nonatomic) UITextField *rotationTextField; // @synthesize rotationTextField=_rotationTextField;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UITextField *widthTextField; // @synthesize widthTextField=_widthTextField;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateImage;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

