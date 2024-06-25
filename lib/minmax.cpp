#include "headers/cnumber.h"
#include <vector>

/**
 * Get the minimum integer from a vector
 * 
 * @param numbers `vector` of `int` containing all numbers
 * 
 * @return the minimum number in the vector
 */
int minimum_int_from(std::vector<int> numbers) {
    int result = numbers.at(0);

    for (int i = 0; i < numbers.size(); i++) {
        int current = numbers.at(i);
        if (current < result) {
            result = current;
        }
    }

    return result;
}

/**
 * Get the maximum integer from a vector
 * 
 * @param numbers `vector` of `int` containing all numbers
 * 
 * @return the maximum number in the vector
 */
int maximum_int_from(std::vector<int> numbers) {
    int result = numbers.at(0);

    for (int i = 0; i < numbers.size(); i++) {
        int current = numbers.at(i);
        if (current > result) {
            result = current;
        }
    }

    return result;
}
