/*
Escreva um programa para ler uma temperatura dada na escala Fahrenheit e exibir o
equivalente em Celsius.
*/

#include <iostream>

using namespace std;

float calc_temp(float temperatura)
{
    cout << temperatura << endl;
    float f = ((temperatura - 32) / 1.8000);
    return f;
}

int main()
{
    float temperatura = 0;

    cout << "Insira a temperatura em °F: \n";
    cin >> temperatura;
    cout << "A temperatura em °C e " << calc_temp(temperatura) << endl;
}
