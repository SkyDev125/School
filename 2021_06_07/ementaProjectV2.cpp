// Import Needed Libraries
#include <iostream>     // Responsible for the I/O for debugging and others
#include <fstream>      // Responsible for the I/O in files
#include <ctime>        // Responsible for the calculation of the time
#include <algorithm>    // Responsible for the "Center" function, and for other calculations
#include <regex>        // Responsible for regex

using namespace std;    // Global namespace set for std:: helping on reducing the ammount of code (ex:  std::cout)

//Declaration of Global Variables
int LINELENGTH = 60;                                    // Stores the lenght of a line for the display we want to use.
enum Position{ LEFT, CENTER, RIGHT };                   // Positions to be used on the position function
char timeFormat[100] = "%d/%m/%Y";                      // Defines the structure of how Date and time can be displayed as needed
char timeFormatExport[100] = "%Y-%m-%d_%H-%M-%S";       // Defines the structure of how Date and time can be displayed as needed for file exports
int menu = -1 ;                                         // Defines the menu variable so we can utilize the menu (set to -1 to not interfere with choice option)
string ementas[100];                                    // Array type string to store all whole Ementas inside it - up to 100 in total
int ementasN = 0;                                       //
string ementaDate;
regex reg ("^(0[1-9]|[12][0-9]|3[01])[\\/ .](0[1-9]|1[012])[\\/ .]\\d\\d\\d\\d$");

// Declaration of Global Functions
string align( Position pos, string s, int linelength ); // Defines the alignment of a string
string date();                                          // Calculates the Data/time
string dateExport();                                    // Calculates the Data/time but used on exports
void menuShow();                                        // Creates the Menu to be used!
void menuSwitch();                                      // Case Switch to react based on what is choosen in the menu
void case1();
void case2();
void case3();
void case4();
void case5();
void case6();
void case7();
void case8();
void case9();
int regexCheck(string ss);
void askDate();
string dayofweek(string s);

// Creation of Classes
class ementasC {

    private:    // These variables are global and can be accessed by the functions started with Pratos::functionhere.

        string sopa;
        string pratoPrincipal;
        string pratoAlternativo;
        string sobremesa;
        string bebida;

    public:     // These functions are global and can be called by an instance of the object ( pratoPrincipal.setData() );

        void setVariables(string nameP);      // Function to se the value of all private variables
        void saveEmenta();
        void alteraEmenta();
};

ementasC ementa;

int main() {

    menuShow();
    
    return EXIT_SUCCESS;
}

// Menu Functions
void menuShow() {

    while(menu != 0){

        system("CLS");
        cout << "=================================" << endl;
        cout << "[1] - Inserir Ementa" << endl;
        cout << "[2] - Remover Ementa" << endl;
        cout << "[3] - Remover todas as Ementas" << endl;
        cout << "[4] - Alterar Ementa (Incompleto)" << endl;
        cout << "[5] - Imprimir Ementa" << endl;
        cout << "[6] - Imprimir todas as Ementas" << endl;
        cout << "[7] - Exportar Ementa" << endl;
        cout << "[8] - Exportar todas as Ementas" << endl;
        cout << "[9] - Ler Ementa" << endl;
        cout << "[0] - Terminar programa" << endl;
        cout << "=================================" << endl;
        cin >> menu;
        system("CLS");

        menuSwitch();

    }
}

// Switch Function
void menuSwitch() {

    switch(menu){
                
        // [1] - Inserir Ementa
        case 1: {

            case1();
            break;

        }

        // [2] - Remover Ementa
        case 2: {

            case2();
            break;
        
        } 

        // [3] - Remover todas as Ementas
        case 3: {

            case3();
            break;
        
        }

        // [4] - Alterar Ementa (Incomplete)
        case 4: {

            /* case4(); */
            break;
        
        }

        // [5] - Imprimir Ementa
        case 5: {

            case5();
            break;
        
        }

        // [6] - Imprimir todas as Ementas
        case 6: {

            case6();
            break;

        }

        // [7] - Exportar Ementa
        case 7: {

            case7();
            break;

        }

        // [8] - Exportar todas as Ementas
        case 8: {

            case8();
            break;

        }

        // [9] - importar Ementa/s
        case 9: {

            case9();
            break;

        }
        
        default: {
            
            break;

        }
    }
}

