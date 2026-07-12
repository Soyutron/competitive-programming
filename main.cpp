#include <iostream>

int main() {
    int L, R;
    std::cin >> L >> R;
    bool isInvalid = (L == 0 && R == 0) || (L == 1 && R == 1);
    if (isInvalid) {
        std::cout << "Invalid\n";
    } else if (L == 1) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}