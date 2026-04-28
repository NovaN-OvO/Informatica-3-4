#include <stdio.h>

int main(void)
{
    //USE MODULUS "%"
    float Minutes1;
    float Hours1 = Minutes1 / 60;
    float Schedule1;
    float Schedule2 = Schedule1 + Hours1;
    //USE MODULUS "%" AND IF NOT THEN USE : a - (a / b) * b

    printf("Running time (in minutes): ");
    scanf("%f", &Minutes1);

    float Minutes2 = (Minutes1 % 60);

    printf("\nStart time:");
    scanf("%f", &Schedule1);

    printf("The movie will last %.0f hr and %.0f min\nEnd time: %.0f:%.0f\n", Hours1, Minutes2, Schedule2);

}
