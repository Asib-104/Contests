#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> left_coins(n);
        vector<int> right_coins(m);

        for (int i = 0; i < n; ++i) {
            cin >> left_coins[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> right_coins[i]; 
        }

        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (left_coins[i] + right_coins[j] <= k) {
                    count++;
                }
            }
        }

        cout << count << endl; 
    }

    return 0;
}

