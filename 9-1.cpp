/*
Faça uma função que receba três números inteiros: a, b e c, onde a é maior que 1. A
função deve somar todos os inteiros entre b e c que sejam divisíveis por a (inclusive b e c) e
retorne o resultado para a função principal.
*/

#include <iostream>

using namespace std;

int div_vals(int a, int b, int c)
{
    int menor = 0;
    int maior = 0;
    int soma = 0;

    if (b < c)
    {
        menor = b;
        maior = c;
    }
    else
    {
        menor = c;
        maior = b;
    }

    for (int x = menor; x <= maior; x++)
    {
        cout << "Teste: " << x << endl;

        if (x % a == 0)
        {
            soma += x;
        }
    }
    return soma;
}

int main()
{
    int val_a = 0;
    int val_b = 0;
    int val_c = 0;
    int result = 0;

    cout << "Digite o valor de A" << endl;
    cin >> val_a;

    cout << "Digite o valor de B" << endl;
    cin >> val_b;

    cout << "Digite o valor de C" << endl;
    cin >> val_c;

    if (val_a > 1)
    {
        result = div_vals(val_a, val_b, val_c);
        cout << "Resultado: " << result << endl;
    }
    return 0;
}