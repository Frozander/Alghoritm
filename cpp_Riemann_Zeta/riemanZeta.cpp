#include <cmath>
#include <iostream>
#include <chrono>
#include <random>


int main()
{

    unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();
    

    std::mt19937 g1 (seed1);

    std::uniform_real_distribution<double> dist(-1.0, 1.0);

    double input = dist(g1);

    std::cout << "ζ(" << input << ") = " << std::riemann_zetal(input);
    return 0;
}
