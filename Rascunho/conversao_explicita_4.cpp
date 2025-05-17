#include <iostream>

void printValor(int* ptr) {
  *ptr = 20; // Modificando o valor apontado (cuidado!)
  std::cout << "Valor: " << *ptr << std::endl;
}

int main() {
  const int valorConst = 10;
  // int* ptrNaoConst = &valorConst; // Erro: não se pode atribuir um const int* a um int*

  int* ptrNaoConst = const_cast<int*>(&valorConst);
  printValor(ptrNaoConst);
  std::cout << "Valor const após modificação (comportamento indefinido?): " << valorConst << std::endl;

  return 0;
}