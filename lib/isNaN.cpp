#include <string>
#include "headers/cnumber.h"

/**
 * Check if a string is not a number
 * 
 * @param str the string to check
 * 
 * @return true if the string is not a number, false otherwise
 */
bool isNaN(std::string str) {
    for (char c : str) {
        if (c < '0' || c > '9') {
            return true;
        }
    }

    return false;
}