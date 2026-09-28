#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int hour = stoi(s.substr(0, 2));
    string period = s.substr(s.length() - 2);
    
    if (period == "AM") {
        if (hour == 12) hour = 0;
    } else {
        if (hour != 12) hour += 12;
    }
    
    printf("%02d%s\n", hour, s.substr(2, 6).c_str());
    
    return 0;
}