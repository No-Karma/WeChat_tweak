//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "MMTipsViewControllerDelegate.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayTransferMoneyPaidSuccessViewV2Delegate.h"

@class NSString, WCPaySelectVerifyTypeLogic, WCPayTransferMoneyPaidSuccessViewV2;

@interface WCPayTranferMoneyPaidSuccessViewController : WCPayBaseViewController <WCPayTransferMoneyPaidSuccessViewV2Delegate, MMTipsViewControllerDelegate, WCBaseControlMgrExt>
{
    _Bool m_bNeedBindCard;
    id <WCPayTranferMoneyPaidSuccessViewControllerDelegate> m_delegate;
    WCPayTransferMoneyPaidSuccessViewV2 *_m_layoutV2;
    WCPaySelectVerifyTypeLogic *_m_realNameLogic;
}

- (void).cxx_destruct;
- (void)ContinueOnHistoryOrderDetailBack;
- (void)OnHistoryOrderDetailBack;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initNavigationBar;
- (void)layoutV2;
@property(retain, nonatomic) WCPayTransferMoneyPaidSuccessViewV2 *m_layoutV2; // @synthesize m_layoutV2=_m_layoutV2;
@property(retain, nonatomic) WCPaySelectVerifyTypeLogic *m_realNameLogic; // @synthesize m_realNameLogic=_m_realNameLogic;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickDone;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickLotteryBtn:(id)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ReturnWithoutDrawLottery;
- (void)onWCPayTransferMoneyPaidSuccessViewV2StartDrawLottery:(unsigned int)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)selectNeedBindCard:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showSetPwdTipsView;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

