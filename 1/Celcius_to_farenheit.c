#include<stdio.h>

int main(){
    
    double cel, faren;

    printf("Enter the temprature in Celcius : ");
    scanf("%lf", &cel);

    faren=(cel*9/5)+32;

    printf("In Farenheit the temprature is : %lf F", faren);

    return 0;
}