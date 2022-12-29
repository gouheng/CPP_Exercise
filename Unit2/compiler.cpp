/**
 * @file compiler.cpp
 * @author hen (1924801023@qq.com)
 * @brief
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <cstdio>
namespace MyName
{
} // namespace name

int main(int argc, char const *argv[])
{
    int x;
    int &a = x;
    int *ptr = &x;
    ptr = nullptr;
    x = 100;
    std::printf("%d\n", x);
    a = 1;
    std::printf("%d", x);
    /* code */
    return 0;
}
