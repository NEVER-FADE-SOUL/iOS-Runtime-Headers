/* Generated by RuntimeBrowser
   Image: /usr/lib/libQLCharts.dylib
 */

@interface OIPieChartRenderer : NSObject {
    struct __OIChart { } * _chart;
    <OIPieSliceRenderer> * _sliceRenderer;
}

@property struct __OIChart { }*chart;
@property (retain) <OIPieSliceRenderer> *sliceRenderer;

- (struct __OIChart { }*)chart;
- (void)dealloc;
- (id)initWithChart:(struct __OIChart { }*)arg1;
- (id)initWithChart:(struct __OIChart { }*)arg1 sliceRenderer:(id)arg2;
- (void)renderThreeDimensional:(BOOL)arg1 pieFromSeriesArray:(struct __CFArray { }*)arg2;
- (void)setChart:(struct __OIChart { }*)arg1;
- (void)setSliceRenderer:(id)arg1;
- (id)sliceRenderer;

@end
