// Escreva um programa que leia um número inteiro positivo e exiba o dobro do mesmo.

#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    cout << "Digite um numero: \n";
    cin >> number;

    if (number >= 0)
    {
        number *= 2;

        cout << "O dobro é " << number << "\n";
    }
    else
    {
        cout << "O numero deve ser inteiro e positivo. \n";
    }
}
