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
    printf("Item\t\tPrice\tQuantity\tCode\n");

    //Chips
    //Use for %f to remove decimal zeros-> "%.2f"
    printf("Chips\t\t$%.2f\t%d\t\t%c\n", Price1, Quantity_Chips, Selection1);

    //Soda
    printf("Soda\t\t$%.2f\t%d\t\t%c\n", Price2, Quantity_Soda, Selection2);

    //Candies
    printf("Candy\t\t$%.2f\t%d\t\t%c\n", Price3, Quantity_Candy, Selection3);
}
