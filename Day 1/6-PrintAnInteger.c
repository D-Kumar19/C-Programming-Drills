#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("This program will get the number from user and print it to stdout!\n");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Your entered number is: %d", num);
    return 0;
}