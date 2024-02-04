#include<stdio.h>

int main(){
    int height, width, area;

    printf("Enter the height of that rectangle : \n");
    scanf("%d", &height);
    
    printf("Enter the width of that rectangle : \n");
    scanf("%d", &width);

    area=height*width;

    printf("The area of that retangle is : %d", area);
    
    return 0;
}