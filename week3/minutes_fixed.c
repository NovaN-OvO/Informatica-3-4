#include <stdio.h>

int main(void)
{
    //USE MODULUS "%" AND IF NOT THEN USE : a - (a / b) * b
    int Minutes;

    printf("Movie running time (in minutes): ");
    scanf("%d", &Minutes);

    int Start_h;
    int Start_m;
    printf("Start time: ");
    scanf("%d:%d", &Start_h, &Start_m);

    int Runtime = Minutes/60;
    int Runtime2 = Minutes%60;

    // Problem2: 182m > 5:59 >> 8:61
    int End_h = Start_h + Runtime; // end_h = 8
    int End_m = Start_m + Runtime2; // end_m = 61

    // This will update the variable value
    if (End_m >= 60){
        End_h = End_h + (End_m / 60);
        End_m = End_m % 60; // The remainder of the 61 minutes by 60 minutes is equal to 1 and it will show the remainder (n:01) instead of 61

    }

    printf("\nThe run time of the movie is %d hours and %d minutes.\n", Runtime, Runtime2);
    printf("You will finish the movie at %d:%02d\n", End_h, End_m);


}
