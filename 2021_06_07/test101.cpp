#include <iostream>
#include <ctime>
#include <regex>        // Responsible for regex

using namespace std;
regex reg ("^(0[1-9]|[12][0-9]|3[01])[\\/ .](0[1-9]|1[012])[\\/ .]\\d\\d\\d\\d$");
int regexCheck(string ss);

// Creation of Classes
class pratos {

    private:    // These variables are global and can be accessed by the functions started with Pratos::functionhere.

        string name;                // String to store the name of an instance of Pratos
        string quantity;            // String to store the quantity in grams or mililiters of an instance of Pratos
        string calories;            // String to store the calories in Kcal of an instance of Pratos

    public:     // These functions are global and can be called by an instance of the object ( pratoPrincipal.setData() );

        string setName(string nameP);           // Function to set the data of an ementa
        string setQuantity(string nameP);       // Function to input the name of a Sopa and its characteristics
        string setCalories(string namep);       // Function to input the name of a Prato Principal and its characteristics
        string see(string namep);
};

pratos sopa;
pratos pratoPrincipal;
pratos pratoAlternativo;
pratos sobremesa;
pratos bebida;

int main() {


    cout << regexCheck("12/02/2004");
    cout << "\nEscreva 'HOJE' se quiser adicionar a data automaticamente" << endl;
    cout << "Escreva 'OUTRA' se quiser adicionar a data manualmente" << endl;
    cout << sopa.setName("Sopa");
    sopa.see("ola");

}

string pratos::setName (string nameP) {

return "ola";

}

string pratos::see(string nameP) {

    cout << sopa.name << endl;
    
}

int regexCheck(string ss) {

    smatch matches;
    int temp = regex_search(ss, matches, reg);
        return temp;
}