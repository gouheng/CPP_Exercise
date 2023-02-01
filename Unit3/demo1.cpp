#include <iostream>
int main(int argc, char const *argv[]) {
    int a = 7 << 1;  // 3 = 0011  <-- 左移(2) 1100 = 12
    int b = a >> 1;  // 1000 -> 0100  = 4
    int c = 0 & 1;   // 01 & 01 = 1
    int d = 0 | 1;   // 01 & 01 = 1
    int e = ~0;      // ~X === -(X+1)
                     // int c = 0x4b;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << c << std::endl;
    // std::cout << d << std::endl;
    std::cout << e << std::endl;

    return 0;
}
