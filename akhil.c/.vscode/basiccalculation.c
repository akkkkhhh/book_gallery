#include <stdio.h>
#include <stdlib.h>
int main(void){
    int num1,num2,choice,result;
    printf("enter 2 numbers");
    scanf("%d%d",&num1,&num2);
    printf("1 for adittion \n2 for substraction \n3 for multiplication \n4 for divition \nenter your choice");
    scanf("%d",&choice);
    if(choice==1){
        result=num1=num2;
    }
    else if(choice==2){
        result=num1-num2;
    }
    else if(choice==3){
        result=num1*num2;
    }
    else if(choice==4){
        result=num1/num2;
    }
    else
    printf("you are a fool");
    return 0;
    }
    
    
    
