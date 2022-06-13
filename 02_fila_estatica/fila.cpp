#include <iostream>
#include "fila.hpp"

    fila::fila()
    {
        primeiro = 0;
        ultimo = 0;
        estrutura = new TipoItem[max_itens];
    } //construtor
    
    fila::~fila()
    {
        delete[] estrutura;
    } //destrutor
    
    bool fila::estavazio()
    {
        return(primeiro == ultimo);
    } //isempty
    
    bool fila::estacheio()
    {
        return(ultimo - primeiro == max_itens);
    } //isfull
    
    void fila::inserir (TipoItem item)
    {
        if(estacheio()){
            std::cout << "a fila esta cheia\n";
            std::cout << "esse elemento não pode ser inserido\n";
        }else{
            estrutura[ultimo % max_itens] = item;
            ultimo++;
        }
    } //isfull
    
    TipoItem fila::remover ()
    {
        if(estavazio()){
            std::cout << "a lista ja esta vazia\n";
            std::cout << "nennhum elemento foi removido\n";
            return 0;
        }else{
            primeiro++;
            return estrutura[(primeiro-1) % max_itens];
        }

    } //pop //dequeue
    
    void fila::imprimir()
    {
        std::cout << "Fila [ ";
        for (int i = primeiro; i < ultimo; i++){
            std::cout << estrutura [i % max_itens] << " ";
        }
        std::cout << "]\n";
    } //print