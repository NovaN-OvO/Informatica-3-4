#include <stdio.h>

int main(void)
{
    //printf("");

    char Item[50];
    float Price;
    int Quantity;

    printf("\t\tMAXI STORE\n**********************************************\n");
    printf("Item: ");
    scanf("%s", &Item);

    printf("Price: ");
    scanf("%f", &Price);

    printf("Quantity: ");
    scanf("%d", &Quantity);

    printf("\n**********************************************\n");

    float total = Quantity*Price;
    printf("\nItem\t\tQuantity\tPrice\n");
    printf("%s\t\t%d\t\t%.2f\n", Item, Quantity, Price);
    printf("\n----------------------------------------------\n");
    printf("\nTotal:\t\t\t\t%.2f\n", total);
    printf("\n----------------------------------------------\n");
    printf("Thank you for your purchase!\n");
}
