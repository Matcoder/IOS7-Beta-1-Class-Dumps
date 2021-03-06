/* MobileMail.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import "MailXPCServices.h"
#import "MegaMSectionFinishedSearchContext.h"
#import "TransferMailboxPickerPalette.h"
#import "PreviousDraftPickerHeaderView.h"
#import "StackElement.h"
#import "MiniMallSearchWrapper.h"
#import "MailStatusBar.h"
#import "AccountListControllerDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "MessageBodyLoader.h"
#import "MessageFoldDelegate.h"
#import "MFArrowControlsViewDelegate.h"
#import "MFSimpleLabel.h"
#import "FavoriteItem_SharedMailbox.h"
#import "SearchProgressCell.h"
#import "MFAppBadgeController.h"
#import "MailSearchBarTableViewContentView.h"
#import "MFAccountsListService.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "FavoritesListViewController.h"
#import "AccountSetupController.h"
#import "SlidableMasterSplitViewController.h"
#import "MailStatusLabelView.h"
#import "_MFSearchAlternativesOperation.h"
#import "UITableViewDataSource.h"
#import "MailboxHierarchyTree.h"
#import "MessageStatusIndicatorManager.h"
#import "MailboxHierarchyNode.h"
#import "MFMailComposeRemoteService.h"
#import "NSLayoutManagerDelegate.h"
#import "TransferMailboxPickerController.h"
#import "FavoriteItem.h"
#import "GenericSource.h"
#import "MFSearchTextParser.h"
#import "StackDelegate.h"
#import "MailMessageChangeSet.h"
#import "NSCoding.h"
#import "MCSFinalizedObject.h"
#import "StaticStore.h"
#import "AccountListController.h"
#import "MFMailPopoverManagerDelegate.h"
#import "FavoriteItem_Account.h"
#import "MFMessageSaveService.h"
#import "LibrarySearchSource.h"
#import "MessageSelectionStrategy.h"
#import "ContentProtectionTesting.h"
#import "DetailScrollView.h"
#import "ABPersonViewControllerDelegate.h"
#import "StackDataSource.h"
#import "HasAttachmentsCriterionSource.h"
#import "SecondarySearchOperation.h"
#import "StaticMailbox.h"
#import "MessageLoadButton.h"
#import "MFSearchAlternativeSender.h"
#import "MFPushRegistrationService.h"
#import "BufferedMessageView.h"
#import "MFMessageAttachmentViewController.h"
#import "MessageQuicklookImageAttachmentsActivity.h"
#import "MessageListStatusIndicatorManager.h"
#import "SearchManagerDelegate.h"
#import "MCSAllMessagesOperation.h"
#import "SearchOperation.h"
#import "MailMasterDetailViewController.h"
#import "MailboxEditingController.h"
#import "MegaMGrowingFetchContext.h"
#import "ComposeNavigationController.h"
#import "MFSearchTextParseTreeDelegate.h"
#import "FavoriteItem_Inbox.h"
#import "MessageLoadSplitter.h"
#import "MailServicesComposeDelegate.h"
#import "MCSChange.h"
#import "MFSearchTextParserDelegate.h"
#import "ThreadedMiniMallSource.h"
#import "OutboxContentViewCell.h"
#import "MFSearchAlternativeUnread.h"
#import "MessageConsumer.h"
#import "FlaggedCriterionSource.h"
#import "MCSJunk.h"
#import "SnapshotView.h"
#import "MFCustomSignatureService.h"
#import "MailMailboxChangeSet.h"
#import "AccountFavoritesPickerController.h"
#import "MBLSingleMessageClient.h"
#import "PartialMessageIndicator.h"
#import "AccountFavoritesPickerControllerDelegate.h"
#import "MCSCreateMailboxOperation.h"
#import "PreviousDraftCell.h"
#import "TransferNavigationController.h"
#import "MCSMailboxOperation.h"
#import "MFSearchService.h"
#import "MFMessageContentDisplayDelegate.h"
#import "MCSRenameMailboxOperation.h"
#import "_MessageHeaderLayoutToolbox.h"
#import "_CollectingInvocationTrampoline.h"
#import "MessageSelectionDataSource.h"
#import "MessageMiniMallObserver.h"
#import "_MBLCullOldMessagesJob.h"
#import "BarLabelItem.h"
#import "MFMailboxListingService.h"
#import "UISearchBarDelegate.h"
#import "UIActionSheetDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "MFSearchAlternativesPeopleGenerator.h"
#import "_MFResultsGenerator.h"
#import "MFLoadAutosavedMessageService.h"
#import "MegaMCurrentMessageRemoved.h"
#import "MailErrorHandler.h"
#import "MessageSaveToCameraRollActivity.h"
#import "MFSearchAlternativeRecipient.h"
#import "MMStartFetchContext.h"
#import "MailStatusUpdateView.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "MessageFoldTopFillView.h"
#import "MCSMoveMailboxOperation.h"
#import "MFAppPerformanceTesting.h"
#import "MailboxContentSelectionModel.h"
#import "UISplitViewControllerDelegate.h"
#import "AFCVisibleMailboxFetch.h"
#import "TransferMailboxPickerDelegate.h"
#import "ConversationStackItem.h"
#import "MFServiceConnectionState.h"
#import "MailboxListViewingContext.h"
#import "MessageFoldViewDelegate.h"
#import "_MFSearchAlternativeSharedAlternative.h"
#import "MailboxContentTableEntry.h"
#import "MailChangeTransaction.h"
#import "MessageSaveAllAttachmentsActivity.h"
#import "ABPersonViewControllerPrivateDelegate.h"
#import "MFMessageResultsGenerator.h"
#import "MFArrowControlsView.h"
#import "LoadRemoteImagesIndicator.h"
#import "LoadRequestManager.h"
#import "UIGestureRecognizerDelegate.h"
#import "FlaggedMailboxController.h"
#import "MFAccountsRemovalService.h"
#import "_MBLLoadMessageJob.h"
#import "MessageLoadIndicator.h"
#import "UITableViewDelegate.h"
#import "EKEventViewDelegate.h"
#import "MailboxParentPickerTableController.h"
#import "MFMessageWebLayerDelegate.h"
#import "MMMessageChangedContext.h"
#import "MFContentProtectionObserver.h"
#import "LoadRequestManagerDelegate.h"
#import "MessagePrinter.h"
#import "MailboxListViewControllerMail.h"
#import "LoadMIMEIndicator.h"
#import "MFSearchResultHandler.h"
#import "MFSAProxy.h"
#import "AutoFetchRequestPrivate.h"
#import "DimmingView.h"
#import "MailboxListViewControllerMailDelegate.h"
#import "MFMailComposeDeliveryController.h"
#import "MFNotificationObserverService.h"
#import "MFMailMessageLibraryDelegate.h"
#import "_MailboxContentViewCellLayoutValues.h"
#import "MailboxGroupedPickerTableCell.h"
#import "QLPreviewControllerDataSource.h"
#import "MessageFoldView.h"
#import "MiniMallSource.h"
#import "MFVIPSendersLibrary.h"
#import "MessageViewController.h"
#import "MFXPCData.h"
#import "FavoritesManager.h"
#import "MFDeliveryDelegate.h"
#import "_ContextDictionary.h"
#import "StackRevealGroupDelegate.h"
#import "MFSearchTextParsedToken.h"
#import "MailAllMessagesChangeSet.h"
#import "MFSearchAlternativesFlagsGenerator.h"
#import "MFSearchAlternativeVIP.h"
#import "FavoriteItem_Mailbox.h"
#import "MailboxPickerHeaderView.h"
#import "MFSearchAlternativeFlagged.h"
#import "MFVIPSender.h"
#import "MFRemoveAutosavedMessageService.h"
#import "UINavigationControllerDelegate.h"
#import "MailboxSource.h"
#import "MailboxContentSelectionModelDataSource.h"
#import "MailStatusProgressBarView.h"
#import "SecondaryLibrarySearchSource.h"
#import "LoadMIMEControl.h"
#import "MessageFoldShadowView.h"
#import "MailboxContentViewController.h"
#import "StackElementDelegate.h"
#import "ComposeServiceRemoteViewController.h"
#import "IncludesMeMailboxController.h"
#import "MFDeliveryQueue.h"
#import "EditFavoritesController.h"
#import "FavoritesCollection.h"
#import "MailboxTableCell.h"
#import "MessageContentLayer.h"
#import "PMIControl.h"
#import "WorkingPushButton.h"
#import "MailStatusIndeterminateView.h"
#import "_MSMailServiceObserverSummaryClient.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "MFSearchAlternativesTimePeriodGenerator.h"
#import "MailComposeDeliveryControllerDelegate.h"
#import "MFRequestBulletinsMessagesService.h"
#import "UnreadCriterionSource.h"
#import "_ThreadSafeContainer.h"
#import "MessageMegaMallObserver.h"
#import "DDDetectionControllerDelegate.h"
#import "MessageMegaMall.h"
#import "MailDetailViewController.h"
#import "FavoriteItem_UnifiedMailbox.h"
#import "_CellStaticView.h"
#import "MailStatusBarViewDelegate.h"
#import "MFAccountResultsGenerator.h"
#import "MFSubjectWebBrowserView.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MessageSearchResultsConsumer.h"
#import "MessageAddressScanner.h"
#import "MFAttachmentLibraryManager.h"
#import "MFHasAutosavedMessageService.h"
#import "MessageSaveVideoAttachmentActivity.h"
#import "ThreadBannerView.h"
#import "MiniMallSourceBulkOperationsDelegate.h"
#import "MessageHeaderLayer.h"
#import "MailMailboxGroupedPickerTableCell.h"
#import "MailboxParentPickerSelectionTarget.h"
#import "MFSearchAlternativesAttachmentsGenerator.h"
#import "MegaMSectionLoadedContext.h"
#import "MFSearchAlternativePerson.h"
#import "MFTableViewCell.h"
#import "MessageSaveImageAttachmentActivity.h"
#import "DetailViewController.h"
#import "MFSearchAlternativeOriginalText.h"
#import "PrimaryLibrarySearchSource.h"
#import "SharedMailboxController.h"
#import "MailboxPickerController.h"
#import "MFSearchAlternativeTimePeriod.h"
#import "_MCSJunk.h"
#import "PrimarySearchOperation.h"
#import "MessageHeaderHeader.h"
#import "SearchScopeControl.h"
#import "UIPrintInteractionControllerDelegate.h"
#import "MegaMRowsChangedContext.h"
#import "MFSearchAlternativesManagerDelegate.h"
#import "MailPersistentStorage.h"
#import "MessageResponseContext.h"
#import "UITextFieldDelegate.h"
#import "VIPMailboxController.h"
#import "MCSMessageOperation.h"
#import "MessageActivityViewController.h"
#import "PSHeaderFooterView.h"
#import "NoSelectedMessageView.h"
#import "MFComposeTypeFactoryDelegate.h"
#import "_MBLLoadForClientJob.h"
#import "FocusedTruncationRenderer.h"
#import "MFSearchAlternativesGenerator.h"
#import "MFFreezableContent.h"
#import "MailDeleteButtonView.h"
#import "MFStoreAutosavedMessageService.h"
#import "MessageFoldManager.h"
#import "MCSOperation.h"
#import "MFMailboxResultsGenerator.h"
#import "ComposeButtonItem.h"
#import "QueryProgressMonitor.h"
#import "MFMailService.h"
#import "IncludesMeCriterionSource.h"
#import "MCSFlagChange.h"
#import "MailboxParentPickerController.h"
#import "PreviousDraftPickerController.h"
#import "UIApplicationDelegate.h"
#import "MessageMiniMall.h"
#import "SelectedCellBackgroundView.h"
#import "_FontBasedSpec.h"
#import "MFAddressBookClient.h"
#import "SeparatorLayer.h"
#import "ABPeoplePickerNavigationControllerPrivateDelegate.h"
#import "DelayedScroller.h"
#import "PCConnectionManagerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "MFAttachmentHandlingDelegate.h"
#import "DeliveryOptions.h"
#import "MFEmailModelSaveService.h"
#import "MailChangeManager.h"
#import "MFActiveBulletinsAccountService.h"
#import "AccountLinkButtonView.h"
#import "MegaMMessageChangedContext.h"
#import "MailAppController.h"
#import "MCSDeleteMailboxOperation.h"
#import "MFMailAttachmentPlugInDelegate.h"
#import "MailboxContentViewCell.h"
#import "MFXPCConnection.h"
#import "QLPreviewControllerDelegate.h"
#import "MFAFProxy.h"
#import "MCSArchive.h"
#import "MFPassthroughViewProvider.h"
#import "MessageAttachmentNavigationController.h"
#import "CriterionSource.h"
#import "MailAnimationSettings.h"
#import "MMRowsChangedContext.h"
#import "LoadRemoteImagesControl.h"
#import "AFContextProvider.h"
#import "LongPressableButtonItem.h"
#import "MailboxEditingControllerDelegate.h"
#import "StackRevealGroup.h"
#import "SharedItem_Outbox.h"
#import "HasAttachmentsMailboxController.h"
#import "FavoriteItemSelectionTarget.h"
#import "AccountLinkButton.h"
#import "MessageFoldSource.h"
#import "StackController.h"
#import "MFKeyValueStoreService.h"
#import "MailChangeManagerUnreadListener.h"
#import "MMCurrentMessageRemoved.h"
#import "BarLabelItemLabel.h"
#import "MailStatusBarView.h"
#import "MCSDelete.h"
#import "MessageViewStatusIndicatorManager.h"
#import "ABUnknownPersonViewControllerDelegate.h"
#import "MailboxListViewControllerBase.h"
#import "BBObserverDelegate.h"
#import "MailboxUtilsClient.h"
#import "XXUnknownSuperclass.h"
#import "EditFavoritesControllerDelegate.h"
#import "TransferMessageViewController.h"
#import "MessageContentAreaLayer.h"
#import "VIPCriterionSource.h"
#import "MCSNotJunk.h"
#import "MFCanSendMailService.h"
#import "NSObject.h"
#import "MessageContentProgressLayer.h"
#import "_MCVCMallContext.h"
#import "StackShadowedView.h"
#import "MFVIPSendersListTableViewController.h"
#import "MCSChangeUtilities.h"
#import "DelayedScrollerDelegate.h"
#import "MFSearchTextParseTree.h"
#import "CertInfoTrustSummaryControllerDelegate.h"
#import "UIBarPositioningDelegate.h"
#import "MegaMStartFetchContext.h"
#import "MailboxFrecencyController.h"
#import "UpdateQueue.h"
#import "MFMailboxPushStateService.h"
#import "AutoFetchCreateJobListPrivate.h"
#import "MFUserAgent.h"
#import "MessageDeliveryInfo.h"
#import "_MBLGetNextClientOrMessageJob.h"
#import "SearchOrderCache.h"
#import "AutoFetchControllerDataSource.h"
#import "MFSearchAlternative.h"
#import "MFMessageViewingContextDelegate.h"
#import "UnreadMailboxController.h"
#import "MFSearchAlternativesManager.h"
#import "MCSTransfer.h"
#import "UIAlertViewDelegate.h"
#import "MFMessageSendService.h"
#import "SearchManager.h"
#import "NSCopying.h"
#import "MailNavigationController.h"
#import "AutoFetchController.h"
#import "MFEmailModelSendService.h"
#import "MasterDetailViewController.h"
