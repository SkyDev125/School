#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int divisores(int numero) {
    for (int i = 1; i <= numero; i++) {
        if (numero%i == 0) {
            cout << numero << " is divisible by " << i << endl;
        } else {
            cout << numero << " is not divisible by " << i << endl;
        }
    }
    return 0;
}

int main() {
    int value;
    cout << "Insert a integer" << endl;
    cin >> value;
    cout << "----------------------------------------------------------------" << endl;
    divisores(value);
    cout << "----------------------------------------------------------------" << endl;
    cout << "Programm finished" << endl;
}
