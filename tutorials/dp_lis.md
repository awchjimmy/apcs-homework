C++中的LIS是指最長遞增子序列（Longest Increasing Subsequence）。LIS的目標是找到序列中最長的遞增子序列，也就是說，找到一個序列的子序列，使其元素是按升序排列的，並且該子序列的長度最大。在計算機科學中，LIS是一個常見的問題，其解決方法涉及動態規劃和二分搜索等算法。

以下是C++中LIS的基本實現：

```c++
#include<bits/stdc++.h>
using namespace std;

int lis(int a[], int n) {
    int dp[n];
    memset(dp, 0, sizeof(dp));
    int len = 0;
    for(int i=0; i<n; i++) {
        int idx = lower_bound(dp, dp+len, a[i]) - dp;
        dp[idx] = a[i];
        if(idx == len) len++;
    }
    return len;
}

int main() {
    int a[] = {1, 2, 3, 2, 5, 6, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<lis(a, n)<<endl;
    return 0;
}

```

這段代碼的時間複雜度為O(nlogn)，其中n為序列的長度。lis(a, n)返回a數組中的最長遞增子序列的長度。

該代碼的思路是維護一個dp數組，其中dp[i]表示長度為i+1的遞增子序列的最小結尾元素。對於每個a[i]，在dp數組中二分查找其應該放置的位置idx，並將其賦值給dp[idx]。如果idx等於當前最長遞增子序列的長度len，則更新len。當處理完整個序列後，返回len即可。

這是LIS問題的一種經典解決方法，它不僅在C++中得到了廣泛的應用，而且在許多其他編程語言中也得到了應用。
