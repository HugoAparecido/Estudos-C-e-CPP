#include <iostream>

int main()
{
    double numeroDecimal = 3.7;
    int numeroInteiro;

    // C-style cast
    numeroInteiro = (int)numeroDecimal;

    std::cout << "Número decimal: " << numeroDecimal << std::endl;
    std::cout << "Número inteiro (após C-style cast): " << numeroInteiro << std::endl;

    return 0;
}