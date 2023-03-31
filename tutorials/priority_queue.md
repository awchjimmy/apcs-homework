STL還提供了priority_queue類，它實現了優先級隊列的操作。priority_queue類的用法和stack、queue類相似，只不過它會根據優先級自動排序。以下是一個簡單的使用STL priority_queue類的例子：

```c++
#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> myPQ;

    myPQ.push(1);
    myPQ.push(3);
    myPQ.push(2);

    while (!myPQ.empty()) {
        cout << myPQ.top() << " ";
        myPQ.pop();
    }

    return 0;
}

```
