#include <iostream>
#include "pilha.hpp"

     pilha::pilha()
     {
         tamanho = 0;
         estrutura = new TipoItem[max_itens];
     }

     pilha::~pilha()
     {
         delete[] estrutura;
     }

     bool pilha::estacheia()
     {
         return (tamanho == max_itens);
     } //verifica se a pilha ta cheia //isfull?
     
     bool pilha::estavazia ()
     {
         return (tamanho == 0);
     } //isempty?
     
     void pilha::inserir(TipoItem item)
     {
         if (estacheia()){
             std::cout << " a pilha esta cheia\n";
             std::cout << "nao é possivel inserir este elemento\n";
         }else{
            estrutura[tamanho] = item;
            tamanho++;   
         }

     } //push
     
     TipoItem pilha::remover()
     {
         if ( estavazia() ) {
             std::cout << "a pilha esta vazia\n nada a ser removido\n";
             return 0;
         }else{
             tamanho--;
             return estrutura[tamanho-1];
             
         }
     } //pop
     
     void pilha::imprimir()
     {
         std::cout << "pilha: [";
         for(int i = 0; i < tamanho ; i++){
             std::cout << estrutura[i] << " ";
         }
         std::cout << "]\n";
     } //print
     
     int pilha::qualtamanho()
     {
         return tamanho;
     } //length