// Switch Case Functions
// [1] - Inserir Ementa V
void case1() {

    int n;

    up:
    cout << "===========================================================" << endl;
    cout << "Quantas ementas pretende adicionar?" << endl;
    cin >> n;
    system("cls");
    
    if(n < 1) {

        cout << "Numero inserido invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto up;

    }
    
    for(int i = 0; i < n; i++) {

        askDate();

        string temp;
        temp = "Sopa";
        ementa.setVariables(temp);

        temp = "Prato Principal";
        ementa.setVariables(temp);

        temp = "Prato Alternativo";
        ementa.setVariables(temp);

        temp = "Sobremesa";
        ementa.setVariables(temp);

        temp = "Bebida";
        ementa.setVariables(temp);

        ementa.saveEmenta();
        cout << ementas[ementasN];
        system("pause");
        system("cls");
        ementasN++;

    }
}

// [2] - Remover Ementa V
void case2() {

    int n;

    up:
    cout << "===========================================================" << endl;
    cout << "Ex: insira '1' para remover a primeira ementa!" << endl;
    cout << "Qual ementa pretende remover?" << endl;
    cin >> n;
    system("cls");
    
    if(n < 1) {

        cout << "Numero inserido invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto up;

    }

    n--;
    int itemsToMove = ((ementasN)-(n+1))+1;
    for(int i = 0; i < itemsToMove; i++) {
    
        ementas[n+i] = ementas[n+(i+1)];
    
    }
    ementasN--;

    cout << "===========================================================" << endl;
    cout << "Ementa selecionada removida com sucesso!" << endl;
    cout << "Todas as ementas foram movidas 1 lugar para trás" << endl; 
    system("pause");
    system("cls");

}

// [3] - Remover todas as Ementas V
void case3() {

    for (int i = 0; i < sizeof(ementas)/sizeof(ementas[0]); i++) {

        ementas[i] = "";

    }

    ementasN = 0;
    cout << "===========================================================" << endl;
    cout << "todas as ementas foram removidas com sucesso!" << endl;
    system("pause");
    system("cls");

}

/* // [4] - Alterar Ementa (Incomplete)
void case4() {

    ementa.alteraEmenta();

}
 */

// [5] - Imprimir Ementa V
void case5() {

    int n;

    up:
    cout << "===========================================================" << endl;
    cout << "Ex: insira '1' para imprimir a primeira ementa!" << endl;
    cout << "Qual ementa pretende imprimir?" << endl;
    cin >> n;
    system("cls");
    
    if(n < 1) {

        cout << "Numero inserido invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto up;

    }

    cout << ementas[n-1] << endl;
    system("pause");
    system("cls");

}

// [6] - Imprimir todas as Ementas V
void case6() {

    for (int i = 0; i < sizeof(ementas)/sizeof(ementas[0]); i++) {
        if(ementas[i] != "") {

        cout << ementas[i] << endl;
        cout << "Proxima ementa?" << endl;
        system("Pause");
        system("cls");

        }
    }

    cout << "===========================================================" << endl;
    cout << "Nao existem mais ementas!" << endl;
    system("Pause");
    system("cls");
}

// [7] - Exportar Ementa V
void case7() {

    int n;

    up:
    cout << "===========================================================" << endl;
    cout << "Ex: insira '1' para imprimir a primeira ementa!" << endl;
    cout << "Qual ementa pretende imprimir?" << endl;
    cin >> n;
    system("cls");
    
    if(n < 1) {

        cout << "Numero inserido invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto up;

    }
    
    string temp = "Ementa_Export_" + dateExport();
    temp += ".txt";

    // Starting the export
    ofstream fout(temp);

    // Separating lines based on \n
    std::string s = ementas[n-1];
    std::string delimiter = "\n";
    int counter1 = 0;

    size_t pos = 0;
    std::string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        
        token = s.substr(0, pos);
        fout << align(CENTER , token, LINELENGTH );
        s.erase(0, pos + delimiter.length());
        counter1++;

    }
    counter1 = 0;
    fout << align(CENTER, s, LINELENGTH );  

    // Finalizing the export
    fout.close();

}

