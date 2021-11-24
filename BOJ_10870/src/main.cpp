#include <iostream>

using namespace std;

using ll = long long;

ll solve(int n) {
    if (0 == n)
        return 0;

    if (1 == n)
        return 1;

    return solve(n - 1) + solve(n - 2);
}

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    cin >> n;

    cout << solve(n);

    return 0;
}