#pragma once
#include <iostream>
using namespace std;

// aqui serao as duas structs

struct Produto{
    int qtd;
    string nome;
};

struct Lista {
    int qtd;
    int primeiro;
    int ultimo;
};

Lista *l; //var global
const int tamanho = 10;
