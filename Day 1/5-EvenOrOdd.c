#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("This program will get the number from user and check if it is a Prime number or not.\n");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("%d is even!", num);
    }
    else {
        printf("%d is odd!", num);
    }
    return 0;
}