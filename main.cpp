#include <iostream>

int main() {
    int R;
    std::cin >> R;
    if (1 <= R && R <= 99) {
        std::cout << 100 - R << "\n";
    } else if (100 <= R && R <= 199) {
        std::cout << 200 - R << "\n";
    }
}