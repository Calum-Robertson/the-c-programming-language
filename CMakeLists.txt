cmake_minimum_required(VERSION 3.25)
project(the_c_programming_language C)

set(CMAKE_C_STANDARD 11)

add_executable(the_c_programming_language main.c
        "1.1 Getting Started/Hello.c"
        "1.2 Variables and Arithmetic Expressions/FahrenheitCelsiusWhile/FahrenheitCelsiusWhile.c" "1.2 Variables and Arithmetic Expressions/CelsiusFahrenheitWhile/CelsiusFahrenheitWhile.c"
        "1.3 The For Statement/FahrenheitToCelsiusFor/FahrenheitToCelsiusFor.c" "1.3 The For Statement/FahrenheitToCelsiusFor/FahrenheitToCelsiusFor.h" "1.3 The For Statement/FahrenheitToCelsiusForReverse/FahrenheitToCelsiusForReverse.c" "1.3 The For Statement/FahrenheitToCelsiusForReverse/FahrenheitToCelsiusForReverse.h"
        "1.4 Symbolic Constants/FahrenheitToCelsiusForConstants/FahrenheitToCelsiusForConstants.c" "1.4 Symbolic Constants/FahrenheitToCelsiusForConstants/FahrenheitToCelsiusForConstants.h")