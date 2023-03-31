C++ Union-Find是一個常見的資料結構，主要用於處理關於「集合」的問題。它的特點是可以快速合併兩個集合，並且可以查詢任意兩個元素是否在同一個集合中。

以下是使用C++ STL實現Union-Find的範例程式碼：

```c++
#include <bits/stdc++.h>
using namespace std;

int find(int x, vector<int>& parent) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x], parent);
}

void unite(int x, int y, vector<int>& parent, vector<int>& rank) {
    int px = find(x, parent), py = find(y, parent);
    if (px == py) return;
    if (rank[px] < rank[py]) swap(px, py);
    parent[py] = px;
    if (rank[px] == rank[py]) rank[px]++;
}

int main() {
    int n = 10;
    vector<int> parent(n), rank(n, 0);
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
    unite(0, 1, parent, rank);
    unite(2, 3, parent, rank);
    unite(4, 5, parent, rank);
    unite(6, 7, parent, rank);
    unite(8, 9, parent, rank);
    unite(0, 2, parent, rank);
    unite(4, 6, parent, rank);
    unite(0, 4, parent, rank);
    for (int i = 0; i < n; i++) {
        cout << "parent[" << i << "] = " << parent[i] << endl;
    }
    return 0;
}

```

在這個範例程式碼中，使用了一個vector<int>作為Union-Find的底層數據結構。parent[i]存儲了元素i的祖先，一開始所有元素的祖先都是自己，即`parent[i] = i`。

`find(x, parent)`函數實現了查找操作，用於查詢元素x所在的集合的祖先。

`unite(x, y, parent, rank)`函數實現了合併操作，用於合併元素x和y所在的集合。

在這個範例中，我們先將10個元素分別視為一個集合，然後逐步合併它們。最終，所有元素都在同一個集合中，並且其祖先都是0。

Union-Find是一個常見的資料結構，可以應用於各種算法中，例如最小生成樹、最短路徑、連通性等問題。
