//!求一個3×3整形矩陣主對角綫元素之和。
#include <stdio.h>
int main(void)
{
    int a[3][3]={0};
    int i,j,addon=0;
    printf("請輸入 9 個整數: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)//*接收數據
        {
            printf("a[%d][%d]= ",i+1,j+1);//*使輸出更符合計數習慣
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)//*計算求和
    {
        addon+=a[i][i];
    }
    printf("对角线元素之和为: %d\n",addon);
    return 0;
}