// [8] - Exportar todas as Ementas V
void case8() {

    string temp = "Ementas_Export_" + dateExport();
    temp += ".txt";

    // Starting the export
    ofstream fout(temp);

    for (int i = 0; i < sizeof(ementas)/sizeof(ementas[0]); i++) {

        if(ementas[i] != "") {

            // Separating lines based on \n
            std::string s = ementas[i];
            std::string delimiter = "\n";

            size_t pos = 0;
            std::string token;
            while ((pos = s.find(delimiter)) != std::string::npos) {
                
                token = s.substr(0, pos);
                fout << align(CENTER , token, LINELENGTH );
                s.erase(0, pos + delimiter.length());

            }
            fout << align(CENTER, s, LINELENGTH );  

        }
    }

    // Finalizing the export
    fout.close();

    cout << "===========================================================" << endl;
    cout << "Exportacao de todas as ementas completa!" << endl;
    system("Pause");
    system("cls");

}

// [9] - importar Ementa/s V
void case9() {

    string n;

    cout << "===========================================================" << endl;
    cout << "Ex: c:\\users\\diogo\\file.txt" << endl;
    cout << "Introduza o caminho para o ficheiro!" << endl;
    cin.ignore();
    getline(std::cin, n);

    
    //Abrir o ficheiro criado
    ifstream myfile(n);
    
    //Dar import da informação para dentro do array!
    string line;
    string temp;
    if (myfile.is_open()) {
        
        while ( getline (myfile,line) ) {
        
        temp += line;
        temp += "\n";
        }
        
        myfile.close();
    
    } else {
        
        cout << "Nao foi possivel abrir o ficheiro";
        return;
    
    } 

    //Divisão do array para informação novamente para as outras variaveis (permitir a edição da ementa)
    string s = temp;
    string delimiter = "\n";
    string testArray;

    size_t pos = 0;
    string token;
    temp = "";
    while ((pos = s.find(delimiter)) != std::string::npos) {
    
        token = s.substr(0, pos);
        testArray = token;
        testArray.erase(std::remove_if(testArray.begin(), testArray.end(), [](unsigned char x) { return std::isspace(x); }), testArray.end());
        s.erase(0, pos + delimiter.length());
        temp += testArray;
        temp += "\n";
    
    }

    s = temp;
    delimiter = "\n\n";
    pos = 0;

    while ((pos = s.find(delimiter)) != std::string::npos) {
                
        token = s.substr(0, pos);
        s.erase(0, pos + delimiter.length());
        ementas[ementasN] = token;
        ementas[ementasN] += "\n";
        ementasN++;
    }

    cout << "===========================================================" << endl;
    cout << "Ficheiros Importados com sucesso!" << endl;
    system("pause");
    system("cls");

}

// Object functions
void ementasC::setVariables(string nameP) {                 // Set the inputs inside the variables

    string temp1 = " ";
    string temp2 = " ";
    int n;

    up:
    if( (nameP == "Bebida") || (nameP == "Sopa") || (nameP == "Sobremesa") ) {

        cout << "===========================================================" << endl;
        cout << "Quantas " << nameP << "s pretende adicionar? (numero inteiro)" << endl;
        cin >> n;

    } else if(nameP == "Prato Principal") {

        cout << "===========================================================" << endl;
        cout << "Quantos Pratos Principais pretende adicionar? (numero inteiro)" << endl;
        cin >> n;

    } else if(nameP == "Prato Alternativo") {

        cout << "===========================================================" << endl;
        cout << "Quantos Pratos Alternativos pretende adicionar? (numero inteiro)" << endl;
        cin >> n;

    } else {

        return;

    }

    system("cls");

    if(n < 1) {

        cout << "Numero inserido invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto up;

    }

    if( (nameP == "Bebida") || (nameP == "Sopa") || (nameP == "Sobremesa") ) {
        
        for(int i = 0; i < n; i++) {

            cout << "===========================================================" << endl;
            cout << "Insira o nome da " << nameP << ": ";
            cin.ignore();
            getline(std::cin, temp1); 
            
            temp2 += "\n=======================================\n";
            temp2 +=  to_string(i+1);
            temp2 += "\n";
            temp2 += nameP + ": " + temp1;
            
            if(nameP == "Bebida") {

            cout << "======================================================" << endl;
            cout << "Insira a quantidade (numero inteiro) Mililitros: ";
            cin >> temp1;

            temp2 += "\nQuantidade: " + temp1 + "ml";

            } else {

            cout << "======================================================" << endl;
            cout << "Insira a quantidade (numero inteiro) Gramas: ";
            cin >> temp1;

            temp2 += "\nQuantidade: " + temp1 + "g";

            }

            cout << "======================================================" << endl;
            cout << "Insira as suas calorias (numero inteiro) Kcal: ";
            cin >> temp1;

            temp2 += "\nCalorias: " + temp1 + "kcal";

            system("cls");
        }

    } else if( (nameP == "Prato Principal") || (nameP == "Prato Alternativo") ) {

        for(int i = 0; i < n; i++) {

            cout << "===========================================================" << endl;
            cout << "Insira o nome do " << nameP << ": ";
            cin.ignore();
            getline(std::cin, temp1); 
            
            temp2 += "\n=======================================\n";
            temp2 +=  to_string(i+1);
            temp2 += "\n";
            temp2 += nameP + ": " + temp1;
            
            cout << "======================================================" << endl;
            cout << "Insira a quantidade (numero inteiro) Gramas: ";
            cin >> temp1;

            temp2 += "\nQuantidade: " + temp1 + "g";

            cout << "======================================================" << endl;
            cout << "Insira as suas calorias (numero inteiro) Kcal: ";
            cin >> temp1;

            temp2 += "\nCalorias: " + temp1 + "kcal";

            system("cls");
        }
    }

    if(nameP == "Sopa") {

        ementa.sopa = temp2;

    } else if(nameP == "Prato Principal") {

        ementa.pratoPrincipal = temp2;

    } else if(nameP == "Prato Alternativo") {

        ementa.pratoAlternativo = temp2;

    } else if(nameP == "Sobremesa") {

        ementa.sobremesa = temp2;

    } else if(nameP == "Bebida") {

        ementa.bebida = temp2;

    }

    system("cls");

}

