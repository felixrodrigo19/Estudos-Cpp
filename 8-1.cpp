/*
Construir um algoritmo que leia um conjunto A de 20 elementos, 
construa e imprima outro conjunto B da seguinte forma:
- Os elementos de índices pares correspondem a A^3 .
- Os elementos de índices ímpares correspondem a A/2.
*/

#include <iostream>
#define TAM 20

using namespace std;

int main()
{
    int A[TAM] = {51, 84, 2, 48, 8, 6, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 54, 62, 48};
    int B[TAM];

    /* for (int x = 0; x < TAM; x++)
    {
        cout << "Insira o valor correspondente a posicao: " << x << endl;
        cin >> A[x];
    }
    */
    for (int x = 0; x < TAM; x++)
    {
        if (A[x] % 2 == 0)
        {
            B[x] = A[x] * A[x] * A[x];
        }
        else
        {
            B[x] = A[x] / 2;
        }
    }
    cout << "Conjunto B: " << endl;

    for (int x = 0; x < TAM; x++)
    {
        cout << B[x] << "\t";
    }
}
