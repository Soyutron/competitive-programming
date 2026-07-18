#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    int sum = 6;
    if (A == B) {
        std::cout << -1 << "\n";
    } else {
        std::cout << sum - A - B << "\n";
    }
}