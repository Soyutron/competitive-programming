#include <iostream>

int main() {
    int M, D;
    std::cin >> M >> D;
    if ((M == 1 && D == 7) || (M == 3 && D == 3) || (M == 5 && D == 5) || (M == 7 && D == 7) ||
        (M == 9 && D == 9)) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}