#include <iostream>
using namespace std;

int main() {
    int k;
    int a, b;
    cin >> k;
    while(k--) {
        cin >> a >> b;

        if (a > b) {
            cout << ">\n";
        } else if (a < b) {
            cout << "<\n";
        } else {
            cout << "=\n";
        }
    }
    return 0;
}
