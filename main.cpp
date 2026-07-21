#include <iostream>
#include <string>
#include <vector>

int main() {
    int N, X;
    std::cin >> N >> X;
    for (int i = 0; i < N; ++i) {
        int a;
        std::cin >> a;
        if (a < X) {
            X = a;
            std::cout << 1 << "\n";
        } else {
            std::cout << 0 << "\n";
        }
    }
}