#include <iostream>

using namespace std;

int main()
{
    int n = 0, soma = 0;
    cout << "Insira o valor de N: " << endl;
    cin >> n;
    for (int x = 0; x <= n; x++)
    {
        soma += x;
    }
    cout << "Total: " << soma << endl;
}