#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int high=0, low=0;
        int n, current, last;

        cin >> n;
        cin >> current;

        for(int j=0; j<n-1; j++) {
            last = current;
            cin >> current;

            if (current > last) {
                high += 1;
            } else if (current < last ){
                low += 1;
            }
        }

        printf("Case %d: %d %d\n", i+1, high, low);
    }
    return 0;
}
