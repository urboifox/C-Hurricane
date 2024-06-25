#include "headers/cstring.h"
#include <string>

/**
 *  Check if a string starts with a specific text
 *
 *  @param str the main string
 *  @param key they key string to check if the main string starts with
 *
 *  @return true if the main string starts with they key, false otherwise
 */
bool strStartsWith(std::string str, std::string key) {
    if (str.length() < key.length()) {
        return false;
    }

    for (int i = 0; i < key.length(); i++) {
        if (str[i] != key[i]) {
            return false;
        }
    }

    return true;
}
