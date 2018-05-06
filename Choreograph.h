#pragma once
#ifndef CHOREOGRAPH_H
#define CHOREOGRAPH_H

#ifdef min
#define min_tmp min
#undef min
#endif

#ifdef max
#define max_tmp max
#undef max
#endif

#ifdef abs
#define abs_tmp abs
#undef abs
#endif

#include "lib/src/choreograph/Choreograph.h"

#ifdef min_tmp
#define min min_tmp
#endif

#ifdef max_tmp
#define max max_tmp
#endif

#ifdef abs_tmp
#define abs abs_tmp
#endif

#endif
