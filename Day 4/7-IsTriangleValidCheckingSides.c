#include <stdio.h>

int isTriangleValidBySides(int side1, int side2, int side3){
    return ((side1 + side2) > side3 && (side1 + side3) > side2 && (side2 + side3) > side1);
}

int main(){

    printf("This program will check if a Triangle is Valid or not by checking it's Sides!\n");
    
    int side1, side2, side3;
    printf("Enter the 'First Side' of the Triangle: ");
    scanf("%d", &side1);

    printf("Enter the 'Second Side' of the Triangle: ");
    scanf("%d", &side2);
    
    printf("Enter the 'Third Side' of the Triangle: ");
    scanf("%d", &side3);
    

    if (isTriangleValidBySides(side1, side2, side3) == 1){
        printf("This Triangle with Sides %d, %d and %d is valid!", side1, side2, side3);
    }
    else{
        printf("This Triangle with Sides %d, %d and %d is not valid!", side1, side2, side3);
    }
    return 0;
}