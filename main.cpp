#include <iostream>
#include <string>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    while (1 < N) {
        std::cout << N << ",";
        N--;
    }
    std::cout << 1 << "\n";
}