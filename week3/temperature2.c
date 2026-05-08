#include <stdio.h>

int main(void)
{
    int celcius;
    printf("What is the temperature in Celcius? ");
    scanf("%d", &celcius);

    float fahrenheit = (celcius * 1.8 ) + 32;
    printf("%d°C = %.0f°F\n", celcius, fahrenheit);

    if (celcius < 0){
        printf("❄️ Freezing weather\n");
    } else if (celcius < 10){
        printf("🥶 Very cold weather\n");
    } else if (celcius < 20){
        printf("🧥 Chilly weather\n");
    } else if (celcius < 30) {
        printf("🖼️ Normal weather\n");
    } else if (celcius < 40) {
        printf("☀️ Hot weather\n");
    } else {
        printf("🔥 Very hot weather\n");
    }

}
