//!教材P162例6.8，要求：输入一行字符，统计其中有多少个单词，输入时单词间以空格分隔。
//!状态机法数一个字符串中的单词
#include <stdio.h>
#include <string.h>//*程序调用‘strcspn’函数处理fgets读入的‘\n（换行符）’
int main(void)
{
    char str[101]={0};//*初始化整个字符数组为0，防止出现极端状况
    int i,num=0,word=0;//* word=0=不在单词内，word=1=在单词内
    printf("请输入字符: \n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';//!移除fgets读入的换行符
    for(i=0;str[i]!='\0';i++)//!状态机法查找的主要部分
    {
        if(str[i]==' ')
        {
            word=0;//*如果遇到空格，则不在单词内。
        }
        else if(word==0)
        {
            word=1;//*不要忘记word初始化为0！如果word=0（即处于‘不在单词内’的状态），即为‘空格’。
            num++;//!本质上是：‘空格数+1=单词数’的逻辑
        }
    }
    printf("这串字符共有 %d 个单词.\n",num);
    return 0;
}