/*
Elabore um programa que leia dois números inteiros, calcule e mostre o primeiro número
multiplicado por 5 e o segundo número somado com 10.
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int multiplicado = 0;
    int somado = 0;

    cout << "Digite o primeiro numero: " << endl;
    cin >> a;
    cout << "Digite o segundo numero: " << endl;
    cin >> b;

    multiplicado = a * 5;
    somado = b + 10;

    cout << a << " multiplicado por 5 e: " << multiplicado << endl;
    cout << b << " somado por 10 e: " << somado << endl;
}