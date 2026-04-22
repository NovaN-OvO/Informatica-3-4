#include <stdio.h>

int main(void)
{
    //Variables
    //Chips
    int Quantity_Chips = 20;
    float Price1 = 1.50;
    char Selection1 = 'A'; //You have to put (') between the value.

    //Soda
    int Quantity_Soda = 15;
    float Price2 = 2.00;
    char Selection2 = 'B';

    //Candy
    int Quantity_Candy = 30;
    float Price3 = 0.75;
    char Selection3 = 'C';

    //Prints
    //Use commas.

    printf("Welcome to the Snack Shop! \n");
    printf("---------------------------\n");
    printf("Item \t Price \t Quantity \t Code \n");
    printf("\n");

    //Chips
    //Temporal note: ASK THE TEACHER ABOUT REMOVING DECIMALS. But if not-> Use for %f-> "%.2f"
    printf("Chips \t $%f %d \n", Price1, Quantity_Chips);
}
