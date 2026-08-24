//!班级学生成绩管理系统
//*----------------- version 1.1.0 -----------------

#include <stdio.h>

int main(void)
{
    int score[100];
    int n = 0;          // 实际人数
    int average = 0;
    int i, j, p, temp;
    char choice;        // 用于接收菜单选项

    printf("========== 班级成绩管理系统 ==========\n");
    printf("欢迎使用！请先录入成绩。\n\n");

    while (1) {
        // ----- 显示主菜单 -----
        printf("\n+-----------------------------------+\n");
        printf("|  [1] 录入成绩                     |\n");
        printf("|  [2] 显示排名（降序）             |\n");
        printf("|  [3] 统计信息（最高/最低/平均）   |\n");
        printf("|  [q] 退出系统                     |\n");
        printf("+-----------------------------------+\n");
        printf("请选择操作: ");
        scanf(" %c", &choice);   // 注意 %c 前的空格，用来吃掉上一个回车

        // ----- 根据用户选择执行操作 -----
        if (choice == 'q' || choice == 'Q') {
            printf("\n感谢使用，再见！\n");
            break;   // 跳出 while 循环，程序结束
        }

        switch (choice) {
            case '1': {
                // ----- 录入成绩 -----
                printf("请输入班级人数: ");
                scanf("%d", &n);

                // 防止输入人数超过数组大小
                if (n > 100) {
                    printf("错误：人数不能超过100！\n");
                    n = 0;
                    break;
                }

                printf("请输入每个学生的成绩:\n");
                for (i = 1; i <= n; i++) {
                    printf("score[%d] = ", i);
                    scanf("%d", &score[i]);
                }
                printf("成绩录入完成！共 %d 名学生。\n", n);
                break;
            }

            case '2': {
                // ----- 显示排名（降序）-----
                if (n == 0) {
                    printf("提示：请先录入成绩（选择 1）。\n");
                    break;
                }

                // 先复制一份成绩用于排序（避免破坏原始数据）
                int sorted[100];
                for (i = 1; i <= n; i++) sorted[i] = score[i];

                // 选择法排序（降序）
                for (i = 1; i <= n - 1; i++) {
                    p = i;
                    for (j = i + 1; j <= n; j++) {
                        if (sorted[p] < sorted[j]) {
                            p = j;
                        }
                    }
                    if (p != i) {
                        temp = sorted[i];
                        sorted[i] = sorted[p];
                        sorted[p] = temp;
                    }
                }

                printf("\n成绩排名（从高到低）:\n");
                for (i = 1; i <= n; i++) {
                    printf("第 %3d 名: %4d 分\n", i, sorted[i]);
                }
                break;
            }

            case '3': {
                // ----- 统计信息 -----
                if (n == 0) {
                    printf("提示：请先录入成绩（选择 1）。\n");
                    break;
                }

                // 找最高分和最低分
                int max = score[1];
                int min = score[1];
                int sum = 0;

                for (i = 1; i <= n; i++) {
                    if (score[i] > max) max = score[i];
                    if (score[i] < min) min = score[i];
                    sum += score[i];
                }

                float avg = (float)sum / n;

                printf("\n========== 统计信息 ==========\n");
                printf("  总人数:    %d 人\n", n);
                printf("  最高分:    %d 分\n", max);
                printf("  最低分:    %d 分\n", min);
                printf("  平均分:    %.2f 分\n", avg);
                break;
            }

            default:
                // 输入了 1、2、3、q 以外的字符
                printf("无效输入，请选择 1、2、3 或 q。\n");
                break;
        }
    }

    return 0;
}