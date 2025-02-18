#ifndef SYSCONV_H
#define SYSCONV_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include <limits.h>

#define BIN2DEC(...) binary_to_decimal(NULL, __VA_ARGS__, INT_MAX)

int binary_to_decimal(char* binary, ...);

#endif
