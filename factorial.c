#include<stdio.h>
void factorial(int num)
{
    int num2=num;
    int factorial=1;
    while(num>=1)
    {
        factorial*=num;
        num-=1;
    }
    printf("The factorial of %d is %d",num2,factorial);
}
int main()
{
    int number;
    printf("Please enter a number whose factorial needs to be found\n");
    scanf("%d",&number);
    factorial(number);
    return 0;
}