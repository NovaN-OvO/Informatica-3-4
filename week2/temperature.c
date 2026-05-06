#include <stdio.h>

int main(void)
{
    float fahrenheit;
    printf("What is the current temperature in Fahrenheit? ");
    scanf("%f", &fahrenheit);
    float celcius = (fahrenheit - 32) / 1.8;
    printf("\n%.0f°F is equal to %.2f°C\n", fahrenheit, celcius);

    //-40°C is equal to -40°F
}
