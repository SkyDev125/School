// Import Needed Libraries
#include <iostream>     // Responsible for the I/O for debugging and others
#include <fstream>      // Responsible for the I/O in files
#include <ctime>        // Responsible for the calculation of the time
#include <algorithm>    // Responsible for the "Center" function, and for other calculations

using namespace std;    // Global namespace set for std:: helping on reducing the ammount of code (ex:  std::cout)

//Declaration of Global Variables
int LINELENGTH = 60;                                    // Stores the lenght of a line for the display we want to use.
enum Position{ LEFT, CENTER, RIGHT };                   // Positions to be used on the position function
char timeFormat[100] = "%d/%m/%Y";                      // Defines the structure of how Date and time can be displayed as needed
int menu = -1 ;                                         // Defines the menu variable so we can utilize the menu (set to -1 to not interfere with choice option)
string ementas[100];                                    // Array type string to store all whole Ementas inside it - up to 100 in total
int ementasN;                                           // 

// Declaration of Global Functions
string align( Position pos, string s, int linelength ); // Defines the alignment of a string
string date();                                          // Calculates the Data/time
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

// Creation of Classes
class pratos {

    private:    // These variables are global and can be accessed by the functions started with Pratos::functionhere.

        string name;                // String to store the name of an instance of Pratos
        string quantity;            // String to store the quantity in grams or mililiters of an instance of Pratos
        string calories;            // String to store the calories in Kcal of an instance of Pratos

    public:     // These functions are global and can be called by an instance of the object ( pratoPrincipal.setData() );

        string setName();           // Function to set the data of an ementa
        string setQuantity();       // Function to input the name of a Sopa and its characteristics
        string setCalories();       // Function to input the name of a Prato Principal and its characteristics

};

// Declaration of Instances
pratos sopa;
pratos pratoPrincipal;
pratos pratoAlternativo;
pratos sobremesa;
pratos bebida;

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

        menuSwitch();

    }
}

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

        // [4] - Alterar Ementa
        case 4: {

            case4();
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

        // [9] - Ler Ementa
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
void case1() {



}

void case2() {



}

void case3() {



}

void case4() {



}

void case5() {



}

void case6() {



}

void case7() {



}

void case8() {



}

void case9() {



}

// Auxiliary Functions
string date() {                                 // Function to calculate the current data (day/month/year)

    time_t rawtime;                             // Some
    struct tm * timeinfo;                       // Magic
    char buffer[80];                            // To set

    time (&rawtime);                            // The time
    timeinfo = localtime(&rawtime);             // And Date

    strftime(buffer,80,timeFormat,timeinfo);    // Defines the structure to retrieve the date or time (documentation: https://www.cplusplus.com/reference/ctime/strftime/)
    return string(buffer);                      // Returns the date in a string form ready to be used

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
    }

    if ( spaces > 0 ) {                                     // Verifies if there are more than 0 spaces
    
        temp = s;                                           // Activates if more than 0 spaces exist and stores the string inside variable temp so it can be altered
        s = string( spaces, ' ' );                          // Adds the spaces needed to the S variable, overwriting it
    
    }

    s += temp;                                              // Adds the string stored inside temp back into s variable
    s += '\n';                                              // Adds a "new line" right after the end of the string

    return s;                                               // Returns the variable S now with spaces and the original string inside. (ALIGNED)
};