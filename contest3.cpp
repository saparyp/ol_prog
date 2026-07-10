#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r;
    cin >> l >> r;

    vector<int> dp(r + 1, 0);
    dp[1] = 1;

    for (int i = 1; i <= r; ++i) {
        if (dp[i] == 0) continue;
        for (int j = i * 2; j <= r; j += i) { 
        // каждый из dp[i] способов можно дополнить прыжком в j
            dp[j] += dp[i];
            if (dp[j] >= MOD) {
                dp[j] -= MOD; // числа не превышают 2*MOD, используем вычитание
            }
        }
    }

    long long ans = 0;
    for (int i = l; i <= r; ++i) {
        ans += dp[i];
        if (ans >= MOD) {
            ans -= MOD;
        }
    }

    cout << ans << "\n";

    return 0;
}
