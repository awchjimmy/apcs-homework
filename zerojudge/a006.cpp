#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int check = b*b - 4*a*c;

    if (check < 0){
        cout << "No real root" << endl;
    } else if (check == 0) {
        cout << "Two same roots x=" << (-1*b) / (2*a) << endl;
    } else {
        int x1 = ((-1*b) + sqrt(check)) / (2*a);
        int x2 = ((-1*b) - sqrt(check)) / (2*a);
        cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
    }

    return 0;
}
