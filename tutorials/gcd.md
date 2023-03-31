C++ 中的 gcd (最大公因數) 函数可以使用 STL 中的 __gcd() 函数实现，该函数定义在头文件<algorithm> 中。__gcd() 函数接受两个参数，返回它们的最大公因数。

以下是一个使用 __gcd() 函数计算两个整数的最大公因数的示例：

```c++
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a = 36, b = 48;
    int g = __gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is " << g << endl;
    return 0;
}

```
  
输出：
```c++
GCD of 36 and 48 is 12
```
以上示例程序中，我们计算了 36 和 48 的最大公因数，即 12。
