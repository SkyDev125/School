#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>

using namespace std;

class Ementas {

    private:

        string data;
        string sopa;
        string pratoPrincipal;
        string pratoAlternativo;
        string sobremesa;
        string bebidas;

    public:

        string setData();
        string setSopa();
        string setPP();
        string setPA();
        string setS();
        string setB(); 

};

enum Position{ LEFT, CENTER, RIGHT }; 
string print( Position pos, string s, int linelength );
const int LINELENGTH = 60;

int main() {
    
    int menu = -1 ;
    string ementas[100];
    int ementasN = 0;
    Ementas ementa;

    while(menu != 0){
        
        {

            system("CLS");
            cout << "=================================" << endl;
            cout << "[1] - Inserir Ementa" << endl;
            cout << "[2] - Remover Ementa" << endl;
            cout << "[3] - Remover todas as Ementas" << endl;
            cout << "[4] - Alterar Ementa" << endl;
            cout << "[5] - Imprimir Ementa" << endl;
            cout << "[6] - Imprimir todas as Ementas" << endl;
            cout << "[7] - Exportar Ementa" << endl;
            cout << "[8] - Exportar todas as Ementas" << endl;
            cout << "[9] - Ler Ementa" << endl;
            cout << "[0] - Terminar programa" << endl;
            cout << "=================================" << endl;
            cin >> menu;
            system("CLS");
        
        }

        switch(menu){
            
            // [1] - Inserir Ementa
            case 1: {

                //Insersão do prato!
                ementas[ementasN] = "===========================================================\n";
                ementas[ementasN] += "Data: " + ementa.setData();
                ementas[ementasN] += "\n===========================================================";
                ementas[ementasN] += ementa.setSopa();
                ementas[ementasN] += "\n===========================================================";
                ementas[ementasN] += ementa.setPP();
                ementas[ementasN] += "\n===========================================================";
                ementas[ementasN] += ementa.setPA();
                ementas[ementasN] += "\n===========================================================";
                ementas[ementasN] += ementa.setS();
                ementas[ementasN] += "\n===========================================================";
                ementas[ementasN] += ementa.setB();
                ementas[ementasN] += "\n===========================================================";

                cout << ementas[ementasN] << endl;
                system("pause");
                ementasN++;
                break;
            
            }

            // [2] - Remover Ementa
            case 2: {
                
                break;
            
            } 

            // [3] - Remover todas as Ementas
            case 3: {
                
                break;
            
            }

            // [4] - Alterar Ementa
            case 4: {
                
                break;
            
            }

            // [5] - Imprimir Ementa
            case 5: {
                
                break;
            
            }

            // [6] - Imprimir todas as Ementas
            case 6: {
                
                break;

            }

            // [7] - Exportar Ementa
            case 7: {

                break;

            }

            // [8] - Exportar todas as Ementas
            case 8: {

                break;

            }

            // [9] - Ler Ementa
            case 9: {

                break;

            }
            
            default: {
                
                break;

            }
        }
    }
};

//Função para calcular a altura dia e hora.
string Ementas::setData() {

    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,80,"%d/%m/%Y",timeinfo);
    return string(buffer);

};

string Ementas::setSopa() {

    string temp;
    int n;

    up:
    cout << "===========================================================" << endl;
    cout << "Quantas Sopas pretende adicionar? (numero inteiro)" << endl;
    cin >> n;

    if(n < 1) {
        cout << "Numero inserido invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto up;
    }

    for(int i = 0; i < n; i++) {

        cout << "===========================================================" << endl;
        cout << "Insira a Sopa: ";
        cin.ignore();
        getline(std::cin, temp); 
        
        sopa += "\n=======================================\n";
        sopa +=  to_string(i+1);
        sopa += "\nSopa: " + temp;
        
        cout << "======================================================" << endl;
        cout << "Insira as suas calorias (numero inteiro) Kcal: ";
        cin >> temp;

        sopa += "\nCalorias: " + temp + "kcal";

        cout << "======================================================" << endl;
        cout << "Insira a quantidade (numero inteiro) Gramas: ";
        cin >> temp;

        sopa += "\nQuantidade: " + temp + "g";

        system("cls");
    }

    return sopa;

};

