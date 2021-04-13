/*
Deseja-se calcular a conta de consumo de energia elétrica de um consumidor. Para isto,
escreva um programa que leia o código do consumidor, o preço do kwh e a quantidade de kwh
consumido. Ao final, exiba o código do consumidor e o total a pagar.
*/
#include <iostream>

using namespace std;

int main()
{
    int cod_consumidor = 0;
    float preco_kwh = 0.0f;
    int qtdade_kwh = 0;
    float total_minimo = 11.20f;
    float total_pagar = 0.0f;

    cout << "Insira o código do consumidor: ";
    cin >> cod_consumidor;
    cout << "\nPreco do kwh: ";
    cin >> preco_kwh;
    cout << "\nQuantidade de kwh: ";
    cin >> qtdade_kwh;

    total_pagar = preco_kwh * qtdade_kwh;
    if (total_pagar > total_minimo)
    {
        cout << "\n"
             << "Código"
             << ".........."
             << "total a pagar R$ ";
        cout << "\n    "
             << cod_consumidor << ".........."
             << "R$ " << total_pagar << endl;
    }
}