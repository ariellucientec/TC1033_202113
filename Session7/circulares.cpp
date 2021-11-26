#include<iostream>
using namespace std;

int getNumberOfDigits(int num)
{
    int cont = 0;
    int res;
    while (num>0)
    {
        res = num%10;
        num = num/10;
        cont++;
    }
    return cont;
}

bool isCircularPrime(int num)
{
    for(int i=0; i<numDigits)
}

int main()
{
    cout << getNumberOfDigits(235);
}