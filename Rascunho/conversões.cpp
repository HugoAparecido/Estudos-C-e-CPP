#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
// Outras bibliotecas

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int inteiro;
    cin >> inteiro;

    float decimal1;
    double decimal2;
    cin >> decimal1 >> decimal2;

    string nome;
    cin >> nome;

    int num1 = 10;
    int num2 = 5;

    int minimo = min(num1, num2);
    int maximo = max(num1, num2);

    int tamanho_array = 3;
    int nome_array[] = {1, 2, 3, 5};

    int posicao = 1;
    nome_array[posicao] = 2;

    cout << "Entre " << num1 << " e " << num2 << ":" << endl;
    cout << "O menor número é: " << minimo << endl;
    cout << "O maior número é: " << maximo << endl
         << endl;

    double val1 = 3.14;
    double val2 = 2.71;

    double min_val = min(val1, val2);
    double max_val = max(val1, val2);

    // Exemplo com um vetor de inteiros (usando min_element e max_element)
    vector<int> numeros = {15, 3, 8, 22, 1, 17};

    auto it_min = min_element(numeros.begin(), numeros.end());
    auto it_max = max_element(numeros.begin(), numeros.end());

    if (it_min != numeros.end() && it_max != numeros.end())
    {
        cout << "No vetor {";
        for (size_t i = 0; i < numeros.size(); ++i)
        {
            cout << numeros[i] << (i == numeros.size() - 1 ? "" : ", ");
        }
        cout << "}:" << endl;
        cout << "O menor elemento é: " << *it_min << endl;
        cout << "O maior elemento é: " << *it_max << endl;
    }
    else
    {
        cout << "O vetor está vazio." << endl;
    }

    double valor = 3.1415926535;
    int casasDecimais = 3;

    cout << "Valor original: " << valor << endl;

    // Usando fixed para garantir notação de ponto fixo
    // e setprecision para definir o número de casas decimais
    cout << "Valor com " << casasDecimais << " casas decimais: "
         << fixed << setprecision(casasDecimais) << valor << endl;

    // Seu código
    return 0;
}