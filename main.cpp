#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    // 在这里完成你的代码
    int temp = b;
    if (a < b) {
      b = a;
      a = temp;
    }
    temp = c;
    if (temp > b) {
      c = b;
      b = temp;
    }
    if (temp > a) {
      b = a;
      a = temp;
    }
    result.max = a;
    result.mid = b;
    result.min = c;
}
