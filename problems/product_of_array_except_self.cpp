#include <vector>
#include <iostream>

/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.
*/

std::vector<int> productExceptSelf(std::vector<int>& nums) {
    std::vector<int> result;

    for (int i = 0, pre = 1; i < nums.size(); i++) {
        result.push_back(pre);
        pre *= nums.at(i);
    }

    for (int i = nums.size(), post = 1; i > 0; i--) {
        result[i] *= post;
        post *= nums.at(i);
    }

    return result;
}

int main() {
    return 0;
}