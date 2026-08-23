//!教材P143例题6.3，起泡法排序
#include <stdio.h>
int main(void)
{
    int a[10];
    int i,j,t;
    printf("请输入任意10个整数: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(j=0;j<9;j++)//!判断循环次数：始终为n-1次
    {
        for(i=0;i<9-j;i++)
        {
            if(a[i]>a[i+1])//*起泡法排序的主要部分
            {
                t=a[i];//*临时将a[i]的值赋给t
                a[i]=a[i+1];
                a[i+1]=t;//*使a[i]与a[i+1]互换
            }
        }
    }
    printf("这十个数的顺序为:\n");
    for(i=0;i<10;i++)//*数据输出
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}