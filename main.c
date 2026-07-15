// making calculator using switch
#include<stdio.h> 
int main(){
    float x,y, result;
    char op;
    printf("enter op +,-,*,/");
    scanf("%c",&op);
    printf("enter two no.");
    scanf("%f" "%f",&x,&y);
    switch(op)
    {
        case'+':
        result=x+y;
        printf("%f",result);
        break;
        case'-' :
        result=x-y;
        printf("%f",result);
        break;
        case'*':
        result=x*y;
        printf("%f",result);
        break;
        case'/':
        result=x/y;
        printf("%f",result);
        break;
        default:
          printf("!error");
    


    }
    return 0;
}