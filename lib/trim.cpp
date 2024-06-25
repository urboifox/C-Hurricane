#include <string>
#include <algorithm>
#include <stdexcept>
#include "headers/cstring.h"

/**
 * Remove whitespaces (or other characters) from the end and the start of a string
 * 
 * @param str the string to trim
 * @param option specifies which side(s) to trim: "both", "left", or "right"
 * @param ch the character to trim (default is space)
 * 
 * @return the trimmed string
 * 
 * @throws std::invalid_argument if the option is not "both", "left", or "right"
 */
std::string trim(std::string str, std::string option, char ch) {
    if (option != "both" && option != "left" && option != "right") {
        throw std::invalid_argument("Option is not valid, valid options are 'left', 'right', and 'both'");
    }
    
    std::string result = str;
    int len = str.length();
    int startCount = 0;
    int endCount = 0;

    for (int i = 0; i < len; i++) {
        if (str.at(i) != ch) {
            break;   
        }
        startCount++;
    }

    for (int i = len - 1; i > 0; i--) {
        if (str.at(i) != ch) {
            break;
        }
        endCount++;
    }

    if (option == "both") {
        result = str.substr(startCount, len - (startCount + endCount));
    } else if (option == "left") {
        result = str.substr(startCount);
    } else if (option == "right") {
        result = str.substr(0, len - endCount);
    }
    
    return result;
}