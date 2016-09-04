#ifndef LISTALINEAR_H_INCLUDED
#define LISTALINEAR_H_INCLUDED

template <typename Tipo>
struct Lista{
    int tamanho;
    int indice;
    Tipo *v;
    Lista(int tam);
    ~Lista();
    void insere(Tipo x);
    Tipo remover();
    int getQtde();
    int getTamanho();
    bool listacheia();
    bool listavazia();
    Tipo getValor(int pos);
};
template <typename Tipo>
Lista<Tipo>::~Lista(){
    delete v;
}

template <typename Tipo>
Lista<Tipo>::Lista(int tam){
       indice = -1;
       tamanho = tam;
       v = new Tipo[tamanho];
}
template <typename Tipo>
void Lista<Tipo>::insere(Tipo x){
        indice++;
        v[indice]=x;

}
template <typename Tipo>
Tipo Lista<Tipo>::remover(){
        Tipo temp=v[indice];
        indice--;
}
template <typename Tipo>
int Lista<Tipo>::getQtde(){
        return indice+1;
}
template <typename Tipo>
int Lista<Tipo>::getTamanho(){
        return tamanho;
}
template <typename Tipo>
bool Lista<Tipo>::listavazia(){
        return indice==-1;
}
template <typename Tipo>
bool Lista<Tipo>::listacheia(){
        return indice == tamanho-1;
}
template <typename Tipo>
Tipo Lista<Tipo>::getValor(int pos){
        return v[pos];
}


#endif // LISTALINEAR_H_INCLUDED
