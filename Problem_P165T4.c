//! 有一个已经排好序的数组，要求输入一个数后，按照原来的排序规律将其插入
#include <stdio.h>
int main(void) {
  int a[101] = {0};
  int i, j, n, num;
  int pos;
  printf("请输入数组长度: \n");
  scanf("%d", &n);
  pos = n;  //*默认插入到最后
  printf("请按照 升序(从小到大) 输入数据。\n");
  for (i = 0; i < n; i++) {
    printf("a[%-2d]= ", i + 1);
    scanf("%d", &a[i]);
  }
  printf("请输入要插入的数据: ");
  scanf("%d", &num);
  for (i = 0; i < n; i++)  //*寻找插入点
  {
    if (a[i] > num) {
      pos = i;
      break;
    }
  }
  for (j = n - 1; j >= pos; j--)  //*挪动数组元素
  {
    a[j + 1] = a[j];
  }
  a[pos] = num;  //*插入数据
  n++;
  printf("现数组为: \n");
  for (i = 0; i < n; i++) {
    printf("a[%-2d]= %-4d\n", i + 1, a[i]);
  }
  return 0;
}