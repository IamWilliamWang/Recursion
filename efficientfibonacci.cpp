#include "efficientfibonacci.h"
#include "fibonacci.h"
EfficientFibonacci::EfficientFibonacci()
{

}

/*获得Fibonacci数*/
long EfficientFibonacci::getFibonacciNumber(long n)
{
    //如果this.fibonacciis储存了所要查询的数字,就直接返回表内的数字
    if((int)this->fibonaccis.size() > n)
        return this->fibonaccis.at(n);
    else//没找到的话就向表内追加数据到n，再返回n位置的数据
    {
        addNumbersToVector(n);
        return this->fibonaccis.at(n);
    }
}

//将数组一直存到请求的n这个位置，
void EfficientFibonacci::addNumbersToVector(long N)
{
    int lastN = this->fibonaccis.size()-1;
    /*声明了一个实例，与Fibonacci fi;不同的地方是*fi指向这个
     * 实例的地址而不是实例本身，在调用的时候使用->符号，而且在
     * 使用后可以用delete关键词将其删除，不会造成内存泄漏*/
    Fibonacci *fi = new Fibonacci();
    for(int i=lastN+1;i<=N;i++)
    {
        this->fibonaccis.push_back(fi->getFibonacciNumber(i));
    }
    delete fi;
}
