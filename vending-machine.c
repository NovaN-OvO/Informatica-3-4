#include <stdio.h>

int main(void)
{
    //Separate the variables from the prints.
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
    //Chips
    printf("Vending Machine Stock \n");
    printf("----------------------------\n");
    printf("Item Name: Chips \n");// Add the backwards slash. And add new lines
    printf("Price: $%.2f \n" , Price1 );
    printf("Quantity available: %d \n", Quantity_Chips );
    printf("Selection Code: %c \n", Selection1 );
    printf("\n");

    //Sodas
    printf("Item Name: Soda \n");
    printf("Price: $%.2f \n", Price2);
    printf("Quantity available: %d \n", Quantity_Soda);
    printf("Selection Code: %c \n", Selection2);
    printf("\n");

    //Candies
    printf("Item Name: Candy\n");
    printf("Price: $%.2f \n", Price3);
    printf("Quantity available: %d \n", Quantity_Candy);
    printf("Selection Code: %c \n", Selection3);
    printf("\n");
}
