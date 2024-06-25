#include "headers/cstring.h"
#include <string>
#include <vector>

std::string join(std::vector<std::string> strs, std::string seperator) {
    std::string result;

    for (int i = 0, len = strs.size(); i < len; i++) {
        result += strs[i];

        if (i != len - 1) {
            result += seperator;
        }
    }

    return result;
}
