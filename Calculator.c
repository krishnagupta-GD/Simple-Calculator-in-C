#include <stdio.h>

int main(){

    char op;
    float n1,n2,res=0.0f;

    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter[Number 1][+-*/][Number 2]\n");

    scanf("%f %c %f",&n1,&op,&n2);

    switch(op)

    {
        case '+':
        res= n1+n2;
        break;

        case '-':
        res= n1-n2;
        break;

        case '*':
        res= n1*n2;
        break;

        case '/':
        res=n1/n2;
        break;

        default:
        printf("INVALID OPERATOR!!!");
        break;
    }
    printf("%.2f %c %.2f = %.2f",n1,op,n2,res);

    return 0;
}