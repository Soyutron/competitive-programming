#include <cmath>
#include <iostream>

int main() {
    int N, T, A;
    std::cin >> N >> T >> A;
    int remain = N - T - A;
    int diff = std::abs(T - A);
    if (remain <= diff) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}