#include<stdio.h>

int main(){
    
    double radius, height, volume;

    printf("Enter the radius of that cylinder : ");
    scanf("%lf", &radius);

    printf("Enter the height of cylinder : ");
    scanf("%lf", &height);

    volume=3.14159265359*radius*radius*height;

    printf("The volume of that cylinder is : %lf", volume);

    return 0;
}