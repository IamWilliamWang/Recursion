#include "fibonacci.h"

Fibonacci::Fibonacci()
{

}
/*原始的Fibonacci数列的递归求法*/
long Fibonacci::getFibonacciNumber(long n)
{
    if(n == 0 || n == 1)//如果n是0、1，则返回0、1
        return n;
    else//若不是，就返回Fi(n-1)+Fi(n-2)
        return getFibonacciNumber(n-1)+getFibonacciNumber(n-2);
}
