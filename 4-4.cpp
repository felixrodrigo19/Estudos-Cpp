/*
Escreva um programa que determine o grau de obesidade de uma pessoa, sendo fornecido
o peso e a altura da pessoa.
*/

#include <iostream>

using namespace std;

int main()
{
    float peso, altura, massa;

    cout << "Insira o peso em kg: ";
    cin >> peso;
    cout << "\nInsira a altura em m: ";
    cin >> altura;

    massa = (peso / (altura * altura));

    if (massa < 26)
    {
        cout << "\nGRAU DE OBESIDADE: normal" << endl;
    }
    else if (massa >= 26 && massa < 30)
    {
        cout << "\nGRAU DE OBESIDADE: Obeso" << endl;
    }
    else
    {
        cout << "\nGRAU DE OBESIDADE: Obeso Morbido" << endl;
    }
}