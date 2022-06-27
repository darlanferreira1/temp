// pilha dinmica = dynamic stack

typedef int TipoItem;


struct No { //node
    TipoItem valor;
    No* proximo;
};

class pilhadinamica{
    private:
        No* NoTopo;
    
    
    public:
    
    pilhadinamica(); //construtro dynamic stack
    ~pilhadinamica();   //destrutor
    bool estavazio(); //isempty
    bool estacheio(); //isfull?
    void inserir(TipoItem item); //push
    TipoItem remover(); //pop
    void imprimir(); //print

};