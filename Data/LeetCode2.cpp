#include <iostream>
#include <string>
void f() {}
int main(int argc, char const *argv[]) {
    std::string s{"abccbaacz"};
    // int i = 0;
    // while (s[i] != '\0') {
    //     std::cout << s[i] << "\t";
    //     i++;
    // }
    int a[10];
    using T = decltype(f);
    using T1= decltype(+a);
    for (auto i = 0; i < s.length(); i++) {
        int count = 0;
        char val = '\0';
        for (auto j = i + 1; j < s.length(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
            if (count >= 2) {
                val == s[i];
                break;
            }
        }
        return val;
    }
    return 0;
}
