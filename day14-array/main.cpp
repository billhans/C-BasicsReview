#include <iostream>
#include <cstring>
#include <vector>

int main() {
    //不是常量表达式
    unsigned cnt = 42;
    //常量表达式, 用constexpr修饰
    constexpr unsigned sz = 42;
    //包含10个整数的数组
    int arr[10];
    //含有42个整数指针的数组
    int *parr[sz];
    //定义字符串数组，错误！cnt不是常量表达式,但是部分编译器可通过
    //std::string bad[cnt];

    {
        const unsigned sz = 3;
        // 含有3个元素的数组，元素值分别是0，1，2
        int ial[sz] = {0,1,2};
        // 维度是3的数组
        int a2[] = {0,1,2};
        //等价于a3[] = {0,1,2,0,0}
        int a3[5] = {0,1,2};
        //等价于a4[] = {"hi","bye",""}
        std::string a4[3] = {"hi","bye"};
        //错误，初始值过多
        //int a5[2] = {0,1,2};
    }

    {
        //含有三个整数的数组
        int a[] = {0,1,2};
        // 错误，不允许使用一个数组初始化另一个数组
        // int a2[] = a;
    }

    {
        //ptrs是含有10个整数指针的数组
        int *ptrs[10];
        //错误, 不存在引用的数组
        //int& refs[10] = /*?*/;
        //Parray指向一个含有10个整数的数组
        int arr[10] ={0,1,2,3,4,5,6,7,8,9};
        int (*Parray)[10] = &arr;
        //arrRef 引用一个含有10个整数的数组
        int (&arrRef)[10] = arr;
    }

    {
        int arr[10] ={0,1,2,3,4,5,6,7,8,9};
        for(size_t i = 0; i < sizeof(arr)/sizeof(int); ++i){
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    {
        int arr[10] ={0,1,2,3,4,5,6,7,8,9};
        // 第一个元素地址
        std::cout << "first element: address is " << &arr[0] << std::endl;
        // 数组首地址
        std::cout << "arr address is " << arr << std::endl;
        // 数组首地址
        std::cout << "arr address is " << &arr << std::endl;

        //等价于 int * first_elem_addr = &arr[0];
        int* first_elem_addr = arr;
        std::cout << "first element address is " << first_elem_addr << std::endl;

        //ia2是一个int类型的指针,指向ia的第一个元素
        auto ia2(arr);

        //ia3是一个含有10个整数的数组
        decltype(arr) ia3 = {0,1,2,3,4,5,6,7,8,9};
        //错误，不能用整数指针给数组赋值
        //ia3 = ia2;
    }

    {
        int arr[10] = {0,1,2,3,4,5,6,7,8,9};
        //p指向arr的第一个元素
        int *p = arr;
        //p指向arr[1]
        ++p;
    }

    {
        int arr[10] = {0,1,2,3,4,5,6,7,8,9};
        // e指向arr[10],也就是最后一个元素的下一个位置
        int *e = arr+10;

        for(int* b = arr; b != e; ++b){
            std::cout << *b << " ";
        }

        std::cout << std::endl;
    }

    {
        int ia[] = {0,1,2,3,4,5,6,7,8,9};
        int * beg = std::begin(ia);
        int * end = std::end(ia);
        for(auto it = beg; it != end; ++it){
            std::cout << *it << " ";
        }

        std::cout << std::endl;
    }

    {
        constexpr size_t sz = 5;
        int arr[sz] = {0,1,2,3,4};
        //等价于int *ip = &arr[0];
        int *ip = arr;
        //ip2
        int * ip2 = ip + 4;

        //计算数组元素个数
        auto n = std::end(arr) - std::begin(arr);
        std::cout << "n is " << n << std::endl;
    }

    {
        int ia[] = {0,2,4,6,8};
        int last = *(ia+4);
        std::cout << "last is " << last << std::endl;
    }

    {
        int ia[] = {0,2,4,6,8};
        //等价于ia[0] + 4
        int value = *ia + 4;
    }

    {
        int ia[] = {0,2,4,6,8};
        //等价于ia[1]
        int value = *(ia+1);
    }

    {
        char ca[] = {'C','P','P'};
        //有风险，因为ca没有以\0结束，所以strlen可能访问越界
        int len = strlen(ca);
        std::cout << "len is " << len << std::endl;
    }

    {
        std::string s1 = "A string example";
        std::string s2 = "A different string example";
        if(s1 < s2){
            std::cout << "s1 is less than s2" << std::endl;
        }else{
            std::cout << "s1 is not less than s2" << std::endl;
        }

        const char ca1[] = "A string example";
        const char ca2[] = "A different string example";
        //未定义的，视图比较两个无关地址
        if(ca1 < ca2){

        }

        //和两个string比较大小功能一样
        if(strcmp(ca1, ca2) < 0){
            std::cout << "ca1 is less than ca2" << std::endl;
        }else{
            std::cout << "ca1 is not less than ca2" << std::endl;
        }
    }

    {
        char dest[20] = "Hello, "; // 确保有足够的空间
        const char *src = "World!";

        // 使用strcpy
        strcpy(dest + strlen(dest), src); // 从dest的末尾开始复制src
        std::cout << "After strcpy: " << dest << std::endl;
    }

    {
        // 另一个例子，直接使用strcat
        const char *src = "World!";
        char anotherDest[40] = "Hello, ";
        strcat(anotherDest, src);
        std::cout << "After strcat: " << anotherDest << std::endl;
    }

    {
        std::string s("Hello World");
        //注意返回const char *
        const char *str = s.c_str();
    }

    {
        int int_arr[] = {0,1,2,3,4,5};
        std::vector<int> ivec(std::begin(int_arr), std::end(int_arr));
        for(auto e : ivec){
            std::cout << e << " ";
        }
    }
    return 0;
}
