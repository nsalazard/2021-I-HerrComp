#include <iostream>
#include <cstdlib>
#include <cmath>

int main(int argc, char *argv[]) {

    int a = std::atoi(argv[1]);
    double b;
    int c = 1.0/b;
    double d = -1.2345;

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << d << "\n";

    double data[100] = {0};
    int ii = 1;
    for (auto & val : data) {
        val = std::sin(ii);
        ii++;
    }
    double e = 1.988765;
    std::cout << e << "\n";
    std::cout << data[-1] << "\n";
    std::cout << data[100] << "\n";

    return 0;
}
