#include<iostream>

using namespace std;

int bigger()
{
    int input;
    int mayor = 0;

    for(int i = 0; i<10; i++)
    {
        cout << "write a value" << endl;
        cin >> input;
        if (input > mayor)
        {
            mayor = input;
        }
    }
    cout << "el valor mayor es " << mayor << endl;
    return mayor;
}

int  main()
{
    bigger();
}