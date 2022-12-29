/**
 * @file test.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#define STR(s) #s
#define CON1(a, b) a##b
using namespace std;
/// @brief
/// @return
int main()
{

    // cout << STR(hello) << endl;
    // cout << STR(abc 否 123) << endl;
    int xy = 100;
    // cout << STR("hello");
    cout << CON1(x, y) << endl;
    cout << CON1(11, 20);
    return 0;
}