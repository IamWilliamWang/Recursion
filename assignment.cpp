#include "assignment.h"

Assignment::Assignment()
{
    //先声明类的实例
    reverse = new Reverse();//关于指针的说明我写在EfficientFibonacci.cpp
    fibonacci = new Fibonacci();
    efficientFibonacci = new EfficientFibonacci();
}

/**
 * 这个函数用来将输入的字符串转换成整形
 * 如果转换失败，就返回ERROR
 */
int Assignment::convertToInt(string str)
{
    for(int i=0;i<(int)str.size();i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            continue;
        return ERROR;
    }
    int result;
    stringstream ss;
    ss << str;
    ss >> result;
    return result;
}

void Assignment::input()
{
    //输入四个变量

    inputs = new string[4];//这是输入的四个string
    for(int i=0;i<4;i++)
        cin >> inputs[i];
}

void Assignment::first()
{
    //将第一个变量转换成int值
    reNum=convertToInt(inputs[0]);
    if(reNum < 0)//如果第一个不是数字，就报错
        cout << "ERROR ";
    else//若是数字，就输出逆向结果
       cout << reverse->reverseDigit(reNum) << " ";
}

void Assignment::second()
{
    //将第二个变量转换成int值，并输出逆向结果
    cout << reverse->reverseString(inputs[1]) << " ";
}

void Assignment::third()
{
    //将第三个变量转换成int值
    fi=convertToInt(inputs[2]);
    if(fi < 0)
        cout << "ERROR ";
    else
        cout << fibonacci->getFibonacciNumber((long)fi) << " ";
}

void Assignment::fourth()
{
    //将第四个变量转换成int值
    eFi = convertToInt(inputs[3]);
    if(eFi < 0)
        cout << "ERROR ";
    else
        cout << efficientFibonacci->getFibonacciNumber(eFi) << endl;
}
