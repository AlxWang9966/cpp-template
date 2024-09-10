#include <iostream>
#include <vector>
#include "src/lib/cpplib.h"

int main() {
    CPPLib cpplib;
    std::vector<int> inputs = {1, 2, 3, 4, 5};

    int max = cpplib.FindMax(inputs);
    double average = cpplib.FindAverage(inputs);

    std::cout << "Max: " << max << std::endl;
    std::cout << "Average: " << average << std::endl;

    return 0;
}