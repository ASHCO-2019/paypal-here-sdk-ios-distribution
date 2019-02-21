/**
 * PPRetailCard.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: node_modules/retail-payment-device/src/Messages/Card.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"


@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceConstants;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailNetworkRequest;
@class PPRetailNetworkResponse;
@class PPRetailSdkEnvironmentInfo;
@class PPRetailRetailInvoice;
@class PPRetailRetailInvoicePayment;
@class PPRetailBraintreeManager;
@class PPRetailCaptureHandler;
@class PPRetailTransactionContext;
@class PPRetailTransactionManager;
@class PPRetailTransactionBeginOptions;
@class PPRetailReceiptDestination;
@class PPRetailDeviceManager;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailOfflinePaymentStatus;
@class PPRetailOfflineTransactionRecord;
@class PPRetailTokenExpirationHandler;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailPaymentDevice;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailCardInsertedHandler;
@class PPRetailDeviceStatus;
@class PPRetailPayer;
@class PPRetailTransactionRecord;
@class PPRetailVaultRecord;
@class PPRetailAuthorizedTransaction;
@class PPRetailPage;
@class PPRetailDiscoveredCardReader;
@class PPRetailCardReaderScanAndDiscoverOptions;
@class PPRetailDeviceConnectorOptions;
@class PPRetailSimulationOptions;


/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * Information about a card presented to the PayPal Retail SDK
 */
@interface PPRetailCard : PPRetailObject

    /**
    * The process used by consumer to present the card @readonly
    */
    @property (nonatomic,assign,readonly) PPRetailFormFactor formFactor;
    /**
    * The presentation failed and this event is simply a notice of failure @readonly
    */
    @property (nonatomic,assign,readonly) BOOL failed;
    /**
    * The device used to read the card @readonly
    */
    @property (nonatomic,strong,nullable,readonly) PPRetailPaymentDevice* reader;
    /**
    * A server-compatible formatted time for when this
 * presentation occurred @readonly
    */
    @property (nonatomic,strong,nullable,readonly) NSString* timestamp;
    /**
    * Last four digits of the presented card @readonly
    */
    @property (nonatomic,strong,nullable,readonly) NSString* lastFourDigits;
    /**
    * First four digits of the presented card @readonly
    */
    @property (nonatomic,strong,nullable,readonly) NSString* firstFourDigits;
    /**
    * Issuer of the card that was presented to the SDK @readonly
    */
    @property (nonatomic,assign,readonly) PPRetailCardIssuer cardIssuer;
    /**
    * Name of consumer who owns the presented card @readonly
    */
    @property (nonatomic,strong,nullable,readonly) NSString* cardholderName;
    /**
    * Indicates if pin was entered after presenting the card @readonly
    */
    @property (nonatomic,assign,readonly) BOOL pinPresent;
    /**
    * Indicates if a contactless MSD card was presented @readonly
    */
    @property (nonatomic,assign,readonly) BOOL isContactlessMSD;
    /**
    * true if given the card and the context in which it
 * was presented, a signature is required. @readonly
    */
    @property (nonatomic,assign,readonly) BOOL isSignatureRequired;





    /**
     * Indicates if the presented card is EMV
     */
    -(BOOL)isEmv;




@end
