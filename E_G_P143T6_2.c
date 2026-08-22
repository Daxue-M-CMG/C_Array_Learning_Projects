//!教材P143例6.2：斐波那契数列问题
#include <stdio.h>
int main (void)
{
    int i;
    int f[30]={1,1};
    for(i=2;i<30;i++)//*求值3~30
    {
        f[i]=f[i-2]+f[i-1];
    }
    for(i=0;i<30;i++)//*输出
    {
        if(i%5==0)//*每输出5个数据，换行
        {
        printf("\n");
        }
        printf("%12d",f[i]);//*每个数字占12位，右对齐
    }
    printf("\n");
    return 0;
}