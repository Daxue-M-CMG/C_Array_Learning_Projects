//!班级学生成绩管理系统
//*----------------- version 1.0.0 -----------------
#include <stdio.h>
#include <math.h>
int main(void)
{
    int score[101];//!定义数组score=[101]防止输入‘100’造成的越界问题。
    int n,average=0,i,j;
    int p,temp;//!由于用到选择法排序，需要定义临时数据以存储。此处p=选择法排序中的‘最小值’，temp用于交换
    printf("请输入班级人数: \n");
    scanf("%d",&n);
    printf("请输入每个学生的成绩: \n");
    for(i=1;i<=n;i++)//*逐个输入成绩
    {
        printf("score[%d]=",i);
        scanf("%d",&score[i]);
    }
    for(i=1;i<=n-1;i++)//*开始排序（选择法）
    {
        p=i;
        for(j=i+1;j<=n;j++)
        {
            if(score[p]<score[j])//*成绩通常降序排序
            {
                p=j;
            }
        }
        temp=score[i];
        score[i]=score[p];
        score[p]=temp;
    }
    printf("以下是成绩名单: \n");
    for(i=1;i<=n;i++)
    {
        printf("排名: %-3d 成绩:%-4d\n",i,score[i]);//*使输出结果整齐
    }
    printf("最高分: %4d\n最低分: %4d",score[1],score[n]);
    for(i=1;i<=n;i++)
    {
        average+=score[i];//*等同于average=average+score[i]
    }
    float avg;
    avg=(float)average/n;
    printf("\n班级成绩平均数: %3.2f",avg);
    return 0;
}