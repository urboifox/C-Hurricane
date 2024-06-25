#include <string>
#include "headers/cstring.h"

std::string substring(std::string str, int start, int end) {
    if (end == std::string::npos) {
        end = str.length();
    }

    std::string result = "";

    for (int i = start; i < end; i++) {
        result += str.at(i);
    }

    return result;
}