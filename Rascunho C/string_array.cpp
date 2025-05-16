#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string minhaString = "Ola Mundo";
    int tamanho = minhaString.length();
    char meuArray[tamanho + 1]; // +1 para o caractere nulo terminador

    for (int i = 0; i < tamanho; ++i)
    {
        meuArray[i] = minhaString[i];
    }
    meuArray[tamanho] = '\0'; // Adiciona o caractere nulo ao final

    // Agora meuArray contém: ['O', 'l', 'a', ' ', 'M', 'u', 'n', 'd', 'o', '\0']

    // Para imprimir o array:
    for (int i = 0; i <= tamanho; ++i)
    {
        cout << meuArray[i];
    }
    cout << endl;

    return 0;
}
