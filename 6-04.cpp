#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    bool triangular = false;

    cout << "Insira o numero: " << endl;
    cin >> n;

    for (int x = 0; (x * (x + 1) * (x + 2)) <= n; x++)
    {
        if (x * (x + 1) * (x + 2) == n)
        {
            triangular = true;
        }
    }
    if (triangular == true)
        cout << "E triangular." << endl;
    else
        cout << "Nao e triangular." << endl;
}