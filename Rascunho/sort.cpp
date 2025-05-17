#include <iostream>
#include <vector>
#include <algorithm> // Necessário para sort

using namespace std;

int main()
{
    vector<int> numeros = {5, 2, 8, 1, 9, 4};

    cout << "Vector antes da ordenação: ";
    for (int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl;

    // Ordena o vector 'numeros' em ordem crescente
    sort(numeros.begin(), numeros.end());

    cout << "Vector após a ordenação crescente: ";
    for (int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}