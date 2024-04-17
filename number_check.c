#include<stdio.h>
void numberCheck(int num)
{
    if(num<0)
        printf("The number is negative %d",num);
    else if(num>0)
        printf("The number is positive %d",num);
    else if(num==0)   
        printf("The number is zero %d",num);
    else
        printf("Give a valid number %d",num);
}
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    numberCheck(number);
    return 0;
}