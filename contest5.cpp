#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);
    dp[0] = 1; // 1 способ набрать сумму 0

    for (int j = 1; j <= n; ++j) {
        for (int i = n; i >= j; --i) { // каждая длина используется 1 раз
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }

    cout << dp[n] << "\n";

    return 0;
}
