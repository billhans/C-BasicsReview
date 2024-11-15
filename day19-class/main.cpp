#include <iostream>
#include "student.h"
int main() {
    system("chcp 65001");
    Student student1;
    student1.ChangeName("zack");
    student1.ChangeNum("10001");
    student1.ChangeAge(36);
    student1.ChangeMoney(5);
    std::cout << "Money: " << student1.GetMoney() << std::endl;

    std::cout << "Name: " << student1.GetName() << std::endl;
    std::cout << "Num: " << student1.GetNum() << std::endl;
    std::cout << "Age: " << student1.GetAge() << std::endl;

    std::cout << std::endl;
    Student student2;
    std::cout << "Name: " << student2.GetName() << std::endl;
    std::cout << "Num: " << student2.GetNum() << std::endl;
    std::cout << "Age: " << student2.GetAge() << std::endl;
    std::cout << "Money: " << student2.GetMoney() << std::endl;
    student2.ChangeMoney(10);

    Student student3("Alex", 33,"10002");
    std::cout << "Name: " << student3.GetName() << std::endl;
    std::cout << "Num: " << student3.GetNum() << std::endl;
    std::cout << "Age: " << student3.GetAge() << std::endl;
    std::cout << "Money: " << student3.GetMoney() << std::endl;

    Student student4(student1);
    std::cout << "Name: " << student4.GetName() << std::endl;
    std::cout << "Num: " << student4.GetNum() << std::endl;
    std::cout << "Age: " << student4.GetAge() << std::endl;
    std::cout << "Money: " << student4.GetMoney() << std::endl;

    Student student5(std::move(student1));
    std::cout << "Name: " << student5.GetName() << std::endl;
    std::cout << "Num: " << student5.GetNum() << std::endl;
    std::cout << "Age: " << student5.GetAge() << std::endl;
    std::cout << "Money: " << student5.GetMoney() << std::endl;


    std::cout << "Money: " << student1.GetMoney() << std::endl;

    std::cout << "Name: " << student1.GetName() << std::endl;
    std::cout << "Num: " << student1.GetNum() << std::endl;
    std::cout << "Age: " << student1.GetAge() << std::endl;

    return 0;
}
