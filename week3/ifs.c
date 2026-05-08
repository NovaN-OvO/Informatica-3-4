#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 5;
    int c = 10;

    printf("%d == %d is %d \n", a, b, a == b); //Equal sign means comparison
    printf("%d != %d is %d \n", a, c, a != c); // != means "not equal"

    //Create a program to check if a number is negative
    int number;
    printf("Enter a number: ");
    scanf("%d", &number); //& means to store a value

    if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("%d is a positive number.\n", number);
    }
}
