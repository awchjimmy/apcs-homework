C++ 的 Direct Access Table（直接存取表）是一種非常基本的數據結構，它提供了常數時間（O(1)）的隨機訪問和修改元素的能力。它可以用來實現一些基本的操作，例如計數、查找、排序等等。

實現 Direct Access Table 最簡單的方式就是使用一個固定大小的陣列，其中每個元素的索引就是其在數據集合中的值。對於任何一個元素，可以通過索引直接訪問它。這種方法的時間複雜度是 O(1)。

以下是一個使用 Direct Access Table 來計數一個數據集合中元素出現次數的簡單範例：

```c++
#include <iostream>
#include <vector>

using namespace std;

const int N = 1000000;

int main()
{
    vector<int> nums = {2, 1, 4, 2, 3, 5, 1, 3, 2, 4, 5, 1, 3};
    int cnt[N] = {0}; // 初始化為 0

    for (int i = 0; i < nums.size(); i++) {
        cnt[nums[i]]++; // 對應元素的計數器加 1
    }

    // 輸出計數結果
    for (int i = 0; i < N; i++) {
        if (cnt[i] > 0) {
            cout << i << ": " << cnt[i] << endl;
        }
    }

    return 0;
}
```

在這個範例中，我們首先創建了一個包含多個整數的數據集合 nums。然後，我們使用 int cnt[N] 宣告一個大小為 N 的陣列，用來計數 nums 數據集合中每個元素出現的次數。接下來，我們遍歷 nums 中的每個元素，並將對應元素的計數器加 1。最後，我們輸出計數結果。

這個例子展示了如何使用 Direct Access Table 實現計數的功能。除了計數之外，Direct Access Table 還可以用來實現排序、查找等操作，因此在算法競賽中非常常見。
