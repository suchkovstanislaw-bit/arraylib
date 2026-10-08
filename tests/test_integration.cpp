#include "arraylib.h"

#include <cassert>
#include <cmath>
#include <cstddef>
#include <iostream>

int main() {
    int values[] = {7, 3, 9, 1, 5, 8, 2, 6, 4};
    const std::size_t n = sizeof(values) / sizeof(values[0]);

    assert(arr_sum(values, n) == 45);
    assert(arr_min(values, n) == 1);
    assert(arr_max(values, n) == 9);

    const double average = arr_average(values, n);
    assert(average >= arr_min(values, n));
    assert(average <= arr_max(values, n));

    assert(std::fabs(arr_median(values, n) - 5.0) < 1e-9);

    std::cout << "Все интеграционные тесты пройдены\n";
    return 0;
}