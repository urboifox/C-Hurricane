#include <string>
#include "headers/cstring.h"

/**
 * Clear special characters from a string 
 *
 * @param str the string to clear
 * @param keepnums wether to keep the numbers or no
 *
 * @return clear string without special characters, only letters and numbers and _
 */
std::string clearString(std::string str, bool keepnums) {
    std::string result;

    for (int i = 0, len = str.length(); i < len; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'A' && c == '_') {
            result += c;
        } else if (keepnums && c >= '0' && c <= '9') {
            result += c;
        }
    }

    return result;
}
