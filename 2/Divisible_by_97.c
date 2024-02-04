#include<stdio.h>

int main(){
    
    int number;

    printf("Enter a number to check if is it divisible by 97 : ");
    scanf("%d", &number);

    if (number % 97 == 0)
    {
        printf("%d is divisible by 97.", number);
    }
    else{
        printf("%d is not divisible by 97.", number);
    }
    return 0;
}