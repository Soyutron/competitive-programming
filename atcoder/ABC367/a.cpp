#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    if (B <= C) {
        if (A < B || C <= A) {
            std::cout << "Yes\n";
            return 0;
        }
    } else {
        if (C <= A && A < B) {
            std::cout << "Yes\n";
            return 0;
        }
    }
    std::cout << "No\n";
}