/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetAvailableRestaurantReservationBookingsIntent : INIntent <INGetAvailableRestaurantReservationBookingsIntentExport, NSCopying> {
    NSDate * _earliestBookingDateForResults;
    NSDate * _latestBookingDateForResults;
    NSNumber * _maximumNumberOfResults;
    unsigned int  _partySize;
    NSDate * _preferredBookingDate;
    NSDateComponents * _preferredBookingDateComponents;
    INRestaurant * _restaurant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *earliestBookingDateForResults;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSDate *latestBookingDateForResults;
@property (nonatomic, copy) NSNumber *maximumNumberOfResults;
@property (nonatomic) unsigned int partySize;
@property (nonatomic, retain) NSDate *preferredBookingDate;
@property (nonatomic, copy) NSDateComponents *preferredBookingDateComponents;
@property (nonatomic, copy) INRestaurant *restaurant;
@property (readonly) Class superclass;

+ (id)intentDescription;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)earliestBookingDateForResults;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)latestBookingDateForResults;
- (id)maximumNumberOfResults;
- (unsigned int)partySize;
- (id)preferredBookingDate;
- (id)preferredBookingDateComponents;
- (id)restaurant;
- (void)setEarliestBookingDateForResults:(id)arg1;
- (void)setLatestBookingDateForResults:(id)arg1;
- (void)setMaximumNumberOfResults:(id)arg1;
- (void)setPartySize:(unsigned int)arg1;
- (void)setPreferredBookingDate:(id)arg1;
- (void)setPreferredBookingDateComponents:(id)arg1;
- (void)setRestaurant:(id)arg1;

@end
