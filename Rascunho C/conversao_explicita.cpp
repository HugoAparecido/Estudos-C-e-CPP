#include <iostream>
#include <vector>
#include <tuple>
#include <set>
#include <map>
#include <string>

using namespace std;

int main()
{
    double valor_double = 3.14;
    int valor_int = static_cast<int>(valor_double); // valor_int será 3

    int valor_int = 10;
    float valor_float = static_cast<float>(valor_int); // valor_float será 10.0
    double outro_float = valor_int;                    // Conversão implícita para double também é possível

    int numero = 123;
    string texto = to_string(numero); // texto será "123"

    double decimal = 3.14159;
    string texto_decimal = to_string(decimal); // texto_decimal será "3.141590" (a precisão pode variar)

    int array[] = {1, 2, 3, 4, 5};
    vector<int> vetor(array, array + sizeof(array) / sizeof(int)); // Inicializa um vector com os elementos do array

    for (int val : vetor)
    {
        cout << val << " "; // Saída: 1 2 3 4 5
    }
    cout << endl;

    vector<int> v = {10, 20, 30};
    tuple<int, int, int> tupla(v[0], v[1], v[2]);

    cout << get<0>(tupla) << " " << get<1>(tupla) << " " << get<2>(tupla) << endl; // Saída: 10 20 30

    vector<int> v = {5, 2, 8, 2, 5, 1};
    set<int> conjunto(v.begin(), v.end()); // Inicializa um set com os elementos do vector (duplicatas são removidas)

    for (int val : conjunto)
    {
        cout << val << " "; // Saída (ordenada e sem duplicatas): 1 2 5 8
    }
    cout << endl;

    // Em Python, você poderia ter uma lista de tuplas para converter em dicionário.
    // Em C++, você geralmente insere pares chave-valor diretamente no map.
    map<string, int> dicionario;
    dicionario["maçã"] = 1;
    dicionario["banana"] = 2;
    dicionario["laranja"] = 3;

    cout << "Quantidade de maçãs: " << dicionario["maçã"] << endl; // Saída: Quantidade de maçãs: 1

    return 0;
}