string Ementas::setPP() {

    string temp;
    int n;

    up:
    cout << "=================================================================" << endl;
    cout << "Quantos Pratos Principais pretende adicionar? (numero inteiro)" << endl;
    cin >> n;

    if(n < 1) {
        cout << "Numero inserido invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto up;
    }

    for(int i = 0; i < n; i++) {

        cout << "======================================================" << endl;
        cout << "Insira o Prato Principal: ";
        cin.ignore();
        getline(std::cin, temp); 
        
        pratoPrincipal += "\n=======================================\n";
        pratoPrincipal += to_string(i+1);
        pratoPrincipal += "\nPrato Principal: " + temp;
        
        cout << "======================================================" << endl;
        cout << "Insira as suas calorias (numero inteiro) Kcal: ";
        cin >> temp;

        pratoPrincipal += "\nCalorias: " + temp + "kcal";

        cout << "======================================================" << endl;
        cout << "Insira a quantidade (numero inteiro) Gramas: ";
        cin >> temp;

        pratoPrincipal += "\nQuantidade: " + temp + "g";
        system("cls");
    }

    return pratoPrincipal;

};

string Ementas::setPA() {

    string temp;
    int n;

    up:
    cout << "=================================================================" << endl;
    cout << "Quantos Pratos Alternativos pretende adicionar? (numero inteiro)" << endl;
    cin >> n;

    if(n < 1) {
        cout << "Numero inserido invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto up;
    }

    for(int i = 0; i < n; i++) {

        cout << "======================================================" << endl;
        cout << "Insira o Prato Alternativo: ";
        cin.ignore();
        getline(std::cin, temp);  
        
        pratoAlternativo += "\n=======================================\n";
        pratoAlternativo += to_string(i+1);
        pratoAlternativo += "\nPrato Alternativo: " + temp;
        
        cout << "======================================================" << endl;
        cout << "Insira as suas calorias (numero inteiro) Kcal: ";
        cin >> temp;

        pratoAlternativo += "\nCalorias: " + temp + "kcal";

        cout << "======================================================" << endl;
        cout << "Insira a quantidade (numero inteiro) Gramas: ";
        cin >> temp;

        pratoAlternativo += "\nQuantidade: " + temp + "g";
        system("cls");
    }

    return pratoAlternativo;

};

string Ementas::setS() {

    string temp;
    int n;

    up:
    cout << "======================================================" << endl;
    cout << "Quantas Sobremesas pretende adicionar? (numero inteiro)" << endl;
    cin >> n;

    if(n < 1) {
        cout << "Numero inserido invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto up;
    }

    for(int i = 0; i < n; i++) {

        cout << "======================================================" << endl;
        cout << "Insira a Sobremesa: ";
        cin.ignore();
        getline(std::cin, temp);  
        
        sobremesa += "\n=======================================\n";
        sobremesa += to_string(i+1);
        sobremesa += "\nSobremesa: " + temp;
        
        cout << "======================================================" << endl;
        cout << "Insira as suas calorias (numero inteiro) Kcal: ";
        cin >> temp;

        sobremesa += "\nCalorias: " + temp + "kcal";

        cout << "======================================================" << endl;
        cout << "Insira a quantidade (numero inteiro) Gramas: ";
        cin >> temp;

        sobremesa += "\nQuantidade: " + temp + "g";
        system("cls");
    }

    return sobremesa;

};

string Ementas::setB() {

    string temp;
    int n;

    up:
    cout << "======================================================" << endl;
    cout << "Quantas bebidas pretende adicionar? (numero inteiro)" << endl;
    cin >> n;

    if(n < 1) {
        cout << "Numero inserido invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto up;
    }

    for(int i = 0; i < n; i++) {

        cout << "======================================================" << endl;
        cout << "Insira a Bebida: ";
        cin.ignore();
        getline(std::cin, temp); 
        
        bebidas += "\n=======================================\n";
        bebidas += to_string(i+1);
        bebidas += "\nBebida: " + temp;
        
        cout << "======================================================" << endl;
        cout << "Insira as suas calorias (numero inteiro) Kcal: ";
        cin >> temp;

        bebidas += "\nCalorias: " + temp + "kcal";

        cout << "======================================================" << endl;
        cout << "Insira a quantidade (numero inteiro) miliLitros: ";
        cin >> temp;

        bebidas += "\nQuantidade: " + temp + "ml";
        system("cls");
    }


    return bebidas;

};

string print( Position pos, string s, int linelength ) {

    int spaces = 0;
    
    switch( pos )
    {

        case CENTER: spaces = ( linelength - s.size() ) / 2; break;
        case RIGHT : spaces =   linelength - s.size()      ; break;

    }

    string temp;
    if ( spaces > 0 ) { 
        temp = s;  
        s = string( spaces, ' ' );
    }
    s += temp;
    s += '\n';

    return s;
};