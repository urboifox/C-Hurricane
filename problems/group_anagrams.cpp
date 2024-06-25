#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>
#include <algorithm>

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
    std::unordered_map<std::string, std::vector<std::string>> mp; // sorted : [ strings ]
    std::vector<std::vector<std::string>> result;

    for (std::string s : strs) {
        std::string sortedS = s;
        std::sort(sortedS.begin(), sortedS.end());
        bool found = mp.count(sortedS) > 0;

        if (found) {
            mp[sortedS].push_back(s);
        } else {
            mp[sortedS] = {s};
        }
    }

    for (auto i = mp.begin(); i != mp.end(); i++) {
        result.push_back(i->second);
    }

    return result;
}

int main() {
    std::vector<std::string> strings = {"eat","tea","tan","ate","nat","bat"};
    std::vector<std::vector<std::string>> results = groupAnagrams(strings);


    for (std::vector<std::string> i : results) {
        for (std::string s : i) {
            std::cout << s << std::endl;
        }
        std::cout << "======" << std::endl;
    }

    return 0;
}
