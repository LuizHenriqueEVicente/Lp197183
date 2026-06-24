/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Luiz Henrique Estrasulas Vicente
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 
Objetivo    : achar o menor número e qual posição ele esta dentro de um vetor
Aprendizado : uso e manipulação de vetores (mas em C++)
-------------------------------------------------------------------------- */
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
