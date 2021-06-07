/*
Desenvolva um programa que efetue a leitura de 10 elementos e os coloque num vetor A.
No final apresente o total da soma de todos os elementos que sejam ímpares.
*/

#include <iostream>

using namespace std;

int main()
{
    int A[10] = {};
    int total = 0;

    for (int x = 0; x < 10; x++)
    {
        cout << "Digite o " << x << ": valor. " << endl;
        cin >> A[x];
    }

    for (int j = 0; j < 10; j++)
    {
        if (A[j] % 2 == 1)
        {
            total += A[j];
        }
    }

    cout << "total: " << total << endl;
}