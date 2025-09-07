//poo
#include <iostream>
#include <conio.h>
using namespace std;

class listat{
    //atributos
    private:
    string telefone[100];
    string nome[100];
    //metodos de impressao
    public:
    void adicionar(int ordem){
        cout << "digite o nome do contato:\n";
        cin >> nome[ordem];
        cout << "digite o numero de telefone do contato:\n";
        cin >> telefone[ordem];
    }
    void getlist(){
        int i = 0;
        bool cond = false;
        cout << "---------------lista de contatos---------------\n";
        do{
            cond = true;
            cout << "nome:" << nome[i] << "\n";
            cout << "telefone:" << telefone[i] << "\n\n";
            i++;
            if(nome[i].empty()){
                cond = false;
            }
        }while(cond == true);
        cout << "------------------------------------------------\n";
    }
};
int main(){
    listat lista;
    char opcao;
    int ordem = 0;
    do{
        cout << "deseja adicionar contato ?\n[s/n]\nESC para sair\n";
        do{
            opcao = getch();
            if(opcao == 27){
                return 0;
            }
        }while(opcao != 115 && opcao != 110);
        if(opcao == 115){
            lista.adicionar(ordem);
        }
        lista.getlist();
        ordem++;
    }while(true);
}