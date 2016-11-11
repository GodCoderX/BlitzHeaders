/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TAGTrackingTag.h"

@class NSNumberFormatter, TAGDataLayer, GAILoggerImpl, NSRegularExpression, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface TAGUniversalAnalytics : TAGTrackingTag {
	GAILoggerImpl* _logger;
	TAGDataLayer* _dataLayer;
	NSSet* _turnOffAnonymizeIpValues;
	NSNumberFormatter* _numberFormatter;
	NSDictionary* _defaultTransactionMap;
	NSDictionary* _defaultItemMap;
	NSRegularExpression* _productDimensionRegex;
	NSRegularExpression* _productMetricRegex;
}
@property(retain, nonatomic) NSRegularExpression* productMetricRegex;
@property(retain, nonatomic) NSRegularExpression* productDimensionRegex;
@property(retain, nonatomic) NSDictionary* defaultItemMap;
@property(retain, nonatomic) NSDictionary* defaultTransactionMap;
@property(retain, nonatomic) NSNumberFormatter* numberFormatter;
@property(retain, nonatomic) NSSet* turnOffAnonymizeIpValues;
@property(retain, nonatomic) TAGDataLayer* dataLayer;
@property(retain, nonatomic) GAILoggerImpl* logger;
+(id)functionId;
-(void).cxx_destruct;
-(void)sendEnhancedEcommerce:(id)ecommerce withTracker:(id)tracker;
-(id)NSNumberFromObject:(id)object;
-(id)actionDataFromDataLayerDictionary:(id)dataLayerDictionary;
-(id)productFromDataLayerDictionary:(id)dataLayerDictionary;
-(id)promotionFromDataLayerDictionary:(id)dataLayerDictionary;
-(id)transactionItemFieldsForTag:(id)tag;
-(id)transactionFieldsForTag:(id)tag;
-(void)sendTransaction:(id)transaction withTracker:(id)tracker;
-(void)addParam:(id)param value:(id)value toParams:(id)params;
-(id)getArrayOfDictionariesFromObject:(id)object;
-(void)setLoggerIfNecessary;
-(void)closeTracker:(id)tracker;
-(id)openTracker;
-(id)gaFieldsWithAnalyticsFields:(id)analyticsFields;
-(id)valueToStringMap:(id)stringMap;
-(id)dataLayerString:(id)string;
-(void)evaluateTrackingTag:(id)tag;
-(BOOL)checkBooleanPropertyForTag:(id)tag key:(id)key;
-(id)initWithDataLayer:(id)dataLayer;
@end

