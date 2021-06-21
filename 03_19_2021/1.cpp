#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <sstream> 
#include <fstream>

using namespace std;

void verificacao() {
    int verify;

    //verificação
    cout << "================================================================" << endl;
    cout << "Insira 0 para voltar ao menu" << endl;
    cin >> verify;
    system ("CLS");
}

void myfunction() {
    string x[10];
    int menu = -1;
    int addRemove = 0;

    while (menu != 0)
    {
        system ("CLS");
        //Menu
        {
        cout << "[1] Inserir um numero no array" << endl;
        cout << "[2] Retirar um numero no array" << endl;
        cout << "[3] Inserir um numero duma posicao especifica do array" << endl;
        cout << "[4] Retirar um numero duma posicao especifica do array" << endl;
        cout << "[5] Listar os elementos dentro do array" << endl;
        cout << "[6] Filtrar os elementos do array por numeros pares" << endl;
        cout << "[7] Filtrar os elementos do array por numeros impares" << endl;
        cout << "[8] Exibir o tamanho do array" << endl;
        cout << "[9] Exibir a soma de todos os numeros dentro do array" << endl;
        cout << "[10] Ordenar o array" << endl;
        cout << "[11] Limpar o array" << endl;
        cout << "[0] Terminar programa" << endl;
        cout << " " << endl;
        }
        
        //seleção do menu
        cout << "Selecione a opcao desejada: ";
        cin >> menu;

        //Opçoes
        system ("CLS");
        switch (menu){

            // [1] Inserir um numero no array
            case 1: {

                cout << "================================================================" << endl;
                if(addRemove == 9) {
                    cout << "Chegou ao limite de numeros a adicionar" << endl;

                    verificacao();
                    break;
                }

                int InsertNumber;
                cout << "Escreva o numero a inserir na [" << addRemove+1 << "] posicao: ";
                cin >> InsertNumber;

                x[addRemove] = to_string(InsertNumber);
                addRemove++;

                verificacao();
                break;
            }

            // [2] Retirar um numero no array
            case 2: {

                cout << "================================================================" << endl;
                if(addRemove == 0) {
                    cout << "Chegou ao limite de numeros a remover" << endl;

                    verificacao();
                    break;
                }

                cout << "O numero na posicao [" << addRemove << "] foi eliminado!" << endl;

                x[addRemove-1] = "";
                addRemove--;

                verificacao();
                break;
            }

            // [3] Inserir um numero duma posicao especifica do array
            case 3: {

                cout << "================================================================" << endl;
                int posicao;
                cout << "Qual a posicao em que quer adicionar? ";
                cin >> posicao;

                int InsertNumber;
                cout << "Escreva o numero a inserir na [" << posicao << "] posicao: ";
                cin >> InsertNumber;
                
                x[posicao-1] = to_string(InsertNumber);

                verificacao();
                break;
            }

            // [4] Retirar um numero duma posicao especifica do array
            case 4: {

                cout << "================================================================" << endl;
                int posicao;
                cout << "Qual a posiçao em que quer remover?" << endl;
                cin >> posicao;

                x[posicao-1] = "";
                
                verificacao();
                break;
            }

            // [5] Listar os elementos dentro do array
            case 5: {

                cout << "================================================================" << endl;
                for(int i = 0; i < 10; i++){
                cout << "[" << i+1 << "] " << x[i] << endl;
                }

                verificacao();
                break;
            }

            // [6] Filtrar os elementos do array por numeros pares
            case 6: {

                cout << "================================================================" << endl;
                int i;
                cout << "Os numeros pares são:" << endl;
                for (int i = 0; i < 10; i++ ){
                    if(x[i] != "") {
                        if (stoi(x[i]) % 2 == 0){
                        cout << "[" << i+1 << "]" << x[i] << endl;
                        }
                    }
                }

                verificacao();
                break;
            }

            // [7] Filtrar os elementos do array por numeros impares
            case 7: {

                cout << "================================================================" << endl;
                int i;
                cout << "Os numeros impares são:" << endl;
                for (int i = 0; i < 10; i++ ){
                    if(x[i] != "") {
                        if (stoi(x[i]) % 2 != 0){
                        cout << "[" << i+1 << "]" << x[i] << endl;
                        }
                    }
                }

                verificacao();
                break;
            }

            // [8] Exibir o tamanho do array
            case 8: {

                cout << "================================================================" << endl;
                cout << "O array tem um tamanho de " << sizeof(x) / sizeof(x[0]) << endl;

                verificacao();
                break;
            }

            // [9] Exibir a soma de todos os numeros dentro do array
            case 9: {
                
                cout << "================================================================" << endl;
                int somar = 0;
                for (int i = 0; i < 10; i++ ){
                    if(x[i] != "") {
                        somar = somar + stoi(x[i]);
                    }
                }
                cout << "A soma de todos os numeros dentro do array e: " << somar << endl;

                verificacao();
                break;
            }

            // [10] Ordenar o array
            case 10: {

                cout << "================================================================" << endl;
                string ordem;
                cout << "Escolha o tipo de ordem [C] - Crescente // [D] - Decrescente: ";
                cin >> ordem;

                //Create efficient shadow
                string y[10];
                int o = -1;
                for(int i = 0; i < 10; i++) {
                    if(x[i] != "") {
                        o++;
                        y[o] = x[i];
                    }
                }

                //Crescente
                if(ordem == "C") {
                    for(int i = 0; i < o; i++) {
                        for(int j = 0; j < o ; j++) { 
                            if(x[i] != "") {
                                if(stoi(y[j]) > stoi(y[j+1])){
                                    string temp;
                                    temp = y[j];
                                    y[j] = y[j+1];
                                    y[j+1] = temp;
                                }
                            }
                        }
                    }
                }

                //Decrescente
                if(ordem == "D") {                                        
                    for(int i = 0; i < o; i++) {
                        for(int j = 0; j < o ; j++) {
                            if(x[i] != "") {
                                if(stoi(y[j]) < stoi(y[j+1])){
                                    string temp;                                                                                                                                                                                      
                                    temp = y[j];
                                    y[j] = y[j+1];
                                    y[j+1] = temp;
                                }
                            }
                        }
                    }
                }

                //Put Shadow back in the original
                for (int i = 0; i < 10; i++) {
                    if(y[i] != "") {
                        x[i] = y[i];
                    } else {
                        x[i] = "";
                    }
                }

                cout << "================================================================" << endl;
                cout << "O array foi ordenado com sucesso!" << endl;

                verificacao();
                break;
            }

            // [11] Limpar o array
            case 11: {

                for(int i = 0; i < 10; i++){
                    x[i] = "";
                }

                cout << "================================================================" << endl;
                cout << "O array foi Limpo com sucesso!" << endl;

                verificacao();
                break;
            }
        }
    }
}

int main() {    
    myfunction();
    return 0;
}