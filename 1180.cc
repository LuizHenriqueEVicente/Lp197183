#include <iostream>
#include <vector>

int main() {
    int casos;
    
    if (!(std::cin >> casos)) return 0;
    
    std::vector<int> numeros(casos);
    
    for (int i = 0; i < casos; i++) {
        std::cin >> numeros[i];
    }
    
    int menor = numeros[0];
    int posicao = 0;
    
    for (int i = 0; i < casos; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
            posicao = i;
        }
    }
    
    std::cout << "Menor valor: " << menor << "\n";
    std::cout << "Posicao: " << posicao << "\n";
    
    return 0;
}
