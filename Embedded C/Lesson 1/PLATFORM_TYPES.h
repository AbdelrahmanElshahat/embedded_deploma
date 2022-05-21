#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

typedef unsigned char Bool;

typedef unsigned char uint8_t;
typedef unsigned int  uint32_t;
typedef unsigned short uint16_t;

typedef  double sint64_t;
typedef signed int sint32_t;
typedef signed short sint16_t;
typedef signed char sint8_t;
typedef float sfint_32;

typedef volatile uint8_t vuint8_t;
typedef volatile uint16_t vuint16_t;
typedef volatile uint32_t vuint32_t;

typedef volatile sint64_t vsint64_t;
typedef volatile sint32_t vsint32_t;
typedef volatile sfint32_t vsfint32_t;
typedef volatile sint8_t vsint8_t;
typedef volatile sint16_t vsint16_t;

#define NULL (void *)0

#endif // PLATFORM_TYPES_H_
