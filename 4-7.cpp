/*
Faça um programa para calcular a conta final de um hóspede de um hotel fictício
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char nome[255], tipo;
    int diarias;
    float consumo, valorDiaria, totalDiarias, subtotal, taxa, total;
    cout << "Nome: ";
    cin >> nome;
    cout << "Tipo: ";
    cin >> tipo;
    cout << "Diarias: ";
    cin >> diarias;
    cout << "Consumo: ";
    cin >> consumo;
    switch (tipo)
    {
    case 'A':
        valorDiaria = 150;
        break;
    case 'B':
        valorDiaria = 100;
        break;
    case 'C':
        valorDiaria = 75;
        break;
    default:
        valorDiaria = 50;
    }
    totalDiarias = diarias * valorDiaria;
    subtotal = totalDiarias + consumo;
    taxa = 0.1 * subtotal;
    total = subtotal + taxa;
    cout << " Nome = " << nome << endl;
    cout << " Tipo = " << tipo << endl;
    cout << " Diarias = " << diarias << endl;
    cout << " Valor Diaria = " << valorDiaria << endl;
    cout << "Total Diarias = " << totalDiarias << endl;
    cout << " Consumo = " << consumo << endl;
    cout << " Subtotal = " << subtotal << endl;
    cout << " Taxa = " << taxa << endl;
    cout << " Total Geral = " << total << endl;
    return 0;
}