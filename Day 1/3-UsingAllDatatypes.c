#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    printf("This program will use all the datatypes available in C language.\n");

    int number;
    float floatValue;
    double doubleValue;
    char character;
    char string[20];
    
    printf("Enter an Integer: ");
    scanf("%d", &number);
    
    printf("Enter a Real Value: ");
    scanf("%f", &floatValue);

    printf("Enter another Decimal value: ");
    scanf("%lf", &doubleValue);

    printf("Enter you name: ");
    scanf("%s", string);

    // Other way: 
    // fgets(string, 20, stdin);

    printf("Enter a character:  ");
    character = getchar();

    printf("Value of integer variable is: %d\n", number);
    printf("Value of float variable is: %f\n", floatValue); 
    printf("Value of double variable is: %lf\n", doubleValue); 
    printf("Value of character variable is: %c\n", character);
    printf("Value of string variable is: %s\n", string);
    return 0;
}