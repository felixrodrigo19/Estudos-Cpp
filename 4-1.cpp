/*
Dados 3 números inteiros, apresente esses números em ordem crescente.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, aux;

    cout << "Primeiro valor: " << endl;
    cin >> a;
    cout << "Segundo valor: " << endl;
    cin >> b;
    cout << "Terceiro valor: " << endl;
    cin >> c;

    if (b <= a)
    {
        aux = b;
        b = a;
        a = aux;
    }
    if (c <= a)
    {
        aux = c;
        c = a;
        a = aux;
    }
    if (c <= b)
    {
        aux = b;
        b = c;
        c = aux;
    }

    cout << a << " < " << b << " < " << c << endl;
}