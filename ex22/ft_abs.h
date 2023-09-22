#pragma once

#include <math.h>

#define ABS(Value) do\
{\
    typeof(Value) tmp = Value;\
    if (tmp < 0)\
        tmp = -tmp;\
    tmp;\
} while (0)

#define ABS2(Value) sqrt(Value * Value)

#define ABS3(Value) (Value < 0) * -Value + (Value >= 0) * Value