/**
 * @file pointer.cpp
 * @author hen (1924801023@qq.com)
 * @brief
 * @version 0.1
 * @date 2022-12-31
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
int main(int argc, char const *argv[])
{
    // {
    //     // Pointer to Constant
    //     // 常量指针 指针所指向的内容不可通过指针的间接引用(*p)来改变
    //     const int x = 25;
    //     const int *ptr1 = &x; // Pointer to Constant 常量指针
    //     //*ptr1 = 100;        这是错误的 error
    //     std::cout << *ptr1;
    //     /* code */

    //     // char *s1 = "Hello!";       // error
    //     const char *s2 = "Hello!"; // correct
    //     std::cout << s2;
    // }
    // {
    // Pointer Constant
    // 指针常量 指针本身的内容是个常量 ,不可以改变
    // int x = 1, y = 1;
    // int *const iPtr = &x;
    // *iPtr = 10;
    // iPtr = &y; error iPtr is a constant
    // 数组名是数组的首地址的别名 a == &a[0] .现在可以说:数组名就是一个指针常量
    //}
    // Pointer to Constant //常量指针 const int *a (a is 变量)
    // Pointer Constant  //指针常量  int *const a (a is 常量)
    // *ptr 指针解引用

    /**
     * @brief
     *
     *
     *  cont int *x;
        int *const y;
        在前先读,在前不变
        *(指针) 和const (常量) 谁在前先读谁
        *代表被指的数据,名字代表指针的地址
        const在谁前面谁就不允许改变
     */

    int test1 = 1, test2 = 1, test3 = 1;
    const int *iPtr = &test1;       // 常量指针 所指的数据不可变 (指向常量的指针,无法解引用)
    int *const ptr = &test1;        // 指针常量 不可变 (ptr的值不能修改)
    const int *const ptr2 = &test3; // 常指针常量
    auto ptr3 = "hello";
    //*iPtr = 10;
    // ptr = &test2;
    std::cout << *iPtr << std::endl;

    std::cout << *ptr;
    // cont int *x;
    // int *const y;
    // 在前先读,在前不变
    // *(指针) 和const (常量) 谁在前先读谁
    // *代表被指的数据,名字代表指针的地址
    // const在谁前面谁就不允许改变
    return 0;
}
