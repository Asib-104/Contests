#include <iostream>
#include <string>
using namespace std;

int countDeletions(string& s) {
    int deletions = 0;
    int n = s.length();

    for (int i = 0; i < n - 2; ++i) {
        if ((s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e') ||
            (s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p')) {
            ++deletions;
            i += 2;
        }
    }

    return deletions;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << countDeletions(s) << endl;
    }
    return 0;
}
