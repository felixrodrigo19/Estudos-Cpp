// 1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Faça um programa que receba 3 notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.
//

#include <iostream>

using namespace std;
int main()
{
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	float peso1 = 0;
	float peso2 = 0;
	float peso3 = 0;
	float media = 0;

	cout << "Nota 1:\n";
	cin >> nota1;
	cout << "Peso 1:\n";
	cin >> peso1;
	cout << "Nota 2:\n";
	cin >> nota2;
	cout << "Peso 2:\n";
	cin >> peso2;
	cout << "Nota 3:\n";
	cin >> nota3;
	cout << "Peso 3:\n";
	cin >> peso3;

	media = ((peso1 * nota1) + (peso2 + nota2) + (peso3 + nota3)) / (peso1 + peso2 + peso3);
	cout << "Media ponderada e: " << media << "\n";
}
