#include <iostream>
#include <cstring>

void caculate() {
    int a = 10;
    int b = 20;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a % b = " << a % b << std::endl;

    float c = 10.5;
    float d = 20.3;
    std::cout << "c + d = " << c + d << std::endl;
    std::cout << "c - d = " << c - d << std::endl;
    std::cout << "c * d = " << c * d << std::endl;
    std::cout << "c / d = " << c / d << std::endl;

    double e = 10.5;
    double f = 20.3;
    std::cout << "e + f = " << e + f << std::endl;
    std::cout << "e - f = " << e - f << std::endl;
    std::cout << "e * f = " << e * f << std::endl; 
     std::cout << "e / f = " << e / f << std::endl;
    
    char g = 'a';
    char h = 'b';
    std::cout << "g + h = " << (int)(g + h) << std::endl;
    std::cout << "g - h = " << (int)(g - h) << std::endl;
    std::cout << "g * h = " << (int)(g * h) << std::endl;
    std::cout << "g / h = " << (int)(g / h) << std::endl;
}

void sizeofnum() {
    std::cout << "Size of char: "        << sizeof(char) <<      " bytes\n";
    std::cout << "Size of int: "         << sizeof(int) <<       " bytes\n";
    std::cout << "Size of float: "       << sizeof(float) <<     " bytes\n";
    std::cout << "Size of double: "      << sizeof(double) <<    " bytes\n";
    std::cout << "Size of long long: "   << sizeof(long long) << " bytes\n";
}

int globalVar = 22;

void func1() {
    std::cout << "Inside func: globalVar = " << globalVar << std::endl;
}

void func2() {
    int localVar = 10;
    std::cout << "Inside func: localVar = " << localVar << std::endl;
}

namespace MyNamespace {
    int namespaceVar = 20;

    void printVar() {
        std::cout << "Inside MyNamespace: namespaceVar = " << namespaceVar << std::endl;
    }
}

class MyClass {
public:
    int classVar;

    void printVar() {
        std::cout << "Inside MyClass classVar = " << classVar << std::endl;
    }
};

void func3() { // 块级作用域
    {
        int blockVar = 5;
        std::cout << "Inside block: blockVar = " << blockVar << std::endl;
    }
}

int globalVar2 = 10;
static int staticVar = 20;

void func4() {
    int localVar = 30;

    static int staticLocalVar = 40;

    std::cout << "Inside func:" << std::endl;
    std::cout << "localVar = " << localVar << std::endl;
    std::cout << "staticLocalVar = " << staticLocalVar << std::endl;

    int* heapVar = new int(50);

    std::cout << "heapVar = " << *heapVar << std::endl;

    delete heapVar;
}

int main() {
    caculate();
    std::cout << std::endl;
    sizeofnum();
    std::cout << std::endl;

    std::cout << "Inside main: globalVar = " << globalVar << std::endl;

    func1();
    func2();
    std::cout << "Outside MyNamespace: namespaceVar = " << MyNamespace::namespaceVar << std::endl;
    MyNamespace::printVar();

    MyClass obj;
    obj.classVar = 30;
    obj.printVar();

    func3();
    std::cout << std::endl;

    std::cout << "Inside main:" << std::endl;
    std::cout << "globalVar = " << globalVar << std::endl;
    std::cout << "staticVar = " << staticVar << std::endl;
    std::cout << std::endl;
    
    func4();

    const char* strConst = "Hello, World!";
    std::cout << "strConst = " << strConst << std::endl;
    std::cout << "Length of strConst = " << strlen(strConst) << std::endl;

    return 0;
}