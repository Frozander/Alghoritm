#include <iostream>
#include <chrono>
#include <random>
#include <string>

int main(int argc, char const *argv[])
{

    std::string str;
    unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();

    std::cout << "Please, enter a seed (optional): ";
    std::getline(std::cin, str);
    
    if (!str.empty()) {
        
        std::seed_seq seed2 (str.begin(), str.end());
        std::mt19937 g1 (seed2);
        std::cout << "Random Number: " << g1() <<std::endl;

    }
    else
    {

        std::mt19937 g1 (seed1);
        std::cout << "Random Number: " << g1() <<std::endl;
    }

    return 0;

}
