#include <iostream>
#include "declaracoes.hpp"

using namespace std;

void inicializaProdutos (Produto produtos []){
    for (int i= 0; i < tamanho; i++){
        produtos[i].nome = "";
        produtos[i].qtd = 0;
    }
}

void imprime (Produto produtos []){
    for (int i=0; i<tamanho; i++ ){
        if (produtos[i].qtd > 0){
            cout << "i: " << i << " - nome: " << produtos[i].nome << " - qtd:" << produtos[i].qtd << endl;
        }
    }
}

bool listaCheia () {
    if (l->qtd == tamanho){
        cout << "A lista esta cheia" << endl;
        return true;
    }else{
        return false;
    }
}

bool listaVazia(){
   if (l->qtd == 0){
        cout << "A lista esta vazia" << endl;
        return true;
    }else{
        return false;
    } 
}
