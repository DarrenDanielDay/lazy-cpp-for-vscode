/**
 * 
 * This file is in charset UTF-8!
 * 
 * 一个输出Hello world的C++示例代码
 */

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    cout << "Hello, wolrd!" << endl;
    system("pause"); 
    /*
    如果不希望控制台（即程序运行时弹出的黑框，也有的时候叫它终端、命令行等）在程序结束后立即关闭（即出现所谓的"闪退"）,
    并且使用了本配置的默认设置，请在main函数结束前加上这一段代码:
    system("pause");
    system函数用于执行一个命令，并且等待命令执行完毕。
    命令pause的作用这里我就不解释了，有兴趣可以自行百度。
     */
    
    return 0;
}