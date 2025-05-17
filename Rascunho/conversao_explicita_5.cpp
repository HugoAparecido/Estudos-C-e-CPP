#include <iostream>

int main() {
  int numero = 65;
  char caractere = reinterpret_cast<char&>(numero);

  std::cout << "Número: " << numero << std::endl;
  std::cout << "Caractere (reinterpret_cast): " << caractere << std::endl; // Pode imprimir 'A' (código ASCII 65)

  int* ptrInt = new int(123);
  char* ptrChar = reinterpret_cast<char*>(ptrInt);

  std::cout << "Valor do inteiro: " << *ptrInt << std::endl;
  std::cout << "Primeiro byte do inteiro como char: " << *ptrChar << std::endl; // Interpreta os primeiros bytes do inteiro como um char

  delete ptrInt;

  return 0;
}