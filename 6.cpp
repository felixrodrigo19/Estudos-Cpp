/*
Foram digitadas três linhas, onde cada uma das linhas contém o nome e a nota de um
aluno. Escreva um programa que leia essas informações e monte uma tabela onde a primeira
coluna é o nome e a segunda coluna é a nota.
*/

#include <iostream>
#define TAM 3
#define SIZE 30

using namespace std;

int main()
{
    string nome[TAM];
    float nota[TAM];
    int aux = 0;

    for (int x = 0; x < TAM; x++)
    {
        cout << "Digite o nome do aluno: \n";
        cin >> nome[x];

        cout << "Digite a nota: \n";
        cin >> nota[x];
        if (nota[x] > 10)
        {
            nota[x] = 10;
        }
    }

    cout << "\nNome" << string(SIZE, ' ') << "Nota\n\n";
    for (int i = 0; i < TAM; i++)
    {
        aux = (SIZE - nome[i].size());
        cout << nome[i] << string(aux, ' ') << nota[i] << "\n";
    }
}