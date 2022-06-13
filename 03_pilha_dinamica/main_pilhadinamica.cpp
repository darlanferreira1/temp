#include <iostream>
#include "pilhadinamica.hpp"


int main (){
    pilhadinamica pilha1;
    TipoItem item;

    int opcao {};

    std::cout << "programa gerador de pilhas dinamicas:\n";

    do {
        std::cout << "Digite 0 para parar o programa: \n";
        std::cout << "Digite 1 para inserir elementos \n";
        std::cout << "Digite 2 para remover um elemento \n";
        std::cout << "Digite 3 para imprimir a pilha \n";

        std::cin >> opcao;
        if (opcao ==1){
            std::cout << "Digite o elemento a ser inserido:\n";
            std::cin >> item;
            pilha1.inserir(item);
        } else if (opcao == 2){
            item = pilha1.remover();
            std::cout << "Elemento Removido: " << item << std::endl;
        } else if (opcao == 3){
            pilha1.imprimir();
        }
    } while(opcao != 0);
    
    return 0;
}