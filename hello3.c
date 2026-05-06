#include <stdio.h>

int main(void)
{
    printf("Enter your name: ");
    char name[50];
    scanf("%s", &name);

    printf("\nEnter your age: ");
    int age;
    scanf("%d", &age);

    printf("\nEnter your favorite color: ");
    char color[50];
    scanf("%s", &color);

    printf("Hello %s! you are %d years old, and your favorite color is %s.\n", name, age, color);
}
