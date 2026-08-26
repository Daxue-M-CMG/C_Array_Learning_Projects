//!教材习题：筛选法求100以内的素数
//!所谓“筛选法”，指的是“埃拉托色尼筛法”
#include <stdio.h>
#include <math.h>//*要用到sqrt函数
int main(void)
{
    int i,j,n,a[101]={0};
    for(i=1;i<=100;i++)//*先给数组赋值
    {
        a[i]=i;
    }
    a[1]=0;//*先将1剔除
    for(i=2;i<=sqrt(100);i++)//!判断主体
    {
        for(j=i+1;j<=100;j++)
        {
            if(a[i]!=0 && a[j]!=0)
            {
                if(a[j]%a[i]==0)
                {
                    a[j]=0;//*把非素数挖掉
                }
            }
        }
    }
    printf("\n");
    for(i=2,n=0;i<=100;i++)//*输出结果
    {
        if(a[i]!=0)
        {
            printf("%-5d",a[i]);
            n++;
        }
        if(n==10)
        {
            printf("\n");
            n=0;
        }
    }
    printf("\n");
    return 0;
}