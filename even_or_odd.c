#include<stdio.h>
void evenOrOdd(int num)
{
    if((num%2)==0)
    {
        printf("The given number is an even number %d",num);
    }
    else
    {
        printf("The given number is an odd number %d",num);
    }
}
int main()
{
    int number;
    printf("Enter a number \n");
    scanf("%d",&number);
    evenOrOdd(number);
    return 0;
}