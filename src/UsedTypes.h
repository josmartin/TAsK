#ifndef USED_TYPES
#define USED_TYPES

#include <vector>

/** This type defines what precision must be used for all floating point 
	calculations (double or long double). It can be changed in Makefile
	by defining USE_EXTENDED_PRECISION (long double) or not (double).
*/
#ifdef USE_EXTENDED_PRECISION	
  typedef long double FPType;
  #define STR2FPTYPE(x, y) (strtold(x, y))
#else
  typedef double FPType;
  #define STR2FPTYPE(x, y) (strtod(x, y))
#endif

typedef int TollType; /**< type for toll values.*/

typedef std::vector<TollType> TollContainerType; /**< type of container with tolls.*/

#endif
