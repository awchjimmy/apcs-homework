#include <iostream>
using namespace std;

int arr[200][200] = {0};

int main() {
    int row, col;
    while(cin >> row >> col) {
        // matrix
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                cin >> arr[i][j];
            }
        }

        // transform
        for (int j=0; j<col; j++) {
            for (int i=0; i<row; i++) {
                if (i) cout << " ";
                cout << arr[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
