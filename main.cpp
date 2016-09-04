#include <iostream>
#include "listalinear.h"
#include "triangulo.h"

using namespace std;

int main()
{
    cout << "LISTA LINEAR TRIANGULO" << endl;

    Lista<Triangle> lista(10);
    int x, y, z;

    int opc;
    do{
        cout<<"1-insere"<<endl;
        cout<<"2-remove"<<endl;
        cout<<"3-mostra"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"selecione: ";
        cin >> opc;
        switch(opc){
            case 1:
                if(lista.listacheia()){
                    cout<<"Lista cheia..."<<endl;
                }
                else{
                    cout<<"digite valor>";
                    cin >> x >> y >> z;
                    Triangle t = Triangle(x, y, z);
                    if(t.isTriangle()){
                        lista.insere(t);
                    }else{
                        cout << "Iesto no exciste!!" << endl;
                    }
                }
                break;
            case 2:
                if(lista.listavazia()){
                    cout << "Lista Vazia" << endl;
                }else{
                    lista.remover();
                }

                break;
            case 3:
                for(int i = 0; i < lista.getQtde(); i++){
                    Triangle t = lista.getValor(i);
                    cout << t;
                }
                break;
            case 9:
                cout<<"fim..."<<endl;
                break;
        }
    }while(opc !=9);
    return 0;
}








