#ifndef REVERSE_H
#define REVERSE_H
#include <math.h>
#include <string>
using namespace std;

class Reverse
{
public:
    Reverse();
    int reverseDigit(int value);//这块可能有些问题就不要了，因为最后输出的是字符串，所以把输入的数字变成字符串处理是最简单的
    string reverseString(string letters);
};

#endif // REVERSE_H
