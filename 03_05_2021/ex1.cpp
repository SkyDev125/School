#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <sstream> 
#include <fstream>
#include <math.h>

using namespace std;

void voidS() { // É utilizada esta função (void) para quando queremos utilizar um código sem returno, ou seja podemos colocar o código do que nós quisermos nesta função e depois para rodá-la é só chamá-la no int main, podendo assim ter vários coódigos no mesmo sítio. Esta não aceita parâmetros. 
    cout << "ola turma!" << endl; 
}

int intS() {  // É utilizada esta função (int) para quando queremos fazer um cálculo fora do nosso código principal, chamando-a quando necessário o resultado inteiro  
    int a = 5;
    a = a+15;
    return a;
}

float floatS() { // É utilizada esta função (float) para quando queremos fazer um cálculo com números decimais e/ou expoentes, esta tendo uma precisão de 7 digitos no máximo.
    float a = 5;
    a = a+15;
    return a;
}

double doubleS() { // É utilizada esta função (double) para quando queremos fazer um cálculo com números decimais e/ou expoentes, esta tendo uma precisão de 15-16 digitos no máximo.
    double a = 5;
    a = a+15;
    return a;
}

char charS() { // É utilizada esta função (char) para guardar um só caracter, sendo chamada quando necessário esses caracteres.
    char a = 5;
    a = a+15;
    return a;
}

string stringS() { // É utilizada esta função (string) para tudo, ou seja, podemos realizar cálculos dentro da mesma mas apenas devolver caracteres e frases.
    string a = "5";
    a = a+"15";
    return a;
}


// Funções com parametros

int intC(int a, int b, int* c, int* d) { // É utilizada esta função (int) para quando queremos fazer um cálculo fora do nosso código principal, chamando-a quando necessário o resultado inteiro   
    a = b*2;
    b = b*a;
    *c = a;
    *d = b;
}

float floatC(float a, float b) { // É utilizada esta função (float) para quando queremos fazer um cálculo com números decimais e/ou expoentes, esta tendo uma precisão de 7 digitos no máximo.
    
}

double doubleS(double a, double b) { // É utilizada esta função (double) para quando queremos fazer um cálculo com números decimais e/ou expoentes, esta tendo uma precisão de 15-16 digitos no máximo.
    
}

char charS(char a, char b) { // É utilizada esta função (char) para guardar um só caracter, sendo chamada quando necessário esses caracteres.
    
}

string stringC() { // É utilizada esta função (string) para tudo, ou seja, podemos realizar cálculos dentro da mesma mas apenas devolver caracteres e frases.

}

int main() {
    //Funçoes sem parametros
    
    // cout << voidS(); // É utilizada esta função (void) para quando queremos utilizar um código sem returno, ou seja podemos colocar o código do que nós quisermos nesta função e depois para rodá-la é só chamá-la no int main, podendo assim ter vários coódigos no mesmo sítio. Esta não aceita parâmetros.
    // cout << intS(); // É utilizada esta função (int) para quando queremos fazer um cálculo fora do nosso código principal, chamando-a quando necessário o resultado inteiro   
    // cout << floatS(); // É utilizada esta função (float) para quando queremos fazer um cálculo com números decimais e/ou expoentes, esta tendo uma precisão de 7 digitos no máximo.
    // cout << doubleS(); // É utilizada esta função (double) para quando queremos fazer um cálculo com números decimais e/ou expoentes, esta tendo uma precisão de 15-16 digitos no máximo.
    // cout << charS(); // É utilizada esta função (char) para guardar um só caracter, sendo chamada quando necessário esses caracteres.
    // cout << stringS(); // É utilizada esta função (string) para tudo, ou seja, podemos realizar cálculos dentro da mesma mas apenas devolver caracteres e frases.
    
    //Funçoes com parametros
    
    // cout << intC(a,b); // Esta função (int) retornará o resultado do cálculo realizado no mesmo, pois possui parâmetros.
    // cout << floatC(a,b); // Esta função (float) retornará o resultado dos cálculos que foram feitos com decimais ou expoentes, pois possui parâmetros. Esta possui o maximo de 7 digitos de resultado.
    // cout << doubleC(a,b); // Esta função (double) retornará o resultado dos cálculos que foram feitos feitos com decimais ou expoentes, pois possui parâmetros. Esta possui o maximo de 15-16 digitos de resultado.
    // cout << charC(a,b); // Esta função (char) retornará o caracter que for chamado/necessitado.
    // cout << stringC(a,b); // Esta função (string) retornará apenas os caracteres/frases que inserirmos, mas também dá-nos a liberdade de realizar cálculos sem retorno.

    // int a = 3,b = 3,c = 3,d = 3;
    // intC(a,b,&c,&d);
    // cout << c << " and " << d << endl;
}
