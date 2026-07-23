#include <iostream>
#include <string>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        int a, b;
        std::string s;
        std::cin >> a >> b >> s;
        if (s == "keep") {
            ans += b - a;
        }
    }
    std::cout << ans << "\n";
}