/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLongLookPresentationController : UIPresentationController <NCLongLookAnimator> {
    <UIViewControllerTransitionCoordinator> * _activeTransitionCoordinator;
    _UIBackdropView * _backgroundBlurView;
    UIView * _backgroundDarkeningView;
    BOOL  _didPlayDismissHaptic;
    _UIFeedbackStatesBehavior * _dismissFeedbackBehavior;
    UILabel * _dismissLabel;
    UIView * _dismissLabelContainerView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _keyboardFrame;
    BOOL  _listenToKeyboardEvents;
    <NCLongLookPresentationControllerDelegate> * _longLookPresentationControllerDelegate;
    _UIBackdropViewSettings * _presentedBackgroundBlurSettings;
    BOOL  _presenting;
    UIView * _revealShortLook;
    UIView * _sourceView;
    UIViewController * _sourceViewController;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _sourceViewInitialFrame;
    <NCLongLookAnimatorDelegate> * _transitionAnimatorDelegate;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (getter=isCancelled, nonatomic, readonly) BOOL cancelled;
@property (nonatomic, readonly) int completionCurve;
@property (nonatomic, readonly) float completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=_keyboardFrame, setter=_setKeyboardFrame:, nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } keyboardFrame;
@property (nonatomic) <NCLongLookPresentationControllerDelegate> *longLookPresentationControllerDelegate;
@property (getter=isPresenting, nonatomic) BOOL presenting;
@property (readonly) Class superclass;
@property (nonatomic) <NCViewControllerAnimatedTransitioningDelegate> *transitionAnimatorDelegate;
@property (nonatomic, readonly) BOOL wantsInteractiveStart;

+ (struct CGSize { float x1; float x2; })_sizeOfViewWithPreferredContentSize:(struct CGSize { float x1; float x2; })arg1 inContainerViewWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (struct CGSize { float x1; float x2; })_sizeOfViewWithPreferredContentSize:(struct CGSize { float x1; float x2; })arg1 inUseableContainerViewBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })useableContainerViewBoundsInContainerViewWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (BOOL)_actuateFeedbackForDismissalIfNecessary;
- (void)_actuateFeedbackForDismissalInvalidationIfNecessary;
- (void)_animateDismissalToEdge:(unsigned int)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)_animatePreviewPresentation:(BOOL)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (id)_animationFactoryForLongLookPresentation:(BOOL)arg1;
- (void)_configureDismissFeedbackIfNecessary;
- (void)_configureDismissLabelIfNecessary;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsetWithPresentedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContainerViewWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGPoint { float x1; float x2; })_contentOffsetForPresentedLongLookView:(struct UIView { Class x1; }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_dismissLabelContainerViewFrameForPresentedViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameOfPresentedViewInContainerViewWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_initialBackgroundBlurSettings;
- (BOOL)_isTransitionAnimated;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keyboardFrame;
- (void)_popDismissLabel;
- (id)_presentedAnimatableBlurringView;
- (id)_presentedBackgroundBlurSettings;
- (id)_presentedNotificationViewController;
- (void)_setKeyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_shouldMakePresentedViewControllerFirstResponder;
- (BOOL)_shouldPresentInCurrentContext;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)cancelInteractiveTransition;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)finishInteractiveTransition;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)hintDismissalWithCommitProgress:(float)arg1 overallProgress:(float)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;
- (BOOL)isCancelled;
- (BOOL)isPresenting;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)longLookPresentationControllerDelegate;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (void)setLongLookPresentationControllerDelegate:(id)arg1;
- (void)setPresenting:(BOOL)arg1;
- (void)setTransitionAnimatorDelegate:(id)arg1;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (void)startInteractiveTransition:(id)arg1;
- (id)transitionAnimatorDelegate;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransition:(float)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
