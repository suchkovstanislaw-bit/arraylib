#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int grades[] = {4, 5, 3, 4, 5, 5, 4, 3, 4, 5};
    const size_t n = sizeof(grades) / sizeof(grades[0]);
    int MaxM = arr_max(grades,n);
    int MinM = arr_min(grades, n);
    int fcount{0};
    int OthCount{0};
    for (int i{0}; i < n; ++i){
        if (grades[i] == 5){
            fcount += 1;
        }
        else if (grades[i] < 4){
            OthCount += 1;
        }
    }
    double median = arr_median(grades, n);
    double average = arr_average(grades, n);

    cout << "Оценки: ";
    for (size_t i = 0; i < n; ++i) {
        cout << grades[i] << (i + 1 == n ? '\n' : ' ');
    }

    cout << "Средняя оценка:       " << average << '\n'
            << "Максимальная оценка:  " << MaxM << '\n'
            << "Минимальная оценка:   " << MinM << '\n'
            << "Количество пятёрок:   " << fcount << '\n'
            << "Оценок ниже 4:        " << OthCount << '\n'
            << "Медиана оценок:       " << median << '\n';
    return 0;
}