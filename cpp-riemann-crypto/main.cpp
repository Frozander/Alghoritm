#include <cmath>
#include <iostream>
#include <chrono>
#include <random>

int main(int argc, char const *argv[])
{

    unsigned initial_seed; // Find a better way for seeding than current time since epoch
    initial_seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::mt19937_64 mersenne_twister_rng (initial_seed);

    std::uniform_real_distribution<double> distribution(-1.0, 1.0);

    
    return 0;
}
