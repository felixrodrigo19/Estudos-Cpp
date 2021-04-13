/*
Escrever um programa que leia o nome e o salário atual de um jogador, e exiba o nome, o
salário atual e o salário reajustado.
*/
#include <iostream>

using namespace std;

void reajuste(float sala, float porc, string nome)
{
    float reajuste = (sala + (sala * porc));
    cout << "         \nJogador: " << nome << endl;
    cout << "     salario atual: " << sala << endl;
    cout << "salario reajustado: " << reajuste << endl;
}

int main()
{
    string nome;
    float salario, salario_reajustado;

    cout << "Nome do jogador: " << endl;
    cin >> nome;
    cout << "Salario: ";
    cin >> salario;

    if (salario <= 1000)
    {
        reajuste(salario, 0.2f, nome);
    }
    else if (salario > 1000 && salario < 5000)
    {
        reajuste(salario, 0.1f, nome);
    }
    else
    {
        reajuste(salario, 0.0f, nome);
    }
}