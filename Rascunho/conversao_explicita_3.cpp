#include <iostream>

class Base {
public:
  virtual void foo() {}
};

class Derivada : public Base {
public:
  void bar() { std::cout << "Função bar da classe Derivada" << std::endl; }
};

int main() {
  Base* ptrBase = new Derivada();
  Derivada* ptrDerivada = dynamic_cast<Derivada*>(ptrBase);

  if (ptrDerivada != nullptr) {
    ptrDerivada->bar();
  } else {
    std::cout << "Conversão dynamic_cast falhou." << std::endl;
  }

  Base* outroPtrBase = new Base();
  Derivada* outroPtrDerivada = dynamic_cast<Derivada*>(outroPtrBase);

  if (outroPtrDerivada != nullptr) {
    outroPtrDerivada->bar();
  } else {
    std::cout << "Segunda conversão dynamic_cast falhou." << std::endl;
  }

  delete ptrBase;
  delete outroPtrBase;

  return 0;
}