#include "factorial.h"

unsigned int Factorial( int number ) {
    if (number < 0) return 0;
    return number <= 1 ? 1 : Factorial(number-1)*number;
}
