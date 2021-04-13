/*
Escreva um algoritmo que leia dois números e exiba o maior deles.
*/

#include <iostream>
using namespace std;

int main()
{
    float x, y;

    cout << "Digite o valor 1: " << endl;
    cin >> x;
    cout << "Digite o valor 2: " << endl;
    cin >> y;

    if (x > y)
    {
        cout << "O valor " << x << " e maior." << endl;
    }
    else if (y > x)
    {
        cout << "O valor " << x << " e maior." << endl;
    }
    else
    {
        cout << "O valor " << x << " e igual ao valor " << y << endl;
    }
}