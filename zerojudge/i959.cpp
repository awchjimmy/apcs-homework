#include <iostream>
using namespace std;

const int MAX_SIZE = 105000;
int scores[MAX_SIZE];
int max_scores[MAX_SIZE];
int min_scores[MAX_SIZE];

void set_scores(int n){
    for (int i=0; i<n; i++) {
        cin >> scores[i];
    }
}

void set_max_scores(int n) {
    max_scores[0] = scores[0];
    for(int i=1; i<n; i++) {
        max_scores[i] = (scores[i] > max_scores[i-1]) ? scores[i] : max_scores[i-1];
    }
}

void set_min_scores(int n) {
    min_scores[n-1] = scores[n-1];
    for(int i=n-2; i>=0; i--) {
        min_scores[i] = (scores[i] < min_scores[i+1]) ? scores[i] : min_scores[i+1];
    }
}

void debug(int* array, int n) {
    for(int i=0; i<n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int get_ans(int n) {
    int ans = max_scores[0] - min_scores[1];
    for (int i=0; i<n-1; i++) {
        ans = (max_scores[i]-min_scores[i+1] > ans) ? max_scores[i]-min_scores[i+1] : ans;
    }
    return ans;
}

int main () {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        set_scores(n);
        set_max_scores(n);
        // debug(max_scores, n);
        set_min_scores(n);
        // debug(min_scores, n);
        cout << get_ans(n) << endl;
    }
    return 0;
}