void ementasC::saveEmenta() {                               // Edit the ementa here

    ementas[ementasN] = "===========================================================\n";
    ementas[ementasN] += dayofweek(ementaDate);
    ementas[ementasN] += ementa.sopa;
    ementas[ementasN] += ementa.pratoPrincipal;
    ementas[ementasN] += ementa.pratoAlternativo;
    ementas[ementasN] += ementa.sobremesa;
    ementas[ementasN] += ementa.bebida;
    ementas[ementasN] += "\n=======================================\n";
    ementas[ementasN] += ementaDate;
    ementas[ementasN] += "\n===========================================================\n";

}

/* void ementasC::alteraEmenta() {                          // Incomplete but can be worked around using the delete functions

    int n;

    up:
    cout << "===========================================================" << endl;
    cout << "Ex: insira '1' para alterar a primeira ementa!" << endl;
    cout << "Qual ementa pretende alterar?" << endl;
    cin >> n;
    system("cls");
    
    if(n < 1) {

        cout << "Numero inserido invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto up;

    }
    
    cout << ementas[0];
    system("pause");
    system("cls");
    string s = ementas[n];
    string delimiter = "\n";
    size_t pos = 0;
    string token;
    string temp;
    int i = 0;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        
        token = s.substr(0, pos);
        s.erase(0, pos + delimiter.length());
        i++;

        // sopa
        if ((i >= 4) && (i <= 7)) {

            ementa.sopa += token;
            ementa.sopa += "\n";
            
        }else if ((i >= 9) && (i <= 12)) { // Prato Principal

            ementa.pratoPrincipal += token;
            ementa.pratoPrincipal += "\n";

        } else if ((i >= 14) && (i <= 17)) { // Prato Alternativo

            ementa.pratoAlternativo += token;
            ementa.pratoAlternativo += "\n";

        } else if ((i >= 19) && (i <= 22)) { // Sobremesa

            ementa.sobremesa += token;
            ementa.sobremesa += "\n";

        } else if ((i >= 24) && (i <= 27)) { // Bebidas

            ementa.bebida += token;
            ementa.bebida += "\n";

        } else if (i == 29) { // Data

            ementaDate = token;

        }
    }

    string opc
    cout << "===========================================================" << endl;
    cout << "Ex: 'SOPA' ou 'PRATO PRINCIPAL ou 'PRATO ALTERNATIVO'" << endl;
    cout << "O que pretende alterar?" << endl;


    if ()



    system("pause");

} */

// Auxiliary Functions
string date() {                                             // Function to calculate the current data (day/month/year)

    time_t rawtime;                             // Some
    struct tm * timeinfo;                       // Magic
    char buffer[80];                            // To set

    time (&rawtime);                            // The time
    timeinfo = localtime(&rawtime);             // And Date

    strftime(buffer,80,timeFormat,timeinfo);    // Defines the structure to retrieve the date or time (documentation: https://www.cplusplus.com/reference/ctime/strftime/)
    return string(buffer);                      // Returns the date in a string form ready to be used

}

