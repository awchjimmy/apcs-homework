#include <iostream>
using namespace std;

int code[30] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

int main () {
    string idnum;
    int checksum = 0;
    cin >> idnum;

    // get region num
    int icode = code[(int)(idnum[0] - 'A')];
    checksum += 9*(icode%10);
    checksum += icode/10;

    // 
    int k=8;
    for(int i=1; i<idnum.size()-1; i++){
        int calc = (idnum[i]-'0') * k;
        checksum += calc;
        k--;
    }

    // last digit
    checksum += idnum[9]-'0';

    // output answer
    if (checksum % 10 == 0) {
        cout << "real\n";
    } else {
        cout << "fake\n";
    }
    
    return 0;
}
