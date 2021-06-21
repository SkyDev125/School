#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <sstream> 
#include <fstream>
#include <math.h>

using namespace std;

double 2ndDegreeEquation(double a, double b, double c) {
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
    
    return resultP;
    return resultN;
}