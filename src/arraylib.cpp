#include <algorithm>
#include <vector>
#include "arraylib.h"
using namespace std;



int arr_sum(const int* arr, size_t n) {
    int result = 0;
    for (size_t i = 0; i < n; ++i) {
        result += arr[i];
    }
    return result;
}

int arr_max(const int *arr, size_t n) {
    int result = arr[0];
    for (size_t i{0}; i < n; ++i){
        if (result < arr[i]){
            result = arr[i];
        }
    }
    return result;
}

int arr_min(const int *arr, size_t n) {
    int res = arr[0];
    for (size_t i = 0; i < n; ++i){
        if (arr[i] < res){
            res = arr[i];
        }
    }
    return res;
}

double arr_average(const int *arr, std::size_t n){
    int sum{0};
    double res{0};
    for (size_t i = 0; i < n; ++i){
        sum += arr[i];
    }
    double sumd = static_cast<double>(sum);
    double nd = static_cast<double>(n);
    res = sumd / nd;
    return res;
}


int arr_count_positive(const int *arr, size_t n){
    int res{0};
    for (size_t i{0}; i < n; ++i){
        if (arr[i] > 0) {
            res += 1;
        }
    }
    return res;
}


int arr_count_negative(const int *arr, size_t n) {
    int res{0};
    for (size_t i{0}; i < n; ++i){
        if (arr[i] < 0){
            res += 1;
        }
    }
    return res;
}

int arr_count_zero(const int *arr, size_t n) {
    int res{0};
    for (size_t i{0}; i < n; ++i){
        if (arr[i] == 0) {
            res += 1;
        }
    }
    return res;
}

int arr_product(const int *arr, size_t n){
    int res{1};
    for (size_t i{0}; i < n; ++i){
        res *= arr[i];
    }
    return res;
}

double arr_median(const int* arr, size_t n) {
    vector<int> sorted(arr, arr + n);
    sort(sorted.begin(), sorted.end());

    const std::size_t middle = n / 2;

    if (n % 2 == 1) {
        return sorted[middle];
    }

    return (sorted[middle - 1] + sorted[middle]) / 2.0;
}