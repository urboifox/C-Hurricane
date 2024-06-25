#include <iostream>
#include <vector>
#include <algorithm>

int repeats(std::vector<int> v) {
    int result = 0;

    for (int n : v) {
        bool is_odd = std::count(v.begin(), v.end(), n) % 2 != 0;
        if (is_odd) {
            result += n;
        }
    }

    return result;
}

int main() {
    std::cout << repeats({4,5,7,5,4,8}) << std::endl; // 15
    return 0;
}
