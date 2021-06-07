/*
Elabore um programa para ler um conjunto de 100 números inteiros, contar e escrever
quantos deles são superiores a média aritmética do conjunto, e quantos são inferiores. Mostre
os resultados.
*/

#include <iostream>
#define TAM 100

using namespace std;

int main()
{
    int conj[TAM] = {};
    float media = 0;
    int val_aux = 0;

    for (int i = 0; i < TAM; i++)
        conj[i] = rand() % 100;

    for (int x = 0; x < TAM; x++)
        val_aux += conj[x];

    media = val_aux / TAM;

    cout << "Valor \tMedia\t" << endl;
    for (int c = 0; c < TAM; c++)
    {
        if (conj[c] >= media)
            cout << conj[c] << " E maior " << media << endl;
        else
            cout << conj[c] << " E menor " << media << endl;
    }
}