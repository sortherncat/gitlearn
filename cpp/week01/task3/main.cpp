#include <iostream>

using namespace std;

int main() {
    int in = 0, out = 1;
    cin >> in;
    char dot = getchar();

    if ((in < 0) || (dot == '.'))
        cout << "invalid input" << endl;
    else {
        while (in > 0) {
            out *= in;
            in--;
        }
        cout << out << endl;
    }

    return 0;
}

/**
 * @brief 阶乘
 * @author SorthernCat (m13659311383@163.com)
 */