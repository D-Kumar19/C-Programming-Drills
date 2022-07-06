#include <stdio.h>

void sumUsingWhileLoop(int limit){
    int i = 0, sum = 0;
    while(i <= limit){
        sum = sum + i++;
    } 
    printf("The Sum of first %d Numbers using a While Loop is: %d\n", limit, sum);
}

void sumUsingDoWhileLoop(int limit){
    int sum = 0, i = 0;
    do{
        sum = sum + i++;
    }
    while(i <= limit);
    printf("The Sum of first %d Numbers using a Do-While Loop is: %d\n", limit, sum);
}

void sumUsingForLoop(int limit){
    int sum = 0;
    for(int i = 0; i <= limit; i++){
        sum = sum + i;
    } 
    printf("The Sum of first %d Numbers using a For Loop is: %d\n", limit, sum);
}

int main(){
    printf("This program will Print Sum of first 'N' Natural Numbers using different Loops!\n");
    
    int limit = 0;
    printf("Enter the Limit 'N': ");
    scanf("%d", &limit);
    
    printf("\nSum using different Loops: \n");
    // Using a While Loop: 
    sumUsingWhileLoop(limit);
    
    // Using a Do-While Loop:
    sumUsingDoWhileLoop(limit);
    
    // Using a For Loop:
    sumUsingForLoop(limit);
    
    return 0;
}