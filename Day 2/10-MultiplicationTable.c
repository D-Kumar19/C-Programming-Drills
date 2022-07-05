#include <stdio.h>

int main(){
    
    printf("This program will print Multiplication Table for the Limit and Number given!\n");
    
    int number, limit;
    printf("Enter the number of the Multiplication Table: ");
    scanf("%d", &number);
    printf("Enter the Limit of the Multiplication Table: ");
    scanf("%d", &limit);

    for(int i = 1; i <= limit ; i++){
        printf("%d * %d = %d\n", number, i, number*i);
    }
    
    return 0;
}