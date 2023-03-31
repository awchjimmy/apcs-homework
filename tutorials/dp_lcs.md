LCS (Longest Common Subsequence) 是一個經典的演算法問題，用於在兩個字串中尋找最長的共同子序列。以下是 C++ 的 LCS 範例及相關註解：
```c++
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lcs(string s1, string s2) {
    int len1 = s1.size();
    int len2 = s2.size();
    
    // 建立 DP 表格
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
    
    // 填表格
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    // 回傳最長共同子序列的長度
    return dp[len1][len2];
}

int main() {
    string s1 = "ABCD";
    string s2 = "ACDF";
    cout << lcs(s1, s2) << endl; // 輸出 2
    return 0;
}

```
上述程式碼使用 DP 的方式來解決 LCS 問題，首先建立一個二維的 DP 表格，其中 dp[i][j] 表示 s1[0...i-1] 和 s2[0...j-1] 的 LCS 長度。接著從左上角開始遍歷表格，如果 s1[i-1] 等於 s2[j-1]，那麼 dp[i][j] 就等於 dp[i-1][j-1]+1；否則，dp[i][j] 就等於 dp[i-1][j] 和 dp[i][j-1] 中的較大值。

最後，回傳 dp[len1][len2] 即為 s1 和 s2 的最長共同子序列的長度。

注意：LCS 可以擴展至多個字串之間，這時需要使用更高級的 DP 技巧。
