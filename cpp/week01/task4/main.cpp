#include <iostream>
using namespace std;

int main() {
    for (int h = 1; h <= 9; h++)
        for (int t = 0; t <= 9; t++)
            for (int o = 0; o <= 9; o++)
                if ((h * h * h + t * t * t + o * o * o) ==
                    (h * 100 + t * 10 + o))
                    cout << h << t << o << endl;
    return 0;
}

/**
 * @brief 水仙花
 * @author SorthernCat (m13659311383@163.com)
 */