#include <stdio.h>

void printTablePositiveLimit(int number, int limit){
    for(int i = limit; i >= 0 ; i--){
        printf("%d   *   %d   =   %d\n", number, i, number*i);
    }
}

void printTableNegativeLimit(int number, int limit){
    for(int i = limit; i <= 0 ; i++){
        printf("%d   *   %d   =   %d\n", number, i, number*i);
    }
}

int main(){
    printf("This program will print Multiplication table in Reverse Order!\n");
    
    int number, limit;

    printf("Enter the Number of the Multiplication table: ");
    scanf("%d", &number);
    printf("Enter the Limit of the Multiplication table: ");
    scanf("%d", &limit);
    
    printf("Multiplication Table in Reverse Order!\n");
    if(limit >= 0){
        printTablePositiveLimit(number, limit);
    }
    else{
        printTableNegativeLimit(number, limit);
    }

    return 0;
}