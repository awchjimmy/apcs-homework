除了基本的stack和queue類型外，STL還提供了一些衍生的數據結構，如deque（雙向隊列）和priority_queue（優先級隊列），這些數據結構都提供了一些特定的操作和功能，能夠更好地滿足不同場景下的需求。

deque類型也是一種常用的數據結構，它實現了雙向隊列的操作，可以在頭尾同時進行插入和刪除操作。以下是一個簡單的使用STL deque類型的例子：

```c++
#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> myDeque;

    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_front(3);
    myDeque.push_front(4);

    while (!myDeque.empty()) {
        cout << myDeque.front() << " ";
        myDeque.pop_front();
    }

    return 0;
}
```

在這個例子中，我們使用了deque<int>類型的myDeque對象，並使用push_back和push_front方法向雙向隊列中添加四個整數元素。由於先使用push_front方法添加了4和3兩個元素，因此在進行遍歷和刪除時，4和3會先被取出，最終輸出的結果是4、3、1、2。

需要注意的是，deque類型的底層實現也是使用一個可擴展的動態數組，因此在操作較大的雙向隊列時也可能會占用過多的內存。同樣地，如果需要操作的數據量較大，建議使用其他更高效的數據結構。

總結來說，STL庫中提供了stack、queue、deque和priority_queue四種常用的數據結構，它們分別實現了“先進後出”、“先進先出”、雙向隊列和優先級隊列的操作。在實際應用中，需要根據具體需求選擇合適的數據結構，並注意內存和性能問題。
