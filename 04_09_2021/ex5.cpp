#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;


float funcaoExemplo(float valor) {
    float res, x;
    char letra;
    if (valor>=27){ // é a condição que irá finalizar a recursividade neste caso.
        cout << "running" << endl;
        return valor; //acaba com a recursividade, finalizando a funçao recursiva.
    } else {
        cout << "else" << endl;
        res=res+funcaoExemplo(valor-1); //Chama a função denovo, iniciando recursividade.
        return res;
    }
}

int main() {
    int a = 26;
    funcaoExemplo(a);   
    cout << "Programm finished" << endl;
}       
