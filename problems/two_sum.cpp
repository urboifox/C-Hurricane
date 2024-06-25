#include <vector>
#include <map>

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    std::map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int n = nums.at(i);
        int diff = target - n;
        bool diff_exist = mp.count(diff) > 0;

        if (diff_exist)
        {
            return {mp[diff], i};
        }

        mp[n] = i;
    }

    return {};
}

int main() {
    std::vector<int> values = { 2, 7, 11, 15 };
    twoSum(values, 18);
    return 0;
}