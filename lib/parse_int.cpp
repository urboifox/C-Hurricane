#include <string>
#include "headers/cnumber.h"

/**
 * Parse the first appearing integers in a string
 * 
 * @param str the string to parse integers from
 * 
 * @return the first sequence of integers in a string
 */
int parseInt(std::string str) {
    int result = 0;
    for (char c : str) {
        if (c >= '0' && c <= '9') {
            result = result * 10 + (c - '0');
        } else {
            break;
        }
    }    
    return result;
}