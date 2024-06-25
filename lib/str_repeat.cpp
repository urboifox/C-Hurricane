#include <string>
#include "headers/cstring.h"

/**
 * Repeat a string a specific number of times.
 * 
 * @param str the string to repeat
 * @param repeat_count number of times to repeat
 * @param seperator a string between each repeat of the main string
 * 
 * @return string repeated `repeat_count` times with a seperator between each repeat if specified
 */
std::string strRepeat(std::string str, int repeat_count, std::string seperator, bool show_last) {
    std::string result = "";

    for (int i = 0; i < repeat_count; i++) {
        result += str;
        if (i < repeat_count - 1) {
            result += seperator;
        }
    }

    if (show_last) {
        result += seperator;
    }

    return result;
}