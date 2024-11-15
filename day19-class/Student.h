//
// Created by secon on 2024/11/10.
//

#ifndef DAY19_CLASS_STUDENT_H
#define DAY19_CLASS_STUDENT_H
#include <string>
#include <iostream>
#include <thread>

struct StudentStruct{
    std::string name;
    int age;
    std::string num;
};

class Student {
public:
    Student();
    Student(const std::string& name, int age, const std::string& num);
    Student(const Student & student);
    Student(Student && student);
    ~Student();
    void ChangeName(const std::string& name){
        _name = name;
    }

    void ChangeAge(int age);

    void ChangeNum(const std::string& num);

    std::string GetName() const;

    int GetAge() const;

    std::string GetNum() const;

    void ChangeMoney(int money);
    int GetMoney();

private:
    std::string _name;
    int _age;
    std::string _num;
    //班费
    static int _money;
    std::thread _thread;
    int * _data;
};



#endif //DAY19_CLASS_STUDENT_H
