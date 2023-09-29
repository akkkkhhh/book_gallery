#include <stdio.h>
#include <stdlib.h>
    int main(void){
        float num1,num2,choice,result;
        printf("enter 2 number");
        scanf("%f%f",&num1,&num2);
         printf("1 for addition \n2 for substraction \n3 for division \n4 for multiplication \n enter your choice ");
            scanf("%f",&choice);
            if(choice==1){
                result=num1+num2;
            }
            else if(choice==2){
            result=num1-num2;
            printf("result=%f",result);
            }
            else if(choice==3){
                result=num1/num2;
                printf("result=%f",result);
            }
            else if(choice==4){
                result=num1*num2;
                printf("result=%f",result);
            }
            else{
                printf("you are a fool");

            }
            
            
            return 0;

    }