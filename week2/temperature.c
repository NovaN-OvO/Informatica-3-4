#include <stdio.h>

int main(void)
{
    float farenheit;
    printf("What is the current temperature in Farenheit? ");
    scanf("%f", &farenheit);
    float celcius = (farenheit - 32) / 1.8;
    printf("\n%.0f°F is equal to %.2f°C\n", farenheit, celcius);

    //-40°C is equal to -40°F
}
