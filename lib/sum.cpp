#include "headers/cnumber.h"
#include <vector>

/**
 * Sum all numbers in a vector
 * 
 * @param numbers vector of numbers to sum
 * 
 * @return the sum of all numbers in a vector
 */
int sum(std::vector<int> numbers) {
    int result = 0;

    for (int i = 0; i < numbers.size(); i++) {
        result += numbers.at(i);
    }

    return result;
}