#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        // перебор всех распределений
        long long max_product = 0;
        for (int i = 0; i <= 5; ++i) {
            for (int j = 0; j <= 5 - i; ++j) {
                int k = 5 - i - j; // k + i + j всегда равно 5
                long long product = (long long)(a + i) * (b + j) * (c + k);
                max_product = max(max_product, product); // выбираем наибольшую сумму
            }
        }

        cout << max_product << "\n";
    }

    return 0;
}
