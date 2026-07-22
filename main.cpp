#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string S;
    std::cin >> S;
    S[0] = std::tolower(S[0]);
    S.insert(0, "of");
    std::cout << S << "\n";
}