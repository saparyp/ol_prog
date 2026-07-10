#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int pair_cost = min(b, 2 * a); // находим более выгодную цену за пару
        int ans = (n / 2) * pair_cost + (n % 2) * a;

        cout << ans << "\n";
    }

    return 0;
}
