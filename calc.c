#include <stdio.h>

// 1. Prototype
void add(void);
void subtract(void);
void multiply(void);
void divide(void);

int main(void)
{

    printf("Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Divition\n");
    printf("Enter your option: ");
    int user_response;
    scanf("%d", &user_response);

    if (user_response == 1){
        add();
    } else if (user_response == 2){
        subtract();
    } else if (user_response == 3){
        multiply();
    } else if (user_response == 4){
        divide();
    } else {
        printf("Invalid option. \n");
    }

}

void add(void){
    int a;
    int b;
    printf("What is the first number you want to add? ");
    scanf("%d", &a);

    printf("What is the second number you want to add? ");
    scanf("%d", &b);

    int addition = a + b;

    printf("The addition of %d and %d is equal to %d\n", a, b, addition);
}

void subtract(void){
    int a;
    int b;
    printf("What is the first number you want to subtract? ");
    scanf("%d", &a);

    printf("What is the second number you want to subtract? ");
    scanf("%d", &b);

    int sub = a - b;

    printf("The subtraction of %d and %d is equal to %d\n", a, b, sub);
}

void multiply(void){
    int a;
    int b;
    printf("What is the first number you want to multiply? ");
    scanf("%d", &a);

    printf("What is the second number you want to multiply? ");
    scanf("%d", &b);

    int mult = a * b;

    printf("The multiplcation of %d and %d is equal to %d\n", a, b, mult);
}

void divide(void){
    float a;
    float b;
    printf("What is the first number you want to divide? ");
    scanf("%f", &a);

    printf("What is the second number you want to divide? ");
    scanf("%f", &b);

    float div = a / b;

    if (a == 0){
        printf("The divition of %.2f and %.2f is equal to %.2f\n", a, b, div);
    } else if (b == 0){
        printf("Undefined (you cannot divide by 0).\n");
    } else {
        printf("The divition of %.2f and %.2f is equal to %.2f\n", a, b, div);
    }

}
