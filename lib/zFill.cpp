#include <string>
#include "headers/cstring.h"

/**
 * Fill a string to be a specific length.
 * 
 * @param str the string to fill
 * @param width required width of the string
 * @param fill the fill character
 * 
 * @return string filled with the `fill` character.
 */
std::string zFill(std::string str, int width, std::string fill) {
    std::string result = "";
    int str_len = str.length();

    if (str_len >= width) {
        return str;
    }

    for (int i = 0; i < width - str_len; i++) {
        result += fill;
    }
    result += str;

    return result;
}