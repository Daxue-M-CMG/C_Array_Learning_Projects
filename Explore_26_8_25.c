//!这里练习方阵二维数组的原地转置（不借助其他数组）
#include <stdio.h>
int main(void)
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,temp=0;//*temp=临时量，便于交换
    printf("原数组a: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%-3d",a[i][j]);
        }
        printf("\n");//*先打印原数组
    }
    for(i=0;i<3;i++)//*处理行
    {
        for(j=i+1;j<3;j++)//*处理列，并且不处理对角线以提升效率
        {
            temp = a[i][j];//!实现原地转置的主要部分
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    printf("转置后数组a: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%-3d",a[i][j]);
        }
        printf("\n");//*打印转置后数组
    }
    return 0;
}