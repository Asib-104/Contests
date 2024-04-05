#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string time;
        cin >> time;
        int hh = stoi(time.substr(0, 2));
        string mm = time.substr(3, 2);
        if(hh == 0) {
            cout << "12:" << mm << " AM" << endl;
        } else if(hh < 12) {
            cout << (hh < 10 ? "0" : "") << hh << ":" << mm << " AM" << endl;
        } else if(hh == 12) {
            cout << "12:" << mm << " PM" << endl;
        } else {
            hh -= 12;
            cout << (hh < 10 ? "0" : "") << hh << ":" << mm << " PM" << endl;
        }
    }
    return 0;
}
