#include <stdio.h>

void printTablePositiveLimit(int number, int limit){
    for(int i = 1; i <= limit ; i++){
        printf("%d   *   %d   =   %d\n", number, i, number*i);
    }
}

void printTableNegativeLimit(int number, int limit){
    for(int i = -1; i >= limit ; i--){
        printf("%d   *   %d   =   %d\n", number, i, number*i);
    }
}

int main(){
    
    printf("This program will print Multiplication Table for the Limit and Number given!\n");
    
    int number, limit;
    printf("Enter the number of the Multiplication Table: ");
    scanf("%d", &number);
    printf("Enter the Limit of the Multiplication Table: ");
    scanf("%d", &limit);

    printf("Multiplication Table!\n");
    if(limit >= 0){
        printTablePositiveLimit(number, limit);
    }
    else{
        printTableNegativeLimit(number, limit);
    }
    
    return 0;
}