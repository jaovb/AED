//poo
#include <iostream>
#include <conio.h>
using namespace std;

class listat{
    //atributos
    private:
    string nome[50];
    string notap1[50], notap2[50], notap3[50];
    //metodos de impressao
    public:
    int terco;
    void setnome(int ordem){
        cout << "digite o nome aluno:\n";
        cin >> nome[ordem];
    }
    void setterco(){
        int opcao;
        do{
            cout << "Qual o 1/3 atual do semestre ?\n";
            opcao = getch();
        }while(opcao != 49 && opcao != 50 && opcao != 51);
        terco = opcao;
    }
    void setnota(int ordem){
        cout << "digite a note da p1:\n";
        cin >> notap1[ordem];
        notap2[ordem] = "--";
        notap3[ordem] = "--";
        if(terco == 2){
            cout << "digite a note da p2:\n";
            cin >> notap2[ordem];
        }
        if(terco == 3){
            cout << "digite a note da p3:\n";
            cin >> notap3[ordem];
        }
    }
    void getlist(){
        int i = 0;
        bool cond = false;
        cout << "---------------lista de alunos---------------\n";
        do{
            cond = true;
            cout << "nome:" << nome[i] << "\n";
            cout << "notas:" << notap1[i] << notap2[i] << notap3[i] << "\n\n";
            i++;
            if(nome[i].empty()){
                cond = false;
            }
        }while(cond == true);
        cout << "--------------------------------------------\n";
    }
};
int main(){
    listat lista;
    char opcao;
    int ordem = 0, escolha;
     lista.setterco();
    do{
        cout << "deseja adicionar aluno ?\n[s/n]\nESC para sair\n";
        do{
            opcao = getch();
            if(opcao == 27){
                return 0;
            }
        }while(opcao != 115 && opcao != 110);
        if(opcao == 115){
            lista.setnome(ordem);
        }
        cout << "deseja adicionar nota ?\n[s/n]\nESC para sair\n";
        do{
            opcao = getch();
            if(opcao == 27){
                return 0;
            }
        }while(opcao != 115 && opcao != 110);
        if(opcao == 115){
            lista.setnota(ordem);
        }
        lista.getlist();
        ordem++;
        cout << "deseja editar dados de algum aluno ?\n[s/n]\nESC para sair\n";
        do{
            do{
                opcao = getch();
                if(opcao == 27){
                    return 0;
                }
            }while(opcao != 115 && opcao != 110);
            cout << "selecione o aluno\n";
            do{
                escolha = getch();
            }while (escolha < 0 && escolha > 40);
            cout << "deseja editar nome(1) ou nota(2) ?\n";
            do{
                opcao = getch();
            }while (opcao != 1 && opcao != 2);
            if(opcao == 1){
                lista.setnome(escolha);
            }
            if(opcao == 2){
                lista.setnota(escolha);
            }

        }while(opcao != 110);
    }while(true);
}