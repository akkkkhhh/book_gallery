#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,sum=0,n;
    printf("enter the number");
    scanf("%d",&n);
     for(i=1;i<n;i++)
     sum=sum+i;
    {
            printf("result=%d",sum);
    }
return 0;
}
