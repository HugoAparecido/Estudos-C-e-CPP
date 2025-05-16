#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main()
{
    std::string entrada;
    std::getline(std::cin, entrada); // Lê uma linha inteira da entrada, incluindo espaços

    std::vector<int> numeros;
    std::stringstream ss(entrada); // Cria um stringstream para processar a string de entrada
    std::string numero_str;

    while (ss >> numero_str)
    { // Extrai cada "palavra" (delimitada por espaços) da stringstream
        try
        {
            int numero = std::stoi(numero_str); // Tenta converter a "palavra" para um inteiro
            numeros.push_back(numero);          // Adiciona o inteiro ao vetor
        }
        catch (const std::invalid_argument &e)
        {
            std::cerr << "Aviso: Entrada inválida detectada (" << numero_str << "). Ignorando." << std::endl;
            // Lida com o caso em que a "palavra" não é um inteiro válido
        }
        catch (const std::out_of_range &e)
        {
            std::cerr << "Aviso: Número fora do intervalo detectado (" << numero_str << "). Ignorando." << std::endl;
            // Lida com o caso em que o número está fora do intervalo representável por int
        }
    }

    // Agora o vetor 'numeros' contém os inteiros que foram lidos da entrada.
    // Você pode fazer o que quiser com este vetor aqui.
    // Por exemplo, para imprimir os números:
    std::cout << "Números lidos: ";
    for (int num : numeros)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
