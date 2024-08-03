#include <iostream>
#define d 60

using namespace std;

int main() {
    int de = 0, mi = 0, se = 0;
    cin >> de >> mi >> se;
    if ((de >= 0) && (mi >= 0) && (se >= 0))
        cout << (de + (double)mi / 60 + (double)se / 3600) << endl;
    else
        cout << "invalid input" << endl;
    return 0;
}

/**
 * @brief 数值转换
 * @author SorthernCat (m13659311383@163.com)
 */