# arraylib

Библиотека функций для обработки массивов целых чисел. Проект использует C++17 и CMake.

## Сборка

```sh
cmake -S . -B build
cmake --build build --parallel

## Запуск

```bash
./build/app
./build/variant_07
```

## Тесты

```bash
ctest --test-dir build --output-on-failure
```
## Вариант 7

Программа обрабатывает оценки по десяти дисциплинам и выводит среднее,
максимум, минимум, количество пятёрок, число оценок ниже 4 и медиану.

На macOS динамическая библиотека CMake собирается в файл `libarraylib.dylib`.