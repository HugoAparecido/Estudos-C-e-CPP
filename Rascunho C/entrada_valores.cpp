#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome;
    cout << "Digite o seu nome: ";
    getline(cin, nome);
    cout << "Olá, " << nome << "!" << endl;

    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;
    cout << "No próximo ano, você terá " << idade + 1 << " anos." << endl;

    return 0;
}
