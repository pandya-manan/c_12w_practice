#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int flag=-1;
    for(int i=2;i<=(num/2);i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag!=-1)
    {
        printf("The given number %d is not a prime number.",num);
    }
    else
    {
        printf("The given number %d is a prime number.",num);
    }
    return 0;
}