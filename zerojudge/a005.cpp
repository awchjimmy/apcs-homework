#include <iostream>
using namespace std;

int main() {
    int t;
    int a, b, c, d, e;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c >> d;
        e = d;
        
        if (b-a == c-b && c-b == d-c) {
            // deng cha
            e = d + (d-c);
        } else {
            // deng bi
            e = d * (d/c);
        }
        
        cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    }
    return 0;
}
