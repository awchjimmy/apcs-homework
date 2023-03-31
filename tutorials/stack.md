Stack是一個常用的數據結構，它可以在程序中快速實現“先進後出”的操作。在C++中，可以使用STL庫中提供的stack類來實現。

以下是一個簡單的使用STL stack類的例子：

```c++
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
```

在這個例子中，我們使用了stack<int>類型的myStack對象，並使用push方法向堆疊中添加三個整數元素。接下來，我們使用while循環來從堆疊中依次彈出元素，並將它們打印到控制台上。

使用STL stack類可以方便地實現堆疊操作，並且STL庫已經對其進行了優化和簡化，不需要自己實現。需要注意的是，STL stack類的實現原理是使用deque（雙端隊列）作為底層數據結構，因此在使用時需要考慮到性能和空間問題。
