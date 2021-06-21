#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int D3(int x) {
    if (x%3 == 0) {
        cout << x << " is divisible by 3" << endl;
    } else {
        cout << x << " is not divisible by 3" << endl;
    }
    return 0;
}

int main() {
    int value;
    cout << "Insert a integer" << endl;
    cin >> value;
    D3(value);
    cout << "finished" << endl;
}
