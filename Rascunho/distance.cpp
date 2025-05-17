#include <iostream>
#include <vector>
#include <iterator> // Necessário para std::distance

int main()
{
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    // Obtém iteradores para o início e o fim do vector
    auto inicio = numeros.begin();
    auto fim = numeros.end();

    // Calcula a distância entre o início e o fim (número de elementos)
    std::ptrdiff_t distanciaTotal = std::distance(inicio, fim);
    std::cout << "Distância entre o início e o fim: " << distanciaTotal << std::endl;

    // Obtém iteradores para elementos específicos
    auto it1 = numeros.begin() + 1; // Aponta para o segundo elemento (20)
    auto it2 = numeros.begin() + 4; // Aponta para o quinto elemento (50)

    // Calcula a distância entre it1 e it2
    std::ptrdiff_t distanciaParcial = std::distance(it1, it2);
    std::cout << "Distância entre o segundo e o quinto elemento: " << distanciaParcial << std::endl;

    return 0;
}