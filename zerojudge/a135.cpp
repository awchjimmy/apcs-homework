#include <iostream>
using namespace std;

int main() {
    string input;
    int kase = 1;
    while(cin >> input && input != "#") {
        cout << "Case " << kase << ": ";
        if(input == "HELLO") {
            cout << "ENGLISH\n";
        } else if (input == "HOLA") {
            cout << "SPANISH\n";
        } else if (input == "HALLO") {
            cout << "GERMAN\n";
        } else if (input == "BONJOUR") {
            cout << "FRENCH\n";
        } else if (input == "CIAO") {
            cout << "ITALIAN\n";
        } else if (input == "ZDRAVSTVUJTE") {
            cout << "RUSSIAN\n";
        } else {
            cout << "UNKNOWN\n";
        }
        kase++;
    }
    return 0;
}
