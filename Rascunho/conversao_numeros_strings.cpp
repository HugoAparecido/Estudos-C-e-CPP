#include <iostream>
#include <sstream>
#include <string>

int main() {
  // Número para string
  int numero = 123;
  std::stringstream ss;
  ss << numero;
  std::string stringNumero = ss.str();
  std::cout << "Número: " << numero << ", String: " << stringNumero << std::endl;

  // String para número
  std::string stringDecimal = "3.14159";
  double numeroDecimal;
  std::stringstream ss2(stringDecimal);
  ss2 >> numeroDecimal;
  std::cout << "String: " << stringDecimal << ", Número: " << numeroDecimal << std::endl;

  // Outra forma (C++11 e posterior): std::to_string e std::stod (e outras como stoi, stof, etc.)
  int outroNumero = 456;
  std::string outraStringNumero = std::to_string(outroNumero);
  std::cout << "Outro número: " << outroNumero << ", Outra string: " << outraStringNumero << std::endl;

  std::string outraStringDecimal = "2.71828";
  double outroNumeroDecimal = std::stod(outraStringDecimal);
  std::cout << "Outra string: " << outraStringDecimal << ", Outro número: " << outroNumeroDecimal << std::endl;

  return 0;
}