#include "stdio.h"

void celsiusToFahrenheit(){

    //initialization
    float celsius, fahr;
    int lower, upper, step;

    //declaration
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;

    printf("--Celsius to Fahrenheit table--\n");    //exercise 1.3

    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0)) + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }
}