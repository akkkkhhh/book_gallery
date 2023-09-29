#include <stdio.h>
#include <stdlib.h>
    int main(void){
        flo num1,num2,num3,avg;
        printf("enter 3 number");
        scanf("%f%f%f",&num1,&num2,&num3,avg);
        avg=(num1+num2+num3)/3;
        printf("result is %f",avg);
        return 0;
    }