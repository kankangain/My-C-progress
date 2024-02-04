#include<stdio.h>

int main(){
    
    int i=0, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        printf("The number is : %d\n", i+1);
    }
    
    return 0;
}