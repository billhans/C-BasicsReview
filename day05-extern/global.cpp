#include "global.h"
#include <string>
#include <iostream>
// 定义全局变量
std::string global_name = "John Doe";
int global_age = 30;

//实现全局函数
void print_global() {
    std::cout << "global function called" << std::endl;
    std::cout << "global_name : " << global_name << std::endl;
    std::cout << "global_age : " << global_age << std::endl;
}
