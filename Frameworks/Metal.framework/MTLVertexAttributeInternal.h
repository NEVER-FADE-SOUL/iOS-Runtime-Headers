/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexAttributeInternal : MTLVertexAttribute {
    unsigned int  _attributeIndex;
    unsigned int  _attributeType;
    unsigned char  _flags;
    NSString * _name;
}

- (unsigned int)attributeIndex;
- (unsigned int)attributeType;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 attributeIndex:(unsigned int)arg2 attributeType:(unsigned int)arg3 flags:(struct MTLAttributeFlags { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 5; } x_1_1_1; unsigned char x_1_1_2; } x1; })arg4;
- (BOOL)isActive;
- (BOOL)isPatchControlPointData;
- (BOOL)isPatchData;
- (id)name;
- (void)setAttributeType:(unsigned int)arg1;

@end
