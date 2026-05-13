#include <stdio.h>

// 1. Prototype
void c_to_f(void);
void f_to_c(void);

int main(void)
{
    printf("Temperature Converter\n");
    printf("1. Celcius to Fahrenheit\n");
    printf("2. Fahrenheit to Celcius \n");
    printf("Enter your option: ");
    int user_response;
    scanf("%d", &user_response);

    if (user_response == 1){
        // 3. Call
        c_to_f();
    } else if (user_response == 2){
        f_to_c();
    } else {
        printf("Invalid option. \n");
    }

}
/////////////////////////////////////////////////////////
// 2. Define
void c_to_f(void){

    int celcius;
    printf("What is the temperature in Celcius? ");
    scanf("%d", &celcius);

    float fahrenheit = (celcius * 1.8 ) + 32;
    printf("%d°C = %.0f°F\n", celcius, fahrenheit);
}
// Define-2
void f_to_c(void){

    int fahrenheit;
    printf("What is the temperature in Fahrenheit? ");
    scanf("%d", &fahrenheit);

    float celcius = (fahrenheit -32 ) / 1.8;
    printf("%d°F = %.0f°C\n", fahrenheit, celcius);
}
