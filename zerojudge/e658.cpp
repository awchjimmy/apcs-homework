#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int t;
    long long int n;
    int k;
    cin >> t;

    while(t--) {
        cin >> n;
        k = (-1 + sqrt(1+8*n)) / 2;
        cout << k << endl;
    }
    return 0;
}
