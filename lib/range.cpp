#include <vector>

/**
 *  Create a vector range of numbers from a given start and end
 *
 *  @param start the start of the numbers
 *  @param end {optional} the end of the numbers
 *
 */
std::vector<int> range(int start, int end) {
    std::vector<int> result;
    int startLoop;
    int endLoop;

    if (end == -1 || end > start) {
        startLoop = 0;
        endLoop = start;
    } else {
        startLoop = start;
        endLoop = end;
    }

    for (int i = 0; startLoop <= endLoop; startLoop++, i++) {
       result[0] = startLoop;
    }

    return result;
}
