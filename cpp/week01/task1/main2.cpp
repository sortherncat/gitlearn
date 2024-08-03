#include <iostream>
using namespace std;

int main() {
    char in;
    cin >> in;
    if ((in <= 'z') && (in >= 'a')) {
        if (in == 'z')
            cout << 'A' << endl;
        else
            cout << char(in - 31) << endl;
    } else if ((in >= 'A') && (in <= 'Z')) {
        if (in == 'Z')
            cout << 'a' << endl;
        else
            cout << char(in + 33) << endl;
    } else {
        cout << "invalid input" << endl;
    }
    return 0;
}