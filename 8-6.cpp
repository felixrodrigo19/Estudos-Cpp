/*
Elabore um programa para ler uma sequência de 30 caracteres. Em seguida localize as
vogais e as troque pelo símbolo @. Mostre a nova sequência.
*/

#include <iostream>
#include <stdio.h>
#include <string.h>

#define TAM 30

using namespace std;

void change_letter(char *c)
{
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    for (int x = 0; x < TAM; x++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (c[x] == vowels[j])
            {
                c[x] = '@';
            }
        }
    }

    for (int i = 0; i < TAM; i++)
    {
        cout << c[i];
    }
    cout << endl;
}

int main()
{
    char caract[30] = {};

    cout << "Insira os caracteres. " << endl;
    cin >> caract;

    if (strlen(caract) > TAM)
    {
        for (int i = 0; i < TAM; i++)
        {
            caract[i] = caract[i];
        }
    }
    change_letter(caract);
}