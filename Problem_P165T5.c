//!教材P165T5：将一个数组中的值按照逆序重新存放
#include <stdio.h>
int main(void)
{
    int a[101]={0};
    int i,j,n,temp=0;
    printf("请输入元素个数: \n");
    scanf("%d",&n);
    printf("请逐一输入数据(整数): \n");
    for(i=0;i<n;i++)//*输入数据
    {
        printf("a[%d]= ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)//!交换主体部分，注意循环边界
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("现在数组为:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]= %-5d\n",i+1,a[i]);
    }
    return 0;
}