/* Escreva um programa para calcular e exibir o comprimento de uma circunferência, sendo
dada o valor de seu raio. */

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    float raio = 0;
    cout << "Digite o raio: \n";
    cin >> raio;
    if (raio < 0)
    {
        cout << "Raio deve ser maior que zero. " << endl;
    }
    else
    {
        float calc_comprimento = [](float raio) { return (raio * 2) * 3.1415926535; }(raio);

        cout << "O comprimento da circuferencia e: " << calc_comprimento << endl;
    }
}
