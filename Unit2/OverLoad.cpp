/**
 * @file OverLoad.cpp
 * @author hen (1924801023@qq.com)
 * @brief
 * @version 0.1
 * @date 2023-01-03
 *
 * @copyright Copyright (c) 2023
 *
 */

// 重载函数的
// 个数
// 类型
// 顺序
#include <iostream>
int a{0};
auto &Var()
{
    return a;
}
auto max(int Param2, int Param1 = 1.99)
{
    if (Param1 > Param2)
    {
        return Param1;
    }
    else
    {
        return Param2;
    }
}
auto max(double Param1, double Param2)
{
    if (Param1 > Param2)
    {
        return Param1;
    }
    else
    {
        return Param2;
    }
}
int main()
{
    // std::cout << max(1, 3) << std::endl;
    // std::cout << max(5);
    //  auto a = 3.14125;
    // auto c = Var() += 2;
    std::cout << Var();
    return 0;
}
// inline auto max()
// {
//     return "fuck";
// }
