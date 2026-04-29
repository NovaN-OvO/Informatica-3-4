#include <stdio.h>

int main(void)
{
    //printf("");

    char Item[50];
    float Price;
    int Quantity;

    printf("\t\tMAXI STORE\n**********************************************\n");
    printf("Item: ");
    scanf("%c", &Item);

    printf("Price: ");
    scanf("%f", &Price);

    printf("\nQuantity bought: \n");
    scanf("%d", &Quantity);

    printf("\n**********************************************");

    float total = Quantity*Price;
    printf("\nTotal: %f\n", total);
}
