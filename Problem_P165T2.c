//!教材P165T2：使用选择法对10个数排序
#include <stdio.h>
int main(void)
{
    int a[11];//*定义一个能存放10个数据的一维数组
    int i,j,min,temp;
    printf("请输入10个整数: \n");
    for(i=1;i<=10;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);//*输入这十个数
    }
    printf("\n这10个数分别是: ");
    for(i=1;i<=10;i++)
    {
        printf("%5d",a[i]);//*输出这十个数
    }
    for(i=1;i<=9;i++)//*以下是对这十个数排序
    {
        min=i;
        for(j=i+1;j<=10;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
            temp=a[i];//*以下3行将a[i+1]~a[10]中的最小值与a[i]对换
            a[i]=a[min];
            a[min]=temp;
    }
    printf("\n排序结果: \n");
    for(i=1;i<=10;i++)
    {
        printf("%5d",a[i]);////输出结果
    }
    return 0;
}