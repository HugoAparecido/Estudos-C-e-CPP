#include <iostream>
using namespace std;
int main()
{
    int numeroInteiro = 10;
    double numeroDecimal;

    // Conversão implícita de int para double
    numeroDecimal = numeroInteiro;

    cout << "Número inteiro: " << numeroInteiro << endl;
    cout << "Número decimal (após conversão implícita): " << numeroDecimal << endl;

    double outroDecimal = 3.14;
    int outroInteiro;

    // Conversão implícita de double para int (truncamento da parte decimal)
    outroInteiro = outroDecimal;

    cout << "Número decimal: " << outroDecimal << endl;
    cout << "Número inteiro (após conversão implícita - truncado): " << outroInteiro << endl;

    return 0;
}