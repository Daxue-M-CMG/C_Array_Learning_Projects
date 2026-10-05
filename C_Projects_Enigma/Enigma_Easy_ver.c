//! 这是一个二战时德军使用的“恩尼格玛”密码机的简易版本（单转子-单向映射）
#include <stdio.h>
#include <string.h>
int main(void)
{
  printf("这是一个简易的 恩尼格玛 密码机。\n");
  int rotor[26] = {
    4, 10, 12, 5, 11, 6, 3, 16, 21, 25, 13, 19, 14, 22, 24, 7, 23, 20, 18, 15, 0, 8, 1, 17, 2, 9
  }; //* 定义数组retor作为初始映射表
  int offset = 0;                //* 转子初始设置
  char cipher_str[1000] = { 0 }; //* 存放密文，并初始化为0
  char str[1000] = { 0 };        //*存放明文
  printf("请输入要加密的明文：\n");
  fgets(str, sizeof(str), stdin); //*接受输入
  str[strcspn(str, "\n")] = '\0'; //*移除换行符
  //! 预处理：将空格与标点符号统一替换为“X”，将小写字母全部转换为大写字母
  int j = 0, i = 0;             //*j记录clean_str的长度
  char clean_str[1000] = { 0 }; //*存放预处理后的密文
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z') //*转为大写
    {
      clean_str[j] = str[i] - 32;
      j++;
    }
    else if (str[i] >= 'A' && str[i] <= 'Z') //*大写不变
    {
      clean_str[j] = str[i];
      j++;
    }
    else //*空格、标点转换为 X
    {
      clean_str[j] = 'X';
      j++;
    }
  }
  clean_str[j] = '\0';
  //! 主要加密过程
  for (i = 0; clean_str[i] != '\0'; i++)
  {
    int c = clean_str[i] - 'A';            //* 变成 0-25 的数字
    int mapped = rotor[(c + offset) % 26]; //* 查表并加上机械偏移
    cipher_str[i] = mapped + 'A';          //* 转回大写字母
    offset = (offset + 1) % 26;            //* 转子步进一格
  }
  cipher_str[j] = '\0';
  //! 格式化输出：字母每五个为一组，中间以空格隔开
  int count = 0;
  printf("密文为：\n");
  for (int i = 0; cipher_str[i] != '\0'; i++)
  {
    printf("%c", cipher_str[i]);
    count++;
    if (count == 5)
    {              // 每满5个字母
      printf(" "); // 打一个空格
      count = 0;   // 计数器清零
    }
  }
  printf("\n");
  return 0;
}