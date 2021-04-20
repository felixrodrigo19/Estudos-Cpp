#include <iostream>

using namespace std;

int main()
{
    int soma = 0;

    for (int x = 0; x < 500; x++)
    {
        if (x % 2 == 0)
        {
            soma = soma;
        }
        else
        {
            soma += x;
        }
    }
    cout << "Soma: " << soma << endl;
}