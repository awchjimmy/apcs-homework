以下是一個使用C++ STL中map的範例程式，程式碼中有詳細的註釋說明：

```c++
#include <iostream>
#include <map> // 引入map庫

using namespace std;

int main() {
    map<string, int> m; // 創建一個名為m的map，其中key為string類型，value為int類型

    // 插入元素
    m["apple"] = 3; // 使用[]操作符插入元素
    m.insert(make_pair("banana", 2)); // 使用insert函數插入元素

    // 訪問元素
    cout << "map m contains " << m.size() << " elements: " << endl;
    for (auto it = m.begin(); it != m.end(); ++it) { // 使用迭代器遍歷map中的元素
        cout << it->first << " : " << it->second << endl; // 使用箭頭操作符訪問元素的key和value
    }

    // 查找元素
    auto iter = m.find("apple"); // 使用find函數查找元素，返回一個迭代器指向該元素
    if (iter != m.end()) {
        cout << "map m contains apple" << endl;
    }

    // 刪除元素
    m.erase("banana"); // 刪除map中的元素

    // 判斷元素是否存在
    if (m.count("banana") == 0) { // 使用count函數判斷元素是否存在
        cout << "map m does not contain banana" << endl;
    }

    return 0;
}

```

在這個範例中，我們創建了一個名為m的map，並使用[]操作符和insert函數插入了兩個元素。然後我們使用迭代器遍歷map中的元素，使用箭頭操作符訪問元素的key和value。接下來，我們使用find函數查找元素apple是否存在於map中。最後，我們使用erase函數刪除了map中的元素banana，並使用count函數判斷元素banana是否存在於map中。
