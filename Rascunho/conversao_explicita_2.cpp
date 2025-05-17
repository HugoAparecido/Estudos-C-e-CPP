#include <iostream>

int main()
{
    double numeroDecimal = 3.7;
    int numeroInteiro;

    // static_cast
    numeroInteiro = static_cast<int>(numeroDecimal);

    std::cout << "Número decimal: " << numeroDecimal << std::endl;
    std::cout << "Número inteiro (após static_cast): " << numeroInteiro << std::endl;

    float numeroFloat = 10.5f;
    int outroInteiro;

    outroInteiro = static_cast<int>(numeroFloat);
    std::cout << "Número float: " << numeroFloat << std::endl;
    std::cout << "Outro inteiro (após static_cast): " << outroInteiro << std::endl;

    return 0;
}