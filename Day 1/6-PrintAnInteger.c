#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("This program will generate a random number and print it to console!\n");

    srand(time(NULL));
    printf("Your entered number is: %d", rand() % 100 + 1);
    return 0;
}