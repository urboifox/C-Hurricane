#include "headers/carray.h"
#include <vector>

bool includes(std::vector<int> arr, int needle) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr.at(i) == needle) {
            return true;
        }
    }

    return false;
}
