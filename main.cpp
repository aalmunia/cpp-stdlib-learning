#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(int argc, char** argv) {

    // std::vector
    std::vector<unsigned int> vecEnteros;
    vecEnteros.push_back(1);
    vecEnteros.push_back(2);
    vecEnteros.push_back(3);
    vecEnteros.push_back(4);
    vecEnteros.push_back(5);

    int iVecSize = vecEnteros.size();

    for(int i = 0; i < iVecSize; i++) {
        std::cout << "El elemento de índice " << i << " del vector vale: " << vecEnteros[i] << std::endl;
    }

    // std::unordered_map
    std::unordered_map<std::string, std::vector<unsigned int>> oMapa;
    oMapa.insert({"vecEnteros", vecEnteros});

    std::cout << "Datos de mapa: " << oMapa.size() << std::endl;
    std::cout << "Primer elemento del array referenciado por la clave vecEnteros: " << oMapa["vecEnteros"][0] << std::endl;

    return 0;
}
