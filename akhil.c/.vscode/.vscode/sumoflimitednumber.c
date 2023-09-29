#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int number,i,sum=0;
    printf("enter the numbers");
    scanf("%d",&number);
    for(i=1;i<number;i++){
        sum=sum+i;
    }
printf("result=