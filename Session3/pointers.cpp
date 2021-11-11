#include<iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    cout << &num3 << endl; //imprime un num en hexadecimal

    int *addressOfNum1;  //es un apuntador una variable para guardar direcciones de memoria

    addressOfNum1 = &num1;

    *addressOfNum1 = 22;
    *addressOfNum1 *= 2;
    cout << *(addressOfNum1 - 10);

    cout << num1 << endl;  //esto es NULL   

}