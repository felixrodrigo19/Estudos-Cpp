/*
Faça uma rotina que receba dois números e calcule a soma, a subtração, a multiplicação e
a divisão desses números. O cálculo só deve ser feito se o primeiro número for maior ou igual
ao segundo, senão retorne um erro. Faça um programa para testar a rotina.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

void calcs(int a, int b)
{
    if (a < b)
    {
        cout << "Erro" << '\a' << endl;
        return;
    }

    cout << a << "+" << b << " = " << a + b << endl;
    cout << a << "-" << b << " = " << a - b << endl;
    cout << a << "/" << b << " = " << a / b << endl;
    cout << a << "*" << b << " = " << a * b << endl;
}

int main()
{
    int val_a = 0;
    int val_b = 0;

    cout << "Digite o valor de A" << endl;
    cin >> val_a;

    cout << "Digite o valor de B" << endl;
    cin >> val_b;

    calcs(val_a, val_b);
    return 0;
}