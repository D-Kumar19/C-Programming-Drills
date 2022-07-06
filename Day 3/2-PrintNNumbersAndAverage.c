#include <stdio.h>

double getAverage(int limit){
    int i = 1, sum = 0;
    
    do{
        sum = sum + i++;
    }
    while (i <= limit);
    return (double)(sum/limit);
}

void printResults(int limit, double average){
    printf("Average of all numbers till %d is: %0.3f\n", limit, average);
}

void printInReverseOrderNegative(int limit){
    printf("\nNumbers in Reverse Order:\n");
    do{
        printf("Num: %d\n", limit++);
    }
    while (limit <= 0);
}

void printInReverseOrder(int limit){
    printf("\nNumbers in Reverse Order:\n");
    do{
        printf("Num: %d\n", limit--);
    }
    while (limit >= 0);
}

int main(){
    printf("This program will take a Limit and Print average of Numbers till that Number and also Print numbers in Reverse Order!\n");

    int limit;
    printf("Enter the limit of the Loop: ");
    scanf("%d", &limit);
    
    double average = 0;
    if(limit < 0){
        average = getAverage(limit*-1);
        printResults(limit, average);
        printInReverseOrderNegative(limit);
    }
    else if(limit > 0){
        average = getAverage(limit);
        printResults(limit, average);
        printInReverseOrder(limit);
    }
    else{
        average = 0;
        printResults(limit, average);
        printInReverseOrder(limit);
    }
    
    return 0;
}