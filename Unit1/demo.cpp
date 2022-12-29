/**
 * @file demo.cpp
 * @author hen (1924801023@qq.com)
 * @brief
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
using namespace std;
int main()
{
    // #ifdef DEBUG
    //     cerr << "DEBUG 存在" << endl;
    // #endif

    // #ifndef DEBUG
    //     cerr << "DEBUG 不存在" << endl;
    // #endif
    cout << "file name is:" << __FILE__ << endl;
    cout << "line number is:" << __LINE__ << endl;
    cout << "file compilation date is  " << __TIME__ << endl;
    cout << "Date the source file was converted to object code" << __DATE__;
    return 0;
}
