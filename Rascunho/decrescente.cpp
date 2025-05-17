#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Função comparadora para ordenar em ordem decrescente
bool compararDecrescente(int a, int b)
{
    return a > b; // Retorna true se 'a' é maior que 'b'
}

int main()
{
    vector<int> numeros = {5, 2, 8, 1, 9, 4};

    cout << "Vector antes da ordenação: ";
    for (int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl;

    // Ordena o vector 'numeros' em ordem decrescente usando a função comparadora
    sort(numeros.begin(), numeros.end(), compararDecrescente);

    cout << "Vector após a ordenação decrescente: ";
    for (int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}