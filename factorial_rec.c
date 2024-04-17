#include<stdio.h>
int fact(int num)
{
    if(num==0 || num==1)
        return 1;
    else 
        return num*fact(num-1);
}
int main()
{
    int number;
    printf("Enter the number whose factorial needs to be found\n");
    scanf("%d",&number);
    int result=fact(number);
    printf("Factorial of the number %d is %d",number,result);
    return 0;
}