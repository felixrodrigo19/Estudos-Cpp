#include <iostream>

using namespace std;

int main()
{
    double fulano = 1.50, ciclano = 1.10, crescimento_fulano = 0.02, crescimento_ciclano = 0.03;
    int contador = 0;

    while (ciclano <= fulano)
    {
        if (ciclano <= fulano)
        {
            fulano += crescimento_fulano;
            ciclano += crescimento_ciclano;
            contador += 1;
        }
    }
    cout << "Apos " << contador << "X o Ciclano é maior que o Fulano." << endl;
}