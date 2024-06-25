// cstring.h

#ifndef CSTRING_H
#define CSTRING_H

#include <iostream>
#include <string>
#include <unordered_map>

std::string strRepeat(std::string str, int repeat_count = 2, std::string seperator = "", bool show_last = false);
std::string zFill(std::string str, int width, std::string fill = "#");
std::string strReverse(std::string str);
std::string strToLower(std::string str);
std::string strToUpper(std::string str);
std::string swapCase(std::string str);
std::string trim(std::string str, std::string option = "both", char ch = ' ');
std::string substring(std::string str, int start = 0, size_t end = std::string::npos);
std::string clearString(std::string str, bool keepnums = true);
std::unordered_map<std::string, std::string> parseString(std::string str);
int wordCount(std::string str, char seperator = ' ');
bool isTitle(std::string str);
std::string strSlice(std::string str, int start, int end, int step = 1, bool reverse = false);
bool strStartsWith(std::string str, std::string key);

#endif // CSTRING_H
