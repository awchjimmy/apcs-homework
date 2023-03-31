STL庫還提供了queue類，它實現了“先進先出”（FIFO）的數據結構。queue類的使用方法類似於stack類，只不過它實現了不同的數據結構。

以下是一個簡單的使用STL queue類的例子：

```c++
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }

    return 0;
}

```
