#include <iostream>
using namespace std;

int main () {
    int t;
    int a, b, c;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> a >> b >> c;
        
        cout << "Case " << i+1 << ": ";
        if (a<=20 && b<=20 && c<=20) {
            cout << "good" << endl;
        } else {
            cout << "bad" << endl;
        }
    }
    return 0;
}
