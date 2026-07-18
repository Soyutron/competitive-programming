#include <iostream>

int main() {
    int P, Q, X, Y;
    std::cin >> P >> Q >> X >> Y;
    if ((P <= X && X <= (P + 99)) && (Q <= Y && Y <= (Q + 99))) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}