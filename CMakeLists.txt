cmake_minimum_required(VERSION 3.16)
project(arraylib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(arraylib SHARED
    src/arraylib.cpp
)

target_include_directories(arraylib
    PUBLIC include
)

add_executable(app
    main.cpp
)

target_link_libraries(app
    PRIVATE arraylib
)

enable_testing()

add_executable(test_unit
    tests/test_unit.cpp
)

target_link_libraries(test_unit
    PRIVATE arraylib
)

add_test(NAME unit COMMAND test_unit)
add_executable(test_integration
    tests/test_integration.cpp
)

target_link_libraries(test_integration
    PRIVATE arraylib
)

add_test(NAME integration COMMAND test_integration)

add_executable(variant_07
    examples/variant_07.cpp
)

target_link_libraries(variant_07
    PRIVATE arraylib
)