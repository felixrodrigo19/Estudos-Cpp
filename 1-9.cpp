/*
Elabore um programa que sabendo as notas de média de provas (MP), trabalhos (MT) e
exercícios (ME) de um aluno calcule a sua média final sendo:
MF = 0.7 * MP + 0.2 * MT + 0.1 * ME
*/
#include <iostream>

using namespace std;

int main()
{
    float mp = 0.0f;
    float mt = .0f;
    float me = .0f;
    float mf = .0f;

    cout << "Insira a media das provas: " << endl;
    cin >> mp;
    cout << "Insira a media dos trabalhos: " << endl;
    cin >> mt;
    cout << "Insira a media dos exercicios: " << endl;
    cin >> me;

    mf = ((0.7 * mp) + (0.2 * mt) + (0.1 * me));

    cout << "A media final: " << mf << endl;
}