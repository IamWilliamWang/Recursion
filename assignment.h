#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#define ERROR -1
#include <iostream>
#include <sstream>
#include "reverse.h"
#include "fibonacci.h"
#include "efficientfibonacci.h"

class Assignment
{
public:
    Assignment();
    void input();
    void first();
    void second();
    void third();
    void fourth();
private:
    int convertToInt(string str);
    int reNum,fi,eFi;
    string *inputs;
    Reverse *reverse;//关于指针的说明我写在EfficientFibonacci.cpp
    Fibonacci *fibonacci;
    EfficientFibonacci *efficientFibonacci;
};

#endif // ASSIGNMENT_H
