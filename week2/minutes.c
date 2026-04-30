#include <stdio.h>

int main(void)
{
    //USE MODULUS "%" AND IF NOT THEN USE : a - (a / b) * b
    int Minutes;
    int Start_Time;

    printf("Movie running time (in minutes): ");
    scanf("%d", &Minutes);

    printf("\nStart time: ");
    scanf("%d", &Start_Time);

    int Runtime = Minutes/60;
    int Runtime2 = Minutes%60;

    int Endtime = Start_Time + Runtime;
    int Endtime2 = Start_Time + Runtime2;

    printf("The run time of the movie is %d hours and %d minutes.\n", Runtime, Runtime2);
    printf("You will finish the movie at %d:%d.\n", Endtime, Endtime2);


}
