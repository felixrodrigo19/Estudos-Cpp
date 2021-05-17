/*
Construir um algoritmo que, dado um vetor A de 20 elementos, calcule e escreva:
S
*/

#include <iostream>
#include <vector>

#define TAM 20

using namespace std;

int main()
{
    vector<int> A;
    A.reserve(TAM);
    vector<int> S;
    int a = 0;
    int b = 19;

    for (int i = 0; i < A.capacity(); i++)
    {
        A.insert(A.begin(), i);
    }

    for (int z = 0; z < 9; z++)
    {
        S.insert(S.end(), ((A[a] - A[b]) * (A[a] - A[b])));
        a++;
        b--;
    }

    for (int i = 0; i < S.size(); i++)
    {
        cout << i << "\t";
        cout << S[i] << endl;
    }
    return 0;
}