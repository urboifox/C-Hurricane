#include "headers/cstring.h"
#include <string>

/**
 *  Slice a string and return the slice
 *
 *  @param str the string to slice
 *  @param start start position to slice
 *  @param step steps of slicing
 *  @reverse wether to reverse the result or no
 *
 *  @return the slice of the string based on the params
 */
std::string strSlice(std::string str, int start, int end, int step,
                     bool reverse) {
  std::string result;

  for (int i = start; i < end; i += step) {
    if (reverse) {
      result = str[i] + result;
    } else {
      result += str[i];
    }
  }

  return result;
}
