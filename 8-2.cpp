/*
Ler dois vetores, o A com 20 elementos e o B com 30 elementos. Construir um vetor C
sendo este a junção dos outros dois vetores. Assim, C terá 50 elementos.
*/

#include <iostream>
#include <stdlib.h>
#include <vector>

#define TAM_A 20
#define TAM_B 30

using namespace std;

int main()
{
    vector<int> A = {17, 89, 46, 54, 89, 31, 3, 74, 53, 40, 52, 15, 4, 54, 63, 34, 30, 93, 58, 57};
    vector<int> B = {99, 73, 73, 64, 66, 86, 12, 97, 58, 69, 16, 85,
                     14, 58, 77, 28, 95, 2, 8, 26, 89, 42, 89, 62, 10, 26, 13, 77, 78, 78};
    vector<int> C;

    C.insert(C.end(), A.begin(), A.end());
    C.insert(C.end(), B.begin(), B.end());
    for (int i = 0; i < TAM_A + TAM_B; i++)
    {
        cout << i << " : \t" << C[i] << endl;
    }
}