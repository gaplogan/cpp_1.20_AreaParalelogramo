#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis do programa
    double b, h, area;

    // Entrada de dados
    cout << "Digite o valor da base: ";
    cin >> b;
    b = abs(b); // Garante base positiva
    cout << "Digite o valor da altura: ";
    cin >> h;
    h = abs(h); // Garante base positiva

    // Processamento de dados
    area = b * h;

    // Saída de dados
    cout << "Área do paralelogramo: " << area << endl;

    return 0;
}