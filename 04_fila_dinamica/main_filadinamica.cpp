#include <iostream>
#include "filadinamica.hpp"


int main (){
    filadinamica fila1;
    int opcao {};
    TipoItem item;
    std::cout << "Programa gerador de filas\n";
    
     do {
        std::cout << "Digite 0 para parar o programa: \n";
        std::cout << "Digite 1 para inserir elementos \n";
        std::cout << "Digite 2 para remover um elemento \n";
        std::cout << "Digite 3 para imprimir a fila \n";

        std::cin >> opcao;
        if (opcao ==1){
            std::cout << "Digite o elemento a ser inserido:\n";
            std::cin >> item;
            fila1.inserir(item);
        } else if (opcao == 2){
            item = fila1.remover();
            std::cout << "Elemento Removido: " << item << std::endl;
        } else if (opcao == 3){
            fila1.imprimir();
        }
    } while(opcao != 0);

    return 0;
}