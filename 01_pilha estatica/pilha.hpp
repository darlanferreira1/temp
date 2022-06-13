// pilha = stack

typedef int TipoItem;

const int max_itens = 100;

class pilha{
    private:
    int tamanho {};
    TipoItem* estrutura;

    public:

    pilha();
    ~pilha();
    bool estacheia(); //verifica se a pilha ta cheia //isfull?
    bool estavazia (); //isempty?
    void inserir(TipoItem); //push
    TipoItem remover(); //pop
    void imprimir(); //print
    int qualtamanho(); //length

};