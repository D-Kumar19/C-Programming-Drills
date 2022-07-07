#include <stdio.h>

int isTriangleValidCheckingAngles(int angle1, int angle2, int angle3){
    return (angle1 + angle2 + angle3 == 180);
}

int main(){
    printf("This program will check if Triangle is Valid or not by checking it's Angles!\n");
    
    int angle1, angle2, angle3;
    printf("Enter the 'First Angle' of the Triangle: ");
    scanf("%d", &angle1);
    printf("Enter the 'Second Angle' of the Triangle: ");
    scanf("%d", &angle2);
    printf("Enter the 'Third Angle' of the Triangle: ");
    scanf("%d", &angle3);
    
    if(angle1 <=0 || angle2 <=0 || angle3 <=0){
        printf("Triangle is not Valid as one or more sides are Negative or zero!\n");
        return 0;
    }

    if (isTriangleValidCheckingAngles(angle1, angle2, angle3) == 1){
        printf("This Triangle with Sides %d, %d and %d is valid!", angle1, angle2, angle3);
    }
    else{
        printf("This Triangle with Sides %d, %d and %d is not valid!", angle1, angle2, angle3);
    }
    return 0;
}