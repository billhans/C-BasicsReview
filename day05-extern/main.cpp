#include <iostream>
#include "global.h" // 声明可以重复

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "globbal name is " << global_name << std::endl;
    std::cout << "global age is " << global_age << std::endl;
    // 调用全局函数
    print_global();
    return 0;
}
