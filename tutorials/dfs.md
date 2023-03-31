深度优先搜索（Depth-First Search，DFS）是一种常用的图遍历算法，可以用于求解图的连通性、路径等问题，同时也可以应用于树等其他数据结构的遍历。

以下是一个简单的 C++ DFS 实现示例：

```c++
#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 100;
vector<int> adj[MAXN];  // 邻接表存储图

bool visited[MAXN];  // 标记每个节点是否已访问

void dfs(int u) {
    visited[u] = true;  // 标记节点 u 为已访问

    for (int v : adj[u]) {
        if (!visited[v]) {  // 如果节点 v 还未访问
            dfs(v);  // 递归访问节点 v
        }
    }
}

int main() {
    // 构建一个简单的图
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(2);
    adj[4].push_back(2);
    adj[4].push_back(5);
    adj[5].push_back(4);

    dfs(1);  // 从节点 1 开始遍历

    return 0;
}

```

在上述代码中，我们使用邻接表存储了一个简单的无向图，并使用 bool 数组 visited 标记每个节点是否已访问。在 dfs 函数中，我们首先将当前节点 u 标记为已访问，然后递归访问与节点 u 相邻的未访问节点 v。

需要注意的是，在实际应用中，我们可能需要添加其他参数或返回值来实现更复杂的功能，例如记录遍历的路径、计算节点的深度等。同时，我们还需要特别注意图的遍历顺序和连通性等问题，以保证算法的正确性和有效性。
