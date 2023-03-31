#include <iostream>
#include <deque>
using namespace std;

deque<string> dq;

void buffer_commit (string command, string & buffer) {
    if (command == "PUSH_FRONT") {
        dq.push_front(buffer);
    } else if (command == "PUSH_BACK") {
        dq.push_back(buffer);
    }

    buffer = "";
}

string process(string before) {
    string ans = "";
    
    // normalized input
    if (before[0] != '[') {
        before = '[' + before;
    }

    // process
    string command = "PUSH_BACK";
    string buffer = "";
    for(int i=0; i<before.size(); i++) {
        if (before[i] == '[') {
            buffer_commit(command, buffer);
            command = "PUSH_FRONT";
        } else if (before[i] == ']') {
            buffer_commit(command, buffer);
            command = "PUSH_BACK";
        } else {
            buffer += before[i];
        }
    }
    buffer_commit(command, buffer);

    // build output
    while (!dq.empty()) {
        ans += dq.front();
        dq.pop_front();
    }

    return ans;
}

int main() {
    string before, after;

    while (cin >> before) {
        after = process(before);
        cout << after << endl;
    }
    return 0;
}
