#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_mask = 1 << n;
    vector<int> dp(max_mask);
    int ans = 0;

    for (int mask = 1; mask < max_mask; ++mask) { // перебор всех масок
        int lsb = mask & -mask; // выделение младшего бита
        int idx = __builtin_ctz(lsb); // индекс = количество нулей после lsb
        dp[mask] = dp[mask ^ lsb] ^ a[idx]; // динамическое вычисление XOR
        
        if (__builtin_popcount(mask) == k) { // размер подмножества
            ans = max(ans, dp[mask]); 
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
