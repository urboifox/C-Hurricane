#include <string>
#include <unordered_map>

/**
 * Parse key-value pairs from query string
 *
 * @param str query string
 * @return unordered map with key values parsed from the query string
 */
std::unordered_map<std::string, std::string> parseString(std::string str) {
    std::unordered_map<std::string, std::string> result;
    std::string key = "";
    std::string value = "";
    bool onKey = true; // key -> true - value -> false

    for (int i = 0, len = str.length(); i < len; i++) {
        char c = str[i];

        if (c == '=') {
            onKey = false;
            continue;
        }

        if (c == '&' || i == len - 1) {
            result.insert({ key, value });
            key = "";
            value = "";
            onKey = true;
            continue;
        }

        if (onKey) {
            key += c;
        } else {
            value += c;
        }
    }

    return result;
}
