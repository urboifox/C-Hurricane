#include <string>
#include "headers/cstring.h"

/**
 * Convert a string to lowercase
 * 
 * @param str the string to convert
 * 
 * @return lowercase string
 */
std::string strToLower(std::string str) {
    std::string result = "";

    for (int i = 0; i < str.length(); i++) {
        char current = str[i];

        if (current >= 'A' && current <= 'Z') {
            current += ('a' - 'A');
        }

        result += current;
    }

    return result;
}

/**
 * Convert a string to uppercase
 * 
 * @param str the string to convert
 * 
 * @return uppercase string
 */
std::string strToUpper(std::string str) {
    std::string result = "";

    for (int i = 0; i < str.length(); i++) {
        char current = str[i];

        if (current >= 'a' && current <= 'z') {
            current -= ('a' - 'A');
        }

        result += current;
    }

    return result;
}

std::string swapCase(std::string str) {
    std::string result = "";

    for (int i = 0; i < str.length(); i++) {
        char current = str[i];

        if (current >= 'a' && current <= 'z') {
            current -= ('a' - 'A');
        } else if (current >= 'A' && current <= 'Z') {
            current += ('a' - 'A');
        }

        result += current;
    }

    return result;
}
