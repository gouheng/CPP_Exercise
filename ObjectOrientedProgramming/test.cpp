#include <array>
#include <iostream>
int main(int argc, char const *argv[]) {
    std::array<std::string, 3> arr{"hen\t", "gou\t", "trash"};
    auto [e1, e2, e3]{arr};
    std::cout << e1 << e2 << e3;
    /* code */
    return 0;
}
