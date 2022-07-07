#include <stdio.h>
#include <stdlib.h>

void pyramidUsingFor(int rows){
    printf("\nPYRAMID USING FOR LOOP!\n");
    
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= (2*rows-1); j++){
            if (j >= rows-(i-1) && j <= rows+(i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void reversePyramidUsingFor(int rows){
    printf("\nREVERSE PYRAMID USING FOR LOOP!\n");
    
    for(int i = 1; i <= rows; i++){
        for( int j = 1; j < i; j++){
            printf(" ");
        }
        for(int j = 1; j <= ((2*rows)-(2*i-1)); j++){
            printf("*");
        }
        printf("\n");
    }
}

void pyramidUsingWhile(int rows){
    printf("\nPYRAMID USING WHILE LOOP!\n");
    
    int i = 1;
    while (i <= rows){
        
        int j = 1;
        while (j <= (2*rows-1)){
            if (j >= rows-(i-1) && j <= rows+(i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
            
            j++;
        }
        
        printf("\n");
        i++;
    }
}

void reversePyramidUsingWhile(int rows){
    printf("\nREVERSE PYRAMID USING WHILE LOOP!\n");
    
    int i = 1;
    while (i <= rows){
        
        int j = 1;
        while (j < i){
            printf(" ");
            j++;
        }
        
        j = 1;
        while(j <= (2*rows-(2*i-1))) {
            printf("*");
            j++;
        }
        
        printf("\n");
        i++;
    }
}

void pyramidUsingDoWhile(int rows){
    printf("\nPYRAMID USING DO-WHILE LOOP!\n");
    
    int i = 1;
    do{
        
        int j = 1;
        do{
            if (j >= rows-(i-1) && j <= rows+(i-1)) {
                printf("*");
            }
            else{
                printf(" ");
            }
            

        j++;
        } while (j <= (2*rows-1));
        
        printf("\n");
        i++;
    } while (i <= rows);
}

void reversePyramidUsingDoWhile(int rows){
    printf("\nREVERSE PYRAMID USING DO WHILE LOOP!\n");
    
    int i = 1;
    do{
        
        int j = 1;
        do{
            if (j<i){
                printf(" "); 
                j++;
            }
        } while (j < i);
        
        j = 1;
        do{
            printf("*");
            j++;
        } while (j <= (2*rows-((2*i)-1)));
        
        printf("\n");
        i++;
    } while(i <= rows);
}

int main(){
    
    printf("This program will Print Pyramid of Stars and then Reverse Pyramid of Stars using different Loops\n");
    int rows = 0;
    
    printf("Enter the number of Rows of the Pyramid: ");
    scanf("%d", &rows);
    
    pyramidUsingFor(rows);
    reversePyramidUsingFor(rows);
    pyramidUsingWhile(rows);
    reversePyramidUsingWhile(rows);
    pyramidUsingDoWhile(rows);
    reversePyramidUsingDoWhile(rows);
    
    return 0;
}