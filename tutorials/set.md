以下是一個使用C++ STL中set的範例程式，程式碼中有詳細的註釋說明：

```c++
#include <iostream>
#include <set> // 引入set庫

using namespace std;

int main() {
    set<int> s; // 創建一個名為s的set，其中存儲的元素類型為int

    // 插入元素
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1); // 插入重複元素會被自動去重

    // 訪問元素
    cout << "set s contains " << s.size() << " elements: ";
    for (auto it = s.begin(); it != s.end(); ++it) { // 使用迭代器遍歷set中的元素
        cout << *it << " ";
    }
    cout << endl;

    // 查找元素
    if (s.find(3) != s.end()) { // 使用find函數查找元素，如果找到了返回元素位置，否則返回set的結尾位置
        cout << "set s contains 3" << endl;
    }

    // 刪除元素
    s.erase(1); // 刪除set中的元素1

    // 判斷元素是否存在
    if (s.count(1) == 0) { // 使用count函數判斷元素是否存在
        cout << "set s does not contain 1" << endl;
    }

    return 0;
}
```

在這個範例中，我們創建了一個名為s的set，並插入了三個元素。由於set自動去重，插入重複元素時只會保留一個。然後我們使用迭代器遍歷set中的元素，並使用find函數查找元素3是否存在於set中。最後，我們使用erase函數刪除set中的元素1，並使用count函數判斷元素1是否存在於set中。
