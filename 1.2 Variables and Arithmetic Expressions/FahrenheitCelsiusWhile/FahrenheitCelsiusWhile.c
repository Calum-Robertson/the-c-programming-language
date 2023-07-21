#include "stdio.h"

void fahrenheitToCelsius(){

    //initialization
    float fahr, celsius;
    int lower, upper, step;

    //declaration
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("--Fahrenheit to Celsius table--\n");    //exercise 1.3

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
}