#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declara��o das vari�veis do programa
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

    // Sa�da de dados
    cout << "�rea do paralelogramo: " << area << endl;

    return 0;
}