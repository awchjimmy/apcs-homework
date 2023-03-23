#include <iostream>
using namespace std;

int main () {
    string enc;
    cin >> enc;
    for(int i=0; i<enc.size(); i++) {
        cout << (char)((int)enc[i]-7);
    }
    return 0;
}
