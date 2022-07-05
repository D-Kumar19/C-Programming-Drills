#include <stdio.h>
#include <stdlib.h>

double getInput(char* temperatureType){
    double temperature;
    printf("Enter Temperature in %s: ", temperatureType);
    scanf("%lf", &temperature);
    return temperature;
}

void printTemperatureCelsius(double temperature){
    printf("The Temperature in Fahrenheit of %lf Celsius is: %lf\n", temperature, ((temperature * 9/5) + 32));
    printf("The Temperature in Kelvin of %lf Celsius is: %lf\n", temperature, (temperature + 273.15));
}

void printTemperatureFahrenheit(double temperature){
    double temperatureInFahrenheit = (temperature -32) * 5/9;
    printf("The Temperature in Celsius of %lf Fahrenheit is: %lf\n", temperature, temperatureInFahrenheit);
    printf("The Temperature in Kelvin of %lf Fahrenheit is: %lf\n", temperature, (temperatureInFahrenheit + 273.15));
}

void printTemperatureKelvin(double temperature){
    double temperatureInKelvin = temperature - 273.15;
    printf("The Temperature in Celsius of %lf Kelvin is: %lf\n", temperature, temperatureInKelvin);
    printf("The Temperature in Fahrenheit of %lf Kelvin is: %lf\n", temperature, ((temperatureInKelvin * 9/5) + 32));
}

int main(){
    
    printf("This program will convert Temperature in Celsius, Fahrenheit, Kelvin!\n");
    printf("Enter '1' for Input in Celsius!\n");
    printf("Enter '2' for Input in Fahrenheit!\n");
    printf("Enter '3' for Input in Kelvin!\n");
    printf("Enter your Choice: ");
    int choice;
    scanf("%d", &choice);
    
    double temperature;
    if(choice == 1){
        temperature = getInput("Celsius");
        printTemperatureCelsius(temperature);
    }
    else if(choice == 2){
        temperature = getInput("Fahrenheit");
        printTemperatureFahrenheit(temperature);
    }
    else if(choice == 3){
        temperature = getInput("Kelvin");
        printTemperatureKelvin(temperature);
    }
    else{
        printf("Invalid Choice!");
    }
    return 0;
}