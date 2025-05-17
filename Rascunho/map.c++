#include <iostream>
#include <map>
#include <string>


int main() {
  // 1. Criação de um map:
  // Um map é um contêiner associativo que armazena elementos formados
  // por uma combinação de um valor de chave (key value) e um valor mapeado (mapped value).
  // As chaves são únicas e os elementos são automaticamente ordenados pelas chaves.
  std::map<std::string, int> idades; // Cria um map onde a chave é uma string (nome)
                                     // e o valor é um inteiro (idade).

  // 2. Inserindo elementos:
  // Use o operador [] ou o método insert() para adicionar pares chave-valor.
  idades["Alice"] = 30; // Usando o operador []
  idades["Bob"] = 25;
  idades.insert({"Charlie", 35}); // Usando o método insert() com um pair
  idades.insert(std::make_pair("David", 28)); // Outra forma de usar insert()

  std::cout << "Map 'idades' após inserções:" << std::endl;
  for (const auto& par : idades) {
    std::cout << par.first << ": " << par.second << std::endl;
  }
  std::cout << std::endl;
  // Observe que os elementos são ordenados automaticamente pelas chaves ("Alice", "Bob", "Charlie", "David").

  // 3. Acessando elementos:
  // Use o operador [] ou o método at() para acessar o valor associado a uma chave.
  std::cout << "Idade de Alice: " << idades["Alice"] << std::endl;
  std::cout << "Idade de Bob (usando at()): " << idades.at("Bob") << std::endl;

  // Diferença entre [] e at(): at() lança uma exceção std::out_of_range
  // se a chave não existir, enquanto [] insere um novo elemento com essa chave
  // e um valor padrão (geralmente 0 para tipos numéricos).
  // std::cout << "Idade de um não existente (usando []): " << idades["Eve"] << std::endl;
  // std::cout << "Map após acesso com []:" << std::endl;
  // for (const auto& par : idades) {
  //   std::cout << par.first << ": " << par.second << std::endl;
  // }
  // std::cout << std::endl;

  // 4. Verificando a existência de uma chave:
  // Use o método count() para verificar se uma chave existe no map.
  if (idades.count("Bob")) {
    std::cout << "Bob está no map." << std::endl;
  } else {
    std::cout << "Bob não está no map." << std::endl;
  }

  if (idades.count("Eve")) {
    std::cout << "Eve está no map." << std::endl;
  } else {
    std::cout << "Eve não está no map." << std::endl;
  }
  std::cout << std::endl;

  // 5. Removendo elementos:
  // Use o método erase() para remover elementos por chave ou por iterador.
  idades.erase("Charlie"); // Remove o elemento com a chave "Charlie"
  std::cout << "Map após remover Charlie:" << std::endl;
  for (const auto& par : idades) {
    std::cout << par.first << ": " << par.second << std::endl;
  }
  std::cout << std::endl;

  // 6. Tamanho do map:
  // Use o método size() para obter o número de elementos no map.
  std::cout << "Tamanho do map 'idades': " << idades.size() << std::endl << std::endl;

  // 7. Iterando pelo map:
  // Use iteradores para percorrer todos os elementos do map. Os elementos
  // são iterados em ordem crescente de chave.
  std::cout << "Iterando pelo map usando iteradores:" << std::endl;
  for (auto it = idades.begin(); it != idades.end(); ++it) {
    std::cout << it->first << ": " << it->second << std::endl;
  }
  std::cout << std::endl;

  // Usando range-based for loop (mais conciso):
  std::cout << "Iterando pelo map usando range-based for loop:" << std::endl;
  for (const auto& par : idades) {
    std::cout << par.first << ": " << par.second << std::endl;
  }
  std::cout << std::endl;

  // 8. Limpando o map:
  // Use o método clear() para remover todos os elementos do map.
  idades.clear();
  std::cout << "Tamanho do map após clear(): " << idades.size() << std::endl;
  std::cout << "O map 'idades' está vazio? " << idades.empty() << std::endl;

  return 0;
}