//!有一个已经排好序的数组，要求输入一个数后，按照原来的排序规律将其插入
#include <stdio.h>
int main(void)
{
    int a[14]={1,2,4,6,8,10,11,13,15,17,19,50,100};
    int i,j,num,n=13;//*默认追加到末尾
    printf("请输入一个数: \n");
    scanf("%d",&num);
    printf("原数组为: \n");//*输出原数组
    for(i=0;i<13;i++)//*输入要插入的数
    {
        printf("a[%-2d]= %-4d\n",i+1,a[i]);
    }
    for (i = 0; i < 13; i++) //!寻找插入位置
    {
        if (a[i] > num) 
        {
            n = i;
            break;
        }
    }
    for(j=12;j>=n;j--)//*数据挪动
    {
        a[j+1]=a[j];
    }
    a[n]=num;//*数据插入
    printf("\n插入后数组为: \n");//*输出插入后的数组
    for(i=0;i<14;i++)
    {
        printf("a[%-2d]= %-4d\n",i+1,a[i]);
    }
    return 0;
}