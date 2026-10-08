#include "arraylib.h"

#include <cassert>
#include <cmath>
#include <iostream>

int main() {
    int values[] = {-5, 0, 3, 3, 8, -2};
    const std::size_t n = sizeof(values) / sizeof(values[0]);

    assert(arr_sum(values, n) == 7);
    assert(arr_max(values, n) == 8);
    assert(arr_min(values, n) == -5);

    assert(arr_count_positive(values, n) == 3);
    assert(arr_count_negative(values, n) == 2);
    assert(arr_count_zero(values, n) == 1);

    assert(arr_product(values, n) == 0);
    assert(std::fabs(arr_average(values, n) - 7.0 / 6.0) < 1e-9);

    int even_values[] = {7, 1, 9, 3};
    assert(std::fabs(arr_median(even_values, 4) - 5.0) < 1e-9);

    int odd_values[] = {5, 1, 3};
    assert(std::fabs(arr_median(odd_values, 3) - 3.0) < 1e-9);

    std::cout << "Все unit-тесты пройдены\n";
    return 0;
}