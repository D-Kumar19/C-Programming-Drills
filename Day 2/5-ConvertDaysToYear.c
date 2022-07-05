#include <stdio.h>
#include <stdlib.h>

int main(){
    
    printf("This program will get Days and tell the number of Years, Months, Weeks and Days!\n");
    printf("Enter the Number of Days: ");
    int days;
    scanf("%d", &days);
    
    int daysLeft = 0, weeks = 0, months = 0, years = 0;
   
    years = days/365;
    months = (days % 365)/30;
    weeks = (days - ((months*30)+(years*365)))/7;
    daysLeft = (days - ((weeks*7)+(months*30)+(years*365)));
    
    printf("The Number of Years in %d Days are: %d\n", days, years);
    printf("The Number of Months in %d Days are: %d\n", days, months);
    printf("The Number of Weeks in %d Days are: %d\n", days, weeks);  
    printf("The Number of Days in %d Days are: %d\n", days, daysLeft);
    
    return 0;
}