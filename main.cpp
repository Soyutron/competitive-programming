#include <iostream>

// 1 2 3 4 5
// 1 1 2 2 3

int main() {
    int N, M;
    std::cin >> N >> M;
    bool isA = (N % 2 == 0 && (N / 2 >= M));
    bool isB = (N % 2 == 1 && ((N / 2) + 1 >= M));

    if (isA || isB) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}