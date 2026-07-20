#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    int diff = A - B;
    if (diff == 0) {
        std::cout << "1\n";
    } else if (diff % 2 == 0) {
        std::cout << "3\n";
    } else {
        std::cout << "2\n";
    }
}