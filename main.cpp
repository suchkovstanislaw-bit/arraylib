#include "arraylib.h"

#include <cstddef>
#include <iostream>

int main() {
    int numbers[] = {4, 5, 3, 4};
    const std::size_t n = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Сумма: " << arr_sum(numbers, n) << '\n';
    std::cout << "Медиана: " << arr_median(numbers, n) << '\n';

    return 0;
}