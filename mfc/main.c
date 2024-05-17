#include <stdio.h>

int multiplication(int num1, int num2)
{
    int result=0;
    result=num1*num2;
    return result;
    
}

int main()
{
    int num1,num2,num3,num4;
    int res;
    printf("enter 4 numbers");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    res=num1+num2+num3+num4;
    printf("result %d",res);
}