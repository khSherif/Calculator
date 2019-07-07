#include <stdio.h>
float x,y;
char m;

int main(){
    printf("Enter the first number:");
    scanf("%f",&x);

    printf("Enter the operator:");
    scanf("%s",&m);

    printf("Enter the second number:");
    scanf("%f",&y);

    switch (m){

        case '+' :
        printf("%f+%f=%f",x,y,x+y);
        break;
        case '-' :
        printf("%f-%f=%f",x,y,x-y);
        break;
        case '*' :
        printf("%f*%f=%f",x,y,x*y);
        break;
        case '/' :
        printf("%f/%f=%f",x,y,x/y);
        break;
        default:
        printf("Error! Check the operator");
        break;
    }
    return 0;
}
