#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <sstream> 
#include <fstream>
#include <math.h>

using namespace std;

double sum(double r, double c, double z) {
    return r + c + z;
}

void ex1() {
    double a,b,c,root;
    float resultN,resultP;

    cout << "================================================================" << endl;
    cout << "insira o valor de a ";
    cin >> a;
    cout << "insira o valor de b ";
    cin >> b;
    cout << "insira o valor de c ";
    cin >> c;

    root = sqrt(((b*b)-(4*a*c)));
    
    resultN = (-b-root) / (2 * a);
    resultP = (-b+root) / (2 * a);
    
    cout << "================================================================" << endl;
    cout << "o valor sem arredondamentos: " <<endl;
    cout << "x = " << resultP << " ou x = " << resultN << endl;
    cout << "================================================================" << endl;
    cout << "o valor com arredondamentos: " <<endl;
    cout << "x = ";
    printf("%.2f", resultP);
    cout << " ou x = ";
    printf("%.2f", resultN);
    cout << endl;
    cout << "================================================================" << endl;

}

void ex2() {
    int n, i, m=0, flag=0;  
    cout << "================================================================" << endl;
    cout << "Insira o numero: ";  
    cin >> n;
    cout << "================================================================" << endl;
    m=n/2;  
    
    for(i = 2; i <= m; i++) {

        if(n % i == 0)  
        {  
            cout<< n <<" nao e um numero primo."<<endl;  
            flag=1;  
            break;  
        }  
    }  

    if (flag==0)  {
        cout << n << " e um numero primo."<<endl;  
    }

    cout << "================================================================" << endl;
}

void ex3() {

    double n[3][4];
    double nM[4]; 
    
    //numeros guardados
    {
        n[0][0] = 5 ;
        n[0][1] = 10 ;
        n[0][2] = 15 ;
        n[0][3] = 20 ;
        n[1][0] = 25 ;
        n[1][1] = 30 ;
        n[1][2] = 35 ;
        n[1][3] = 40 ;
        n[2][0] = 45 ;
        n[2][1] = 50 ;
        n[2][2] = 55 ;
        n[2][3] = 60 ;
    }

    cout << "================================================================" << endl;
    for(int i = 0 ; i < sizeof(n[0])/sizeof(n[0][0]); i++) {
        nM[i] = sum(n[0][i],n[1][i],n[2][i]);
        cout << "valor da " << i+1 << " coluna: " << nM[i] << endl;
    }
    cout << "================================================================" << endl;
}

int main(){
    ex3();
    return 0;
}