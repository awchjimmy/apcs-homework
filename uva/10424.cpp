#include <iostream>
#include <stdio.h>
using namespace std;

int nameToSum(string name) {
    int sum = 0;
    for(int i=0; i<name.size(); i++) {
        if (name[i] >= 'A' && name[i] <= 'Z') {
            sum += name[i]-'A'+1;
        } else if (name[i] >= 'a' && name[i] <= 'z') {
            sum += name[i]-'a'+1;
        }
    }
    return sum;
}

int sumToOneDigit(int sum) {
    int oneDigit = 0;
    while(sum) {
        oneDigit += sum % 10;
        sum /= 10;
    }

    sum = oneDigit;
    oneDigit = 0;
    while(sum) {
        oneDigit += sum % 10;
        sum /= 10;
    }

    return oneDigit;
}

int main() {
    string name1, name2;
    int digit1, digit2;
    while(getline(cin, name1)) {
        getline(cin, name2);

        digit1 = sumToOneDigit(nameToSum(name1));
        digit2 = sumToOneDigit(nameToSum(name2));

        if (digit1 < digit2) {
            printf("%.2f", (float)digit1/digit2*100);
        } else {
            printf("%.2f", (float)digit2/digit1*100);
        }
        cout << " %" << endl;
    }
    return 0;
}
