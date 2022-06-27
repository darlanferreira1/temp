/*  
na lista temos um controlador reposnsavel por saber
onde esta o final e o inicio da lista e quantos elementos a lista tem  

 */

/* lista estatica
array
struct1 == controlador da lista
struct2 == elemento da lista (produto: nome e quantidade)
funções construidas para:
    inserção
    remoção
    busca

noções de primeiro ou ultimo são definidas pelo controlador

veremos o array como array circular
fazer funções para o array se comportar como circular */

#include <iostream>
#include <cstdlib>
#include "funcoes.hpp"

using namespace std;

int main (int argc, char** argv) {
    Produto* produtos = new Produto[tamanho];
    

    inicializaProdutos(produtos);

    l = new Lista();
    l->qtd = 0;
    l->primeiro = 0;
    l->ultimo = 0;

    adicionaFIM ("Arroz", 1 ,produtos);
    adicionaFIM ("Feijao", 3 ,produtos);
    adicionaFIM ("Ovos", 12 ,produtos);
    
    imprime(produtos);

    removeFIM(produtos);
    imprime(produtos);
    return 0; 
    
}

