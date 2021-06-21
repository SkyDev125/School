#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>

using namespace std;

enum Position{ LEFT, CENTER, RIGHT }; 
string print( Position pos, string s, int linelength );

int main() {

    //Criação do array ementas
    string ementas[100];

    //definição do tamanho do display
    int LINELENGTH = 80;
    
    //colocação das variaveis e texto dentro do array
    ementas[0] = "===========================================================";
    ementas[0] += "\na";
    ementas[0] += "\nola";

    //criação do ficheiro
    ofstream fout("test.txt");

    //separação das linhas no array por \n e escrita do ficheiro!
    std::string s = ementas[0];
    std::string delimiter = "\n";
    int counter1 = 0;

    size_t pos = 0;
    std::string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        fout << print(CENTER , token, LINELENGTH );
        s.erase(0, pos + delimiter.length());
        counter1++;
    }
    counter1 = 0;
    fout << print(CENTER, s, LINELENGTH );  

    //finalização da escritura no ficheiro
    fout.close();

    //Abrir o ficheiro criado
    ifstream myfile("test.txt");
    
    //Dar import da informação para dentro do array!
    string line;
    
    if (myfile.is_open()) {
        
        while ( getline (myfile,line) ) {
        
        ementas[1] += line;
        ementas[1] += "\n";
        }
        
        myfile.close();
    
    }

    else cout << "Unable to open file";
    cout << ementas[1] << endl;

    //Divisão do array para informação novamente para as outras variaveis (permitir a edição da ementa)
    s = ementas[1];
    delimiter = "\n";
    string testArray[100];

    pos = 0;
    while ((pos = s.find(delimiter)) != std::string::npos) {
    
        token = s.substr(0, pos);
        testArray[0] = token;
        testArray[0].erase(std::remove_if(testArray[0].begin(), testArray[0].end(), [](unsigned char x) { return std::isspace(x); }), testArray[0].end());
        s.erase(0, pos + delimiter.length());
        counter1++;
        ementas[2] += testArray[0];
        ementas[2] += "\n";
    
    }

    counter1 = 0;

    cout << ementas[2] << endl;

    return 0;

} 

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
}