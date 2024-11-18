#include "Cabecalho.hpp"

// Esse include nao eh necessario porque iostream ja esta 
// Incluso no Cabecalho.hpp, mas nao tem problema porque
// iostream ja tem include guard
#include <iostream>

using namespace std;

int main() {
    int num_a, num_b;
    cout << "Digite o primeiro numero: ";
    cin >> num_a;
    cout << "Digite o segundo numero: ";
    cin >> num_b;
    
    // Este codigo utiliza o tipo u64 e as funcoes soma e produto
    // os tres objetos foram definidos no Cabecalho.hpp e definidas em
    // Definicao.cpp

    cout << "Resultados:" << endl;

    u64 result = soma(num_a, num_b);
    cout << "Soma: " << result << endl;

    u64 prod = produto(num_a, num_b);
    cout << "Produto: " << prod << endl;
}