string dateExport() {                                       // Function to calculate the current data (day/month/year/hours/minutes/seconds)

    time_t rawtime;                             // Some
    struct tm * timeinfo;                       // Magic
    char buffer[80];                            // To set

    time (&rawtime);                            // The time
    timeinfo = localtime(&rawtime);             // And Date

    strftime(buffer,80,timeFormatExport,timeinfo);      // Defines the structure to retrieve the date or time (documentation: https://www.cplusplus.com/reference/ctime/strftime/)
    return string(buffer);                              // Returns the date in a string form ready to be used

}

string dayofweek(string s) {                                //Function to calculate the day of the week

    string delimiter = "/";
    int i = 0;
    size_t pos = 0;
    string token[3];
    while ((pos = s.find(delimiter)) != string::npos) {
        token[i] = s.substr(0, pos);
        s.erase(0, pos + delimiter.length());
        i++;
    }
    token[2] = s;

    int d = stoi(token[0]);
    int m = stoi(token[1]);
    int y = stoi(token[2]);

    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    
    int weekday = ( y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
    
    if (weekday == 0) {

        return "Sunday";

    } else if (weekday == 1) {

        return "Monday";

    } else if (weekday == 2) {

        return "Tuesday";

    } else if (weekday == 3) {

        return "Wednesday";

    } else if (weekday == 4) {

        return "Thursday";

    } else if (weekday == 5) {

        return "Friday";

    } else if (weekday == 6) {

        return "Saturday";

    }

    return NULL;

}

void askDate() {                                            //Function to request the date from a personalized input date field

    upp:
    string opc;
    cout << "===========================================================" << endl;
    cout << "Qual a data da ementa?" << endl;
    cout << "Escreva 'HOJE' se quiser adicionar a data automaticamente" << endl;
    cout << "Escreva 'OUTRA' se quiser adicionar a data manualmente" << endl;
    cin >> opc;
    system("cls");

    if(opc == "HOJE"){

        ementaDate = date();

    } else if(opc == "OUTRA"){

        up:
        cout << "===========================================================" << endl;
        cout << "Insira a data da ementa (DD/MM/YYYY): " << endl;
        cin >> opc;

        int temp = 0;

        temp = regexCheck(opc);

        if(temp == 0) {

            cout << "data inserida invalida!" << endl;
            cout << "Por favor tente novamente!" << endl;
            system("Pause");
            system("cls");
            goto up;
            
        } else if(temp == 1) {

            ementaDate = opc;

        }
    } else {

        cout << "O que escreveu e invalido!" << endl;
        cout << "Por favor tente novamente!" << endl;
        system("Pause");
        system("cls");
        goto upp;

    }
    system("cls");
}

int regexCheck(string ss) {                                 //Function to verify if regex is confirmed

    smatch matches;
    int temp = regex_search(ss, matches, reg);
    return temp;

}

string align( Position pos, string s, int linelength ) {    //Function to dynamically adjust the position of a string

    int spaces = 0;                                         // int variable for nº of spaces " "
    string temp;                                            // temporary string variable to store parts of the string

    switch( pos ) {                                         // Switch Case to calculate how many spaces are needed

        case CENTER:{                                       // Activates if CENTER is choosen as position

            spaces = ( linelength - s.size() ) / 2;         // Calculates how many spaces are needed to make the string aligned to the center
            break;                                          // Breaks out of the Switch Case

        }

        case RIGHT : {                                      // Activates if RIGHT is choosen as position

            spaces =   linelength - s.size();               // Calculates how many spaces are needed to make the string aligned to the right
            break;                                          // Breaks out of the Switch Case

        }                                                   // No LEFT position, since for that position no spaces are needed

        case LEFT : {                                       // Activates if LEFT is choosen as position}

            break;                                          // Breaks out of the Switch Case (does not add any spaces since its "default formatting"

        }        
    }

    if ( spaces > 0 ) {                                     // Verifies if there are more than 0 spaces
    
        temp = s;                                           // Activates if more than 0 spaces exist and stores the string inside variable temp so it can be altered
        s = string( spaces, ' ' );                          // Adds the spaces needed to the S variable, overwriting it
    
    }

    s += temp;                                              // Adds the string stored inside temp back into s variable
    s += '\n';                                              // Adds a "new line" right after the end of the string

    return s;                                               // Returns the variable S now with spaces and the original string inside. (ALIGNED)
};