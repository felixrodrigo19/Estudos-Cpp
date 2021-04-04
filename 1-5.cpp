/*
Escreva um programa para calcular a área de um triângulo, sendo dados a sua base e a
sua altura.
*/

#include <iostream>

using namespace std;

int main()
{
    float b = 0;
    float h = 0;
    float a = 0;

    cout << "Base: \n";
    cin >> b;
    cout << "Altura: \n";
    cin >> h;

    if ((b >= 0) && (h >= 0))
    {
        a = ((b*h)/2);
        cout << "Area: " << a << "\n";
    }
    else{
        cout << "Impossivel calcular a area. \n";
    }
}
