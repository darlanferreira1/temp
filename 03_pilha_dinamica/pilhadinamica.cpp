#include <iostream>
#include "pilhadinamica.hpp"
#include <cstddef> //NULL
#include <new> //bad_alloc
using namespace std;

    pilhadinamica::pilhadinamica(){
        NoTopo = NULL;
    } //construtro dynamic stack
    
    pilhadinamica::~pilhadinamica(){
        No* NoTemp;
        while (NoTopo != NULL){
              NoTemp = NoTopo;
              NoTopo = NoTopo->proximo;
              delete NoTemp;
        }
    }   //destrutor
    
    bool pilhadinamica::estavazio(){
        return(NoTopo = NULL);
    } //isempty
    
    bool pilhadinamica::estacheio() //tem memória //isfull
    {
        No* NoNovo;
        try{
            NoNovo = new No;
            delete NoNovo;
            return false;
        } catch(bad_alloc exception){
            return true;
        }
    }
    
    void pilhadinamica::inserir(TipoItem item){
        if(estacheio()){
            cout << "A pilha está cheia\n";
            cout << "Nao foi possivel inserir este elemento\n";
        }else{
            No* NoNovo = new No;
            NoNovo->valor = item;
            NoNovo->proximo = NoTopo;
            NoTopo = NoNovo;
        }
    } //push
    
    TipoItem pilhadinamica::remover(){
        if(estavazio()){
            cout << "A pilha esta vazia\n";
            cout << "Nao foi possivel remover um elemento\n";
            return 0;
        } else{
            No* NoTemp;
            NoTemp = NoTopo;
            TipoItem item = NoTopo->valor;
            NoTopo = NoTopo->proximo;
            delete NoTemp;
            return item;     
        }
    } //pop
    
    void pilhadinamica::imprimir(){
        No* NoTemp = NoTopo;
        cout << "Pilha: [ ";
        while(NoTemp != NULL){
            cout << NoTemp->valor << " ";
            NoTemp = NoTemp->proximo; 
        }
        cout << "]\n";
    } //print

