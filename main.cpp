#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    bool isA = A == (B + C);
    bool isB = B == (A + C);
    bool isC = C == (A + B);
    bool isABC = (A == B) && (B == C);

    if (isA || isB || isC || isABC) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}