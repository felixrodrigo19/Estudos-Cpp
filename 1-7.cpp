/*
Elabore um programa que leia dois números inteiros, calcule o seu produto e mostre o
resultado.
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Digite o primeiro numero: " << endl;
    cin >> a;
    cout << "Digite o segundo numero: " << endl;
    cin >> b;

    c = a * b;

    cout << "O produto de " << a << " * " << b << " e: " << c << endl;
}