#include <iostream>

typedef float REAL;

int main(void)
{
  std::cout.precision(7);
  std::cout.setf(std::ios::scientific);
  REAL under = 1.0;
  REAL over = 1.0;
  int NMAX = 127;
  int n = 0;
  while (n <= NMAX) {
    under /= 2.0;
    over *= 2.0;
    std::cout << n << "\t" << under << "\t" << over << "\n";
    ++n;
  }
  
  return 0;
}
