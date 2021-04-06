/*
Suponha que se tenha uma lista com o nome e o preço de 3 produtos (não precisa ler essa
tabela do teclado). O programa deve mostrar a tabela com o nome e o preço dos produtos para
o usuário. O usuário deverá entrar com a quantidade de cada produto que ele quer. No final, o
programa deverá gerar uma tabela com as seguintes colunas: Nome do produto, quantidade do
produto, valor unitário do produto, subtotal do produto. Além disso, mostrar o total da compra.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#define PRECO 3
constexpr size_t size = 1000;

using namespace std;

int main()
{
    int pos = 0;
    int aux = 0, qtdade;
    bool continuar = true;
    vector<int> produtos = {{1}, {2}, {3}};
    int lista_produtos[size];
    float precos[PRECO] = {{5.5}, {3.25}, {1.25}};
    float preco_aux[size];
    int qtdade_aux[size];
    float total = 0;
    cout << "Produto"
         << "....."
         << "Preco" << endl;
    for (int x = 0; x < PRECO; x++)
    {
        cout << produtos[x] << ".........." << precos[x] << endl;
    }
    while (continuar)
    {

        cout << "Insire o produto que deseja comprar ou 999 para fechar a compra " << endl;
        cin >> aux;
        if (find(produtos.begin(), produtos.end(), aux) != produtos.end())
        {
            cout << "insira a quantidade: " << endl;
            cin >> qtdade;
            qtdade_aux[pos] = qtdade;
            lista_produtos[pos] = aux;
            preco_aux[pos] = precos[aux];
            total += (precos[aux] * qtdade);
            pos++;
        }

        else if (aux == 999)
        {
            cout << "Nome do produto"
                 << " - "
                 << "quantidade"
                 << " - "
                 << "valor unitário"
                 << " - "
                 << "subtotal"
                 << " - "
                 << endl;
            for (int x = 0; x < pos; x++)
            {

                cout << lista_produtos[x] << " - " << qtdade_aux[x] << " - " << preco_aux[x]
                     << " - " << qtdade_aux[x] * preco_aux[x] << endl;
            }
            cout << "Total: " << total << endl;
            pos = 0;
            break;
        }
        else
        {
            cout << "Produto nao encontrado. " << endl;
        }
    }
}