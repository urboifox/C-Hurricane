#include <iostream>

bool judgeSquareSum(int c);

int main() {
    int n;
    std::cout << "What's n? ";
    std::cin >> n; std::cin.ignore(); 
    std::cout << judgeSquareSum(n) << std::endl;
    return 0;
}

bool judgeSquareSum(int c) {
        int a = 0;
        int b = 0;
        bool toggle = true;
        
        while (true) {
            int eq = a * a + b * b;
            std::cout << "a: " << a << " b: " << b << " eq: " << eq << " toggle: " << toggle << std::endl;
            if (eq == c) {
                return true;
            } else if (eq > c) {
                return false;
            }
            
            if (toggle) {
                a += 1;
            } else {
                b += 1;
            }
            toggle = !toggle;
        }
}