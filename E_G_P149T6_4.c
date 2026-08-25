//!教材P149例6.4：二维数组的行列互换
#include <stdio.h>
int main(void)
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2];
    int i,j;
    printf("数组a=\n");
    for(i=0;i<2;i++)//*处理数组a的行
    {
        for(j=0;j<3;j++)//*处理数组a的列
        {
            printf("%5d",a[i][j]);
            b[j][i]=a[i][j];//!实现元素互换
        }
        printf("\n");
    }
    printf("\n数组b=\n");
    for(i=0;i<3;i++)//*同 行9
    {
        for(j=0;j<2;j++)//*同 行11
        {
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}