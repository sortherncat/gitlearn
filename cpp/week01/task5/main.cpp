#include <iostream>

using namespace std;

int main() {
    int od[10000] = {0}, in = 0;
    for (int i = 1; i < 5000; i++)
        for (int j = 2; j * (i + 1) <= 10000; j++) od[j * (i + 1) - 1] = 1;
    cin >> in;
    for (int x = 0; x < 50; x++)
        if (!(od[x]))
            if (!(od[in - x - 2]))
                if ((x + 1) > in / 2)
                    break;
                else
                    cout << x + 1 << " " << in - x - 1 << endl;
    return 0;
}

/**
 * @brief 哥德巴赫猜想
 * @author SorthernCat (m13659311383@163.com)
 */