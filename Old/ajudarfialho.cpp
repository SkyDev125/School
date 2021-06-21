#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int Primo(int numero){
    int i=0;
    int p=1;

    for(i=2;i<numero;i++){
        if(numero%i==0){
            p=0;
        }
    }
    return p;
}

int main(){
    int Num,Resultado;
    cout <<"Digite um numero:" << endl;
    cin >> Num;

    Resultado=Primo(Num);



    if(Resultado == 1){
        cout<<"Numero primo.\n" << endl;
    }
    else{
        cout<<"Numero nao e primo" << endl;
    }

    getchar();
    return 0;
}