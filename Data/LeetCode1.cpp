#include <algorithm>
#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {
    std::vector<int> Array{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    // for (size_t i = 0; i < Array.size(); i++) {
    //     std::cout << Array[i] << "\t";
    //     /* code */
    // }
    std::sort(Array.begin(), Array.end());
    for (const auto i : Array) {
        std::cout << i << std::endl;
    }
    return 0;
}
