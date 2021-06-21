#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

string PhoneProvider(string phoneN){
    string first3;
    first3 = phoneN.substr(0,3);
    switch(stoi(first3)){
        case 921: {
            return "Vodafone";
            break;
        }
        case 929: {
            return "Nos";
            break;
        }
        case 925: {
            return "Moche";
            break;
        }
    }
}

int main() {
    string phoneN;
    string phoneProvider;

    cout << "Insert your phone number" << endl;
    cin >> phoneN;
    phoneProvider = PhoneProvider(phoneN);
    cout << "your phone number corresponds to " << phoneProvider << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Program finished" << endl;
}
