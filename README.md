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