//fila dinamica = dynamic queue

typedef int TipoItem;

class No //node
{
    public:
    TipoItem valor;
    No* proximo;

};

class filadinamica{
    private:
        No* primeiro; //front
        No* ultimo;  //hear 
    public:
    filadinamica(); //dinamic queue
    ~filadinamica();
    bool estavazio(); //isempty?
    bool estacheio(); //isfull?
    void inserir(TipoItem item); //push
    TipoItem remover();   //pop
    void imprimir (); ///print 
};

