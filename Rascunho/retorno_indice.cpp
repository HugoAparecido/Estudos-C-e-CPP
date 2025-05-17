#include <iostream>
#include <vector>
#include <algorithm> // Necessário para lower_bound e sort

using namespace std;

int main()
{
    vector<int> numerosOrdenados = {1, 3, 3, 5, 8, 8, 8, 10, 12};

    // Busca o lower bound para o valor 5
    auto it1 = lower_bound(numerosOrdenados.begin(), numerosOrdenados.end(), 5);

    if (it1 != numerosOrdenados.end())
    {
        cout << "Lower bound de 5 encontrado na posição (índice): "
             << distance(numerosOrdenados.begin(), it1) << endl;
        cout << "Valor encontrado: " << *it1 << endl;
    }
    else
    {
        cout << "Lower bound de 5 não encontrado (maior que todos os elementos)." << endl;
    }

    // Busca o lower bound para o valor 3
    auto it2 = lower_bound(numerosOrdenados.begin(), numerosOrdenados.end(), 3);

    if (it2 != numerosOrdenados.end())
    {
        cout << "Lower bound de 3 encontrado na posição (índice): "
             << distance(numerosOrdenados.begin(), it2) << endl;
        cout << "Valor encontrado: " << *it2 << endl;
    }
    else
    {
        cout << "Lower bound de 3 não encontrado (maior que todos os elementos)." << endl;
    }

    // Busca o lower bound para um valor não presente (ex: 7)
    auto it3 = lower_bound(numerosOrdenados.begin(), numerosOrdenados.end(), 7);

    if (it3 != numerosOrdenados.end())
    {
        cout << "Lower bound de 7 encontrado na posição (índice): "
             << distance(numerosOrdenados.begin(), it3) << endl;
        cout << "Valor encontrado: " << *it3 << endl;
        cout << "Este é o primeiro elemento >= 7." << endl;
    }
    else
    {
        cout << "Lower bound de 7 não encontrado (maior que todos os elementos)." << endl;
    }

    // Busca o lower bound para um valor maior que todos os elementos (ex: 15)
    auto it4 = lower_bound(numerosOrdenados.begin(), numerosOrdenados.end(), 15);

    if (it4 != numerosOrdenados.end())
    {
        cout << "Lower bound de 15 encontrado na posição (índice): "
             << distance(numerosOrdenados.begin(), it4) << endl;
        cout << "Valor encontrado: " << *it4 << endl;
    }
    else
    {
        cout << "Lower bound de 15 não encontrado (maior que todos os elementos)." << endl;
        cout << "O iterador retornado é o end() do vector." << endl;
    }

    return 0;
}