//! 二分法查找数据
#include <stdio.h>
int main(void) {
  int a[15] = {100, 97, 85, 76, 63, 58, 47, 39, 28, 17, 14, 9, 5, 3, 1};
  int high, low, mid, target, n = 15;
  int found = 0;
  printf("请输入要查找的数字: \n");
  scanf("%d", &target);
  low = 0;
  high = n - 1;
  while (low <= high) {  //*该循环是二分查找的核心部分
    mid = (low + high) / 2;

    if (a[mid] == target) {
      found = 1;
      break;
    } else if (
        target >
        a[mid]) {  //*目标值大于中间值，（由于降序）说明目标值可能位于中间值左面
      high = mid - 1;  //*使中间值左移
    } else {  //*目标值小于中间值，（由于降序）说明目标值可能位于中间值右面
      low = mid + 1;  //*使中间值右移
    }
  }
  if (found == 1) {
    printf("找到了，%d 是数组中的第 %d 个数。\n", target, mid + 1);
  } else {
    printf("查无此数。\n");
  }
  return 0;
}