/*
Leia uma variável de 50 elementos do tipo caractere e verifique se existem elementos
iguais a um determinado caractere fornecido pelo usuário. Se existirem escreva as posições
em que estão armazenados.
*/

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string letters = "";
    int pos = 0;
    letters.reserve(50);

    cout << "Digite os caracteres. " << endl;
    cin >> letters;

    if (letters.size() > 50)
    {
        for (int x = 50; x < letters.size(); x++)
        {
            letters = letters.erase(x);
        }
    }
    cout << "caracter: " << endl;
    for (int i = 0; i < letters.size(); i++)
    {
        for (int j = 1; j < letters.size(); j++)
        {
            if (letters[i] == letters[j])
            {
                cout << letters[i] << ": \t" << j << endl;
            }
        }
    }
}