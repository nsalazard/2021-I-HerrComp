#include <iostream>
#include <cmath>

typedef float REAL;

int main(int argc, char **argv)
{
  std::cout.precision(8); std::cout.setf(std::ios::scientific);
  REAL a = 1.0/4, b=1, c = 1;

  for (int n = 0; n < 20; n++){
    REAL x1 = (-b + std::sqrt(b*b - 4*a*c))/(2*a);
    REAL x2 = (-b - std::sqrt(b*b - 4*a*c))/(2*a);
    REAL x3 = (-2*c)/(b + std::sqrt(b*b - 4*a*c));
    REAL x4 = (-2*c)/(b - std::sqrt(b*b - 4*a*c));
    std::cout << n
	      << "\t" << x1 << "\t" << x2
	      << "\t" << x3 << "\t" << x4
	      << "\n";
    c = c/10;
  }
  
  return 0;
}
