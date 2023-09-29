#include <stdio.h>
#include <stdlib.h>
    int main(void){
        float num1,num2,num3,avg;
        printf("enter 3 number");
        scanf("%f,%f,%f",&num1,&num2,num3,avg);
        printf("result is %f",avg);
        avg=(num1+num2+num3)/3;
        return 0;
    }