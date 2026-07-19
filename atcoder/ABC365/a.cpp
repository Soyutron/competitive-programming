#include <iostream>

int main() {
    int Y;
    std::cin >> Y;
    if (Y % 4 != 0) {
        std::cout << "365\n";
        return 0;
    }
    if (Y % 100 != 0) {
        std::cout << "366\n";
        return 0;
    }
    if (Y % 400 != 0) {
        std::cout << "365\n";
        return 0;
    }
    if (Y % 400 == 0) {
        std::cout << "366\n";
        return 0;
    }
}