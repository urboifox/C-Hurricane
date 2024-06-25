#include <string>
#include "headers/cstring.h"

/**
 * Count words in a string
 *
 * @param str the string to count words in
 * @param seperator the seperator which to count words depending on
 *
 * @return number of words in a string based on the seperator
 */
int wordCount(std::string str, char seperator) {
    int result = 0;
    bool inWord = false;
    std::string normalizedStr = trim(str);

    for (int i = 0, len = normalizedStr.length(); i < len; i++) {
        char c = normalizedStr[i];

        if (c == seperator && inWord) {
            result += 1;
            inWord = false;
        } else {
            inWord = true;
        }

        if (inWord) {
            result += 1;
        }
    }

    return result;
}
