//!教材P150例6.5：擂台法找出二维数组最值
#include <stdio.h>
int main(void)
{
    int i,j;
    int a[3][2];
    int r1=0,r2=0;
    int c1=0,c2=0;//*r=行；c=列；并将数据初始化以排除可能的错误
    int max,min;
    printf("该数组共三行两列。\n");
    printf("请逐一输入数据( 整数 ): \n");
    for(i=0;i<3;i++)//*给数组赋初值
    {
        for(j=0;j<2;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    min=a[0][0];
    for(i=0;i<3;i++)//!比较的主体部分
    {
        for(j=0;j<2;j++)
        {
            if(a[i][j]>max)//!找出最大值
            {
                max=a[i][j];
                r1=i;
                c1=j;
            }
            else if(a[i][j]<min)//!找出最小值，并使用else……if以稍微提升速度
            {
                min=a[i][j];
                r2=i;
                c2=j;
            }
        }
    }
    printf("最大值: %-5d\n行: %-2d    列: %-2d\n",max,r1,c1);
    printf("最小值: %-5d\n行: %-2d    列: %-2d\n",min,r2,c2);
    return 0;
}