#include <stdio.h>
#include <stdlib.h>
#define PI 3.1459

int main(){
    
    printf("This program will calculate all the circle properties after getting radius from user!\n");

    int Radius;
    printf("Enter the Radius of the Circle: ");
    scanf("%d", &Radius);
    
    printf("The Diameter of the Circle is %d\n", 2 * Radius);
    printf("The Area of the Circle is %lf\n", (double) PI * Radius * Radius);
    printf("The Circumference of the Circle is %lf\n", (double) PI * 2 * Radius);
    
    return 0;
}