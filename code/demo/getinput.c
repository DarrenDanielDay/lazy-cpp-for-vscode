/**
 * 
 * This file is in charset UTF-8!
 * 
 * 一个简单的读取标准输入流输入的示例C代码。
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001");
    /*
    该命令可以解决UTF-8格式编码的代码文件运行时输出中文乱码。
    如果代码文件用UTF-8编码，那么可以暴力使用这个命令。
    但是执行此命令后，cin与cout的重定向有待解决。
    scanf和printf不受影响。
     */
    int a = 0;
    printf("请输入一个整数：\n");
    scanf("%d", &a);
    printf("你输入了：%d\n", a);
    system("pause");
    return 0;
}