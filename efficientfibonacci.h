#ifndef EFFICIENTFIBONACCI_H
#define EFFICIENTFIBONACCI_H
#include <vector>

using namespace std;

class EfficientFibonacci
{
public:
    EfficientFibonacci();
    long getFibonacciNumber(long n);
private:
    void addNumbersToVector(long n);
    vector<long> fibonaccis;

};

#endif // EFFICIENTFIBONACCI_H
