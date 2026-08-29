//! 找一个二维数组的“鞍点”
#include <stdio.h>
int main(void)
{
    int a[11][11];
    int i, j, n, k, m;
    int row_max, max_c, over_found = 0; //*over_found用于标记整个数组是否有鞍点
    printf("请输入数组行、列数(空格分隔): \n");
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++) //*用户自定义数据并输入
    {
        for (j = 0; j < k; j++) {
            printf("a[%d][%d]= ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("该数组为: \n");
    for (i = 0; i < n; i++) //*先打印原数组方便审阅
    {
        for (j = 0; j < k; j++) {
            printf("[%-2d][%-2d]= %-4d", i + 1, j + 1, a[i][j]);
        }
        printf("\n");
    }
    //! 开始比较行(擂台法)
    for (i = 0; i < n; i++) {
        row_max = a[i][0];
        for (j = 0; j < k; j++) {
            if (a[i][j] > row_max) {
                row_max = a[i][j];
                max_c = j; //*记录行、列
            }
        }

        int found = 1; //*每次循环均重置，并且默认为1(有鞍点)
        //! 开始比较列(擂台法)
        for (m = 0; m < n; m++) {
            if (a[m][max_c] < row_max) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            printf("该数组有鞍点: %-4d\n[%-2d][%-2d]\n", a[i][max_c], i + 1, max_c + 1);
            over_found = 1;
        }
    }
    if (!over_found) {
        printf("该数组没有鞍点。\n");
    }
    return 0;
}