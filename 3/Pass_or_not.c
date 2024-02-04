#include<stdio.h>

int main(){
    
    int maths, physics, chemistry;

    printf("Enter the number of Maths : \n");
    scanf("%d", &maths);

    printf("Enter the number of Physics : \n");
    scanf("%d", &physics);

    printf("Enter the number of Chemistry : \n");
    scanf("%d", &chemistry);
    
    float total;
    total=(maths+physics+chemistry)/3;

    if(total<40 || maths<33 || physics<33 || chemistry<33){
        printf("Your total percentage is %d and you are Faild!", (int)total);        
    }

    else {
        printf("Your total percentage is %d and you are Pass!", (int)total);  
    }

    return 0;
}