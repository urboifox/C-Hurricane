#include <string>

/**
 *  Check if a string is in title case
 *  @param str the string to check
 *  @return true if the string is title, false otherwise
 */
bool isTitle(std::string str) {
    bool status = true;

    for (int i = 0, len = str.length(); i < len; i++) {
        char c = str[i];
        char next = str[i + 1];
        if (i == 0 && !(c >= 'A' && c <= 'Z')) {
            status = false;
        }
        if (c == ' ' && !(next >= 'A' && next <= 'Z')) {
            status = false;
        }
    }

    return status;
}
