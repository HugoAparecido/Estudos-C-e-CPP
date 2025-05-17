#include <iostream>
#include <vector>
#include <algorithm> // Para funções como sort, find, etc.

using namespace std;

int main()
{
    // 1. Criação de um vector:
    // Um vector é um array dinâmico que pode redimensionar-se automaticamente.
    vector<int> numeros;                         // Cria um vector de inteiros vazio.
    vector<int> outrosNumeros = {1, 2, 3, 4, 5}; // Cria um vector com valores iniciais.
    vector<int> dezZeros(10, 0);                 // Cria um vector com 10 elementos, todos inicializados com 0.

    cout << "Vector inicial 'outrosNumeros': ";
    for (int num : outrosNumeros)
    {
        cout << num << " ";
    }
    cout << endl;

    // 2. Adicionando elementos:
    // Use push_back() para adicionar elementos ao final do vector.
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    cout << "Vector 'numeros' após adicionar elementos: ";
    for (int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl;

    // 3. Acessando elementos:
    // Use o operador [] ou o método at() para acessar elementos por índice (base 0).
    cout << "Primeiro elemento de 'outrosNumeros': " << outrosNumeros[0] << endl;
    cout << "Segundo elemento de 'numeros' (usando at()): " << numeros.at(1) << endl;

    // Diferença entre [] e at(): at() lança uma exceção out_of_range
    // se o índice for inválido, enquanto [] não faz essa verificação (mais rápido,
    // mas pode levar a comportamento indefinido).

    // 4. Tamanho e capacidade:
    // size(): Retorna o número de elementos atualmente no vector.
    // capacity(): Retorna o número de elementos que o vector pode armazenar
    //             sem precisar alocar mais memória.
    cout << "Tamanho de 'numeros': " << numeros.size() << endl;
    cout << "Capacidade de 'numeros': " << numeros.capacity() << endl;

    // 5. Modificando elementos:
    numeros[0] = 15;
    cout << "Vector 'numeros' após modificar o primeiro elemento: ";
    for (int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl;

    // 6. Removendo elementos:
    // pop_back(): Remove o último elemento do vector.
    numeros.pop_back();
    cout << "Vector 'numeros' após pop_back(): ";
    for (int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl;

    // 7. Inserindo elementos:
    // insert(): Insere elementos em uma posição específica (leva um iterador).
    numeros.insert(numeros.begin() + 1, 25); // Insere 25 na segunda posição.
    cout << "Vector 'numeros' após inserir 25: ";
    for (int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl;

    // 8. Removendo elementos em uma posição específica ou intervalo:
    // erase(): Remove um elemento em uma posição (leva um iterador) ou um intervalo.
    numeros.erase(numeros.begin()); // Remove o primeiro elemento.
    cout << "Vector 'numeros' após apagar o primeiro elemento: ";
    for (int num : numeros)
    {
        cout << num << " ";
    }
    cout << endl;

    // 9. Limpando o vector:
    // clear(): Remove todos os elementos do vector, tornando-o vazio (size() == 0).
    // A capacidade pode não mudar.
    numeros.clear();
    cout << "Tamanho de 'numeros' após clear(): " << numeros.size() << endl;
    cout << "O vector 'numeros' está vazio? " << numeros.empty() << endl;

    return 0;
}