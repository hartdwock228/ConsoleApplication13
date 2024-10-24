
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int food = 100;
    cout << "Всего гречки было на начало подсчёта: " << food << endl;

    for (int month = 0; food > 0; month++) {
        food -= 4;
        cout << "После " << month << " месяца у вас в запасе останется " << food << " кг гречки." << endl;

        if (food <= 0) {
            cout << "После " << month << " месяца гречка закончится." << endl;
            break;
        }
    }
}
