#include <iostream>
using namespace std;

int main() {
    int t, n, ans;
    cin >> t;
    while(t--) {
        cin >> n;
        ans = ((n*567/9+7492)*235/47-498)/10%10;
        if (ans < 0) {
            ans = -ans;
        }
        cout << ans << endl;
    }
    return 0;
}
