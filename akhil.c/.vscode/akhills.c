#include <stdio.h>
#include <stdlib.h>
    int main(void){
        int num1,num2;
        printf("enter 2 number");
        scanf("%d%d",&num1,&num2);
        if(num1>num2){
            printf("greatest number is %d",num1);

        }
        else{
            printf("greatest number is %d",num2);
        }
        return 0;    
        }
        