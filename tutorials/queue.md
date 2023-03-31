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

在這個例子中，我們使用了queue<int>類型的myQueue對象，並使用push方法向隊列中添加三個整數元素。接下來，我們使用while循環來從隊列中依次取出元素，並將它們打印到控制台上。

需要注意的是，STL queue類的底層實現也是使用deque數據結構，因此在操作較大的隊列時也可能會占用過多的內存。同樣地，如果需要操作的數據量較大，建議使用其他更高效的數據結構。

總結來說，STL庫中提供了stack和queue兩個常用的數據結構，它們分別實現了“先進後出”和“先進先出”的操作。在實際應用中，需要根據具體需求選擇合適的數據結構，並注意內存和性能問題。
