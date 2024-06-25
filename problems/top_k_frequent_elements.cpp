#include <vector>
#include <unordered_map>
#include <iostream>

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> mp; // n : count
    std::vector<int> result;
    
    for (int n : nums) {
        bool found = mp.count(n) > 0;
        if (found) {
            mp[n] += 1;
        } else {
            mp.insert({ n, 1 });
        }
    }

    for (int i = 0; i < k; i++) {
        std::unordered_map<int, int>::iterator mostFrequent = mp.begin();
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second > mostFrequent->second) {
                mostFrequent = it;
            }
        }
        result.push_back(mostFrequent->first);
        mp.erase(mostFrequent->first);
    }

    return result;
}

int main() {
    std::vector<int> numbers = { 1, 1, 1, 2, 2, 3 };
    topKFrequent(numbers, 2);
    return 0;
}