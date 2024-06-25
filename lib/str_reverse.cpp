#include <string>
#include "headers/cstring.h"

/**
 * Reverse a given string.
 * 
 * @param str the string to reverse
 * 
 * @return reversed version of the given string.
 */
std::string strReverse(std::string str) {
    std::string result = "";
    int str_len = str.length();

    for (int i = str_len - 1; i >= 0; --i) {
        result += str[i];
    }

    return result;
}