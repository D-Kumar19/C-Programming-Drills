#include <stdio.h>
#include <stdlib.h>

int main(){
    
    printf("This program will calculate the area and perimeter of a rectangle!\n");

    int length, breadth;
    printf("Enter Length of the Rectangle: ");
    scanf("%d", &length);
    printf("Enter Breadth of the Rectangle: ");
    scanf("%d", &breadth);
    
    if(length > 0 && breadth > 0){
        printf("The Perimeter of the Rectangle is %d\n", (length * 2 + breadth * 2));
        printf("The Area of the Rectangle is %d\n", length * breadth);
    }
    else{
        printf("Sorry! Poor choice!\n");
    }

    return 0;
}