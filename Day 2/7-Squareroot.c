#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("This program will print Squareroot of a number entered!\n");
    
    int number;
    printf("Enter the Number: ");
    scanf("%d", &number);
    printf("The Squareroot of the number %d is %.2f!", number, sqrt(number));
    
    return 0;
}