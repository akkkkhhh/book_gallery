#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,num;
    printf("enter a number");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}