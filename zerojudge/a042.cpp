#include <iostream>
using namespace std;

int main () {
    int n;
    while(cin >> n) {
        // n*n - (n-2)
        cout << n*n-n+2 << endl;
    }
    
    return 0;
}
