#include <iostream>
/*
内置类型 int char float double bool 
复合类型 array struct union enum class pointer reference
*/
int main() {
    int a = 100;
    int &b = a; // 引用在被创建的时候必须初始化

    std::cout << "a address is : " << &a << std::endl;
    std::cout << "b address is : " << &b << std::endl;

    a = 200;
    std::cout << "a and b value " << a << ' ' << b << std::endl;
    
    b = 300;
    std::cout << "a and b value " << a << ' ' << b << std::endl;

    int c = a;
    c = 400;
    std::cout << "a b c value " << a << ' ' << b << ' ' << c << std::endl;
    std::cout << "c address is : " << &c << std::endl;
    
    return 0;
}