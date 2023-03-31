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

在這個例子中，我們使用了priority_queue<int>類型的myPQ對象，並使用push方法向優先級隊列中添加三個整數元素。由於默認情況下，priority_queue會根據元素的大小進行降序排列，因此最終輸出的結果是3、2、1。

需要注意的是，priority_queue類的底層實現也是使用vector數據結構，因此在操作較大的優先級隊列時也可能會占用過多的內存。同樣地，如果需要操作的數據量較大，建議使用其他更高效的數據結構。

總結來說，STL庫中提供了stack、queue和priority_queue三個常用的數據結構，它們分別實現了“先進後出”、“先進先出”和優先級隊列的操作。在實際應用中，需要根據具體需求選擇合適的數據結構，並注意內存和性能問題。
