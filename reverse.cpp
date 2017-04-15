#include "reverse.h"

Reverse::Reverse()
{

}

/*反转数字，核心思想同下面的函数*/
int Reverse::reverseDigit(int value)
{
    if(value==0)
        return value;//value=0
    int num = value;
    int i;
    for(i=0;num>9;i++)
        num/=10;
    value = value - pow(10,i)*num;
    value = reverseDigit(value);
    value = value*10 + num;
    return value;
}

/*由递归使用的是栈这个特点，先把第一个字
 * 母取出然后当取完则从后向前还原字符*/
string Reverse::reverseString(string letters)
{
    if(letters.empty())
        return letters;
    char thisCh = letters.at(0);
    letters.erase(0,1);
    letters = reverseString(letters);
    letters += thisCh;
    return letters;
}
