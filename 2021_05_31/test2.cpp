#include <iostream>
#include <ctime>

using namespace std;

string dayofweek(string s);

int main(int argc, const char * argv[]) {

    cout << dayofweek("06/06/2021");

}

string dayofweek(string s) {                     //Function to calculate the day of the week

    std::string delimiter = "/";
    int i = 0;
    size_t pos = 0;
    std::string token[3];
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token[i] = s.substr(0, pos);
        s.erase(0, pos + delimiter.length());
        i++;
    }
    token[2] = s;

    cout << token[0] << " " << token[1] << " " << token[2] << endl;

    int d = stoi(token[0]);
    int m = stoi(token[1]);
    int y = stoi(token[2]);

    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    
    int weekday = ( y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
    cout << weekday << endl;
    
    if (weekday == 0) {

        return "Sunday";

    } else if (weekday == 1) {

        return "Monday";

    } else if (weekday == 2) {

        return "Tuesday";

    } else if (weekday == 3) {

        return "Wednesday";

    } else if (weekday == 4) {

        return "Thursday";

    } else if (weekday == 5) {

        return "Friday";

    } else if (weekday == 6) {

        return "Saturday";

    }
}