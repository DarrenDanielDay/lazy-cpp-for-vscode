/**
 * 
 * This file is in charset GBK!
 * 
 * 一个简单的读取标准输入流输入的示例C++代码。
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    /*
    如果代码文件用GBK编码，在运行时一般不会出现中文乱码。
     */
    int a = 0;
    cout << "请输入一个整数：" << endl;
    cin >> a;
    cout << "你输入了：" << a << endl;
    system("pause");
    return 0;
}