#include <iostream>
// 361
int main() {
    int D, F;
    std::cin >> D >> F;
    int a = D - F;
    int answer = ((a / 7) + 1) * 7 - a;
    std::cout << answer << "\n";
}