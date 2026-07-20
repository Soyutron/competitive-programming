#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string S;
    std::cin >> S;
    if (S.length() % 5 == 0) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}