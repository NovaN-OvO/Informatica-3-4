#include <stdio.h>

int main(void)
{
    printf("Enter your name and your favorite color: ");
    char name[50];
    char color[50];
    scanf("%s" , &name); //The "&" sets to save the value to the variable.
    scanf("%s", &color);
    printf("Hello %s, Your favorite color is %s!\n", name, color);
}
