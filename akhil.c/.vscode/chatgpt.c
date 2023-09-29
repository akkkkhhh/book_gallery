#include <stdio.h>

int check_pass_fail(float mark) {
    float pass_mark = 50.0;
    
    if (mark >= pass_mark) {
        return 1; // 1 represents Pass
    } else {
        return 0; // 0 represents Fail
    }
}

int main() {
    float mark;
    
    printf("Enter the student's mark: ");
    scanf("%f", &mark);
    
    int result = check_pass_fail(mark);
    if (result == 1) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }
    
    return 0;
}

