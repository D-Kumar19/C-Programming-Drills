#include <stdio.h>

double getInput(char* distanceConversion){
    double distance;
    printf("Enter the %s: ", distanceConversion);
    scanf("%lf", &distance);
    return distance;
}

void printMetersAndKms(double distance){
    printf("The Number of Meters in %.4lf Centimeters are: %.4lf\n", distance, distance/100);
    printf("The Number of Kilometers %.4lf in Centimeters are: %.4lf\n", distance, distance/100000);
}

void printCmsAndKms(double distance){
    printf("The Number of Centimeters in %.4lf Meters are: %.4lf\n", distance, distance*100);
    printf("The Number of Kilometers %.4lf in Meters are: %.4lf\n", distance, distance/1000);
}

void printCmsAndMeters(double distance){
    printf("The Number of Centimeters in %.4lf Kilometers are %.4lf\n", distance, distance*100000);
    printf("The Number of Meters %.4lf in Kilometers are %.4lf\n", distance, distance*1000);
}

int main()
{
    printf("This program will convert the Centimeters to Meters and Kilometers and vice versa!\n");
    printf("Enter '1' for Input in Centimeters!\n");
    printf("Enter '2' for Input in Meters!\n");
    printf("Enter '3' for Input in Kilometers!\n");
    printf("Enter your Choice: ");
    int choice;
    scanf("%d", &choice);
    
    double distance;
    if(choice == 1){
        distance = getInput("Centimeters");
        printMetersAndKms(distance);
    }
    else if(choice == 2){
        distance = getInput("Meters");
        printCmsAndKms(distance);
    }
    else if(choice == 3){
        distance = getInput("Kilometers");
        printCmsAndMeters(distance);
    }
    else{
        printf("Invalid Choice!");
    }
    return 0;
}