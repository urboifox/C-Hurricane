// CARRAY_H

#ifndef CARRAY_H
#define CARRAY_H

#include <vector>
#include <string>

bool includes(std::vector<int> arr, int needle);
std::string join(std::vector<std::string> strs, std::string seperator = " ");
std::vector<int> range(int start, int end = -1);

#endif
