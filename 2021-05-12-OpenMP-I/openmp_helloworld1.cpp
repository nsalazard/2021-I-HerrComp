#include <cstdio>

int main(void)
{
    double x = 9.0;
#pragma omp parallel
    {// se generan los threads
        std::printf("Hello, world.\n");
    } // mueren los threads
    
    return 0;
}
