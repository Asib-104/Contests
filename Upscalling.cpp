#include <iostream>
using namespace std;




int main() {
    int t;
    cin >> t;
    int test_cases[t];
    for (int i = 0; i < t; i++) {
        cin >> test_cases[i];
    }
   
    for (int k = 0; k < t; k++) {
        int n = test_cases[k];
        for (int i = 0; i < 2 * n; i++) {
            for (int j = 0; j < 2 * n; j++) {
                if ((i / 2 + j / 2) % 2 == 0)
                    cout << "#";
                else
                    cout << ".";
            }
            cout << endl;
        }
    }



    return 0;
}
