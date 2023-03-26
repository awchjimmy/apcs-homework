#include <iostream>
using namespace std;

int cmd[200]; // -1: left, 1: right
int main () {
    int t;
    cin >> t;
    while(t--) {
        int n, pos=0, cmdno;
        string strcmd;
        cin >> n;

        for (int i=0; i<n; i++) {
            cin >> strcmd;
            if (strcmd == "LEFT") {
                cmd[i] = -1;
            } else if (strcmd == "RIGHT") {
                cmd[i] = 1;
            } else if (strcmd == "SAME") {
                cin >> strcmd; // "AS"
                cin >> cmdno;
                cmd[i] = cmd[cmdno-1];
            }

            pos += cmd[i];
        }

        cout << pos << endl;
    }
    return 0;
}
