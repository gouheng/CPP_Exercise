/**
 * @file preprocess.cpp
 * @author hen (1924801023@qq.com)
 * @brief
 * @version 0.1
 * @date 2022-12-31
 *
 * @copyright Copyright (c) 2022
 *
 */

// using 替代 typedef (C++11)
// using identifier = type-id
using FuncType = void (*)(int, int);
// 名称FuncType ,现代指代指向函数的指针
// FuncType 类型
using UInt = unsigned int;
using UChar = unsigned char;
UInt a = 10u;
#include <iostream>
int main(int argc, char const *argv[])
{
    decltype(fun1()) a;
    std::cout << a;
    return 0;
}
auto fun1()
{
    return "hen";
}
