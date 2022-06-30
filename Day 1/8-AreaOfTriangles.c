#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int choice;
    printf("This program will calculate the area of a triangle\n");
    printf("Is it a normal triangle or an equilateral triangle?\n");
    printf("Enter '1' for normal and '2' for equilateral triangle\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        // For Usual triangles: 
        int base, height;
        printf("\nEnter the Base of the Triangle: ");
        scanf("%d", &base);
        printf("Enter the Height of the Triangle: ");
        scanf("%d", &height);

        printf("The Area of the Triangle is: %d!", (height*base)/2);
    }
    else if(choice == 2){
        // for equilateral triangles:
        int Side;
        printf("\nEnter the Length of side of the Equilateral Triangle = ");
        scanf("%d", &Side);
        
        printf("The Area of the Equilateral Triangle is %.1f ", (float) ((sqrt(3)/4)*(Side*Side )));
    }
    else{
        printf("\nNot what you are looking for.\n");
    }

    return 0;
}