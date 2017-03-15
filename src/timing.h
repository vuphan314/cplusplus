#ifndef TIMING_H
#define TIMING_H

////////////////////////////////////////////////////////////

#include <chrono>

#include "vectors.h"

////////////////////////////////////////////////////////////

using Time = chrono::time_point<chrono::system_clock>;
using Duration = Float;

////////////////////////////////////////////////////////////

Float getRemainingDuration(Time startTime,
  Float currentPercentage); // hours

Duration getDuration(Time startTime); // seconds

Time getTime();

////////////////////////////////////////////////////////////

void testTiming();

////////////////////////////////////////////////////////////

#endif // TIMING_H