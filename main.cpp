#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string S;
    std::cin >> S;
    std::cout << (S[0] == S[S.length() - 1] ? "Yes\n" : "No\n");
}