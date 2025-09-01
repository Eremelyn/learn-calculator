#include <stdio.h>
#include <math.h>

int main(){
    // Making my operand and operation variables //
    char operand;
    char num1;
    char num2;
    // Asking for the operand //

    printf("Enter an Operand (+, -, *, /)");

    // Reading results //

    scanf("%c", &operand);

    // Asking the values //

    printf("What numbers you mathin'?");
    
    // Reading Numbers //
    scanf("%lf %lf",&num1,&num2);

    // Math Section//

    switch (operand){
        case '+':
            printf("%lf + %lf = %lf", num1,num2,(num1 + num2));

            break;
        case '-':
            printf("%lf - %lf = %lf", num1,num2,(num1 - num2));

            break;

        case '*':
            printf("%lf * %lf = %lf", num1,num2,(num1 * num2));

            break;

        case '/':
            printf("%lf / %lf = %lf", num1,num2,(num1 / num2));
            
            break;



    }


}
