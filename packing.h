#ifndef _PACKINGH_
#define _PACKINGH_

#include <dctQuantConversions.h>
#include <array2.h>
#include <bitpack.h>
#include <a2plain.h>
#include <a2methods.h>
#include <assert.h>
#define A2 A2Methods_Array2

typedef struct dequantizedValues *dequantizedValues;

// Hold values after reversing quantization
struct dequantizedValues {
    unsigned a;
    signed b,c,d;
    unsigned avgPb, avgPr;
};

A2 pack(A2 quantMap);
extern void putWord(A2 quantMap, int height, int width);
extern A2 getProcessedWord(FILE *input, unsigned height, unsigned width);
extern A2 unpack(A2 wordMap);
#undef A2
#endif
