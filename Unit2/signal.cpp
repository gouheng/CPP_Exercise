/**
 * @file signal.cpp
 * @author hen (1924801023@qq.com)
 * @brief
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <csignal>
#include <windows.h>
using namespace std;
void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";

    // 清理并关闭
    // 终止程序

    exit(signum);
}

int main()
{
    //  注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);

    while (1)
    {
        cout << "Going to sleep...." << endl;
        Sleep(1);
    }

    return 0;
}