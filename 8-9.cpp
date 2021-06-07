/*
O Departamento de Computação deseja saber se existem alunos cursando,
simultaneamente, as disciplinas D1 e D2. Existe disponível uma listagem com os números de
matrículas dos alunos das duas disciplinas. Após ler essas listagens verifique quem são os
alunos.
*/

#include <iostream>
#define TAM 30

using namespace std;

int main()
{
    int D1[TAM] = {};
    int D2[TAM] = {};

    for (int i = 0; i < TAM; i++)
    {
        D1[i] = rand() % 5;
        D2[i] = rand() % 5;
    }

    for (int c = 0; c < TAM; c++)
    {
        if (D1[c] == D2[c])
            cout << D1[c] << " e " << D2[c] << " estao matriculados(as) na mesma disciplina " << endl;
    }
}