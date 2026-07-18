#include <iostream>

int main() {
    int X;
    std::cin >> X;
    if (3 <= X && X <= 18) {
        std::cout << "Yes\n ";
    } else {
        std::cout << "No\n ";
    }
}