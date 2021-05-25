/*
Dada uma matriz 10x3 com as notas de 10 alunos em 3 provas, faça um programa que
mostre um relatório com o número do aluno (número da linha) e a prova em que cada aluno
obteve menor nota. Ao final do relatório, mostre quantos alunos tiveram menor nota na P1,
quantos alunos tiveram menor nota na P2 e quantos alunos tiveram menor nota na P3.
*/

#include <iostream>
#define TAM_X 10
#define TAM_Y 3

using namespace std;


int main(){
    int p1 = 0, p2 = 0, p3 = 0;
    double matriz[TAM_X][TAM_Y] = {
        5, 10, 3,
        10,1, 4.5,
        9, 10, 10,
        10, 1, 6.5,
        5, 1, 4,
        8, 9, 9,
        7, 8, 10,
        4, 6, 5,
        2, 10, 5,
        10, 5, 10
    };

    for(int x = 0; x < TAM_X; x++){
    int menor = 11;
        for(int y = 0; y < TAM_Y; y++){
            if (matriz[x][y] < menor){
                menor = matriz[x][y];
                if (y == 0)
                {
                    p1++;
                }
                else if(y == 1){
                    p2++;
                }
                else {
                    p3++;
                }
            }           
        }
        cout << x << "\t" << menor << endl;
    }

    
    cout << "P1: \t" << p1 << endl;
    cout << "P2: \t" << p2 << endl;
    cout << "P3: \t" << p3 << endl;
}