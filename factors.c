#include<stdio.h>
void factors(int num)
{
    for(int i=1;i<=num;i++)
    {
        if((num%i)==0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int number;
    scanf("%d",&number);
    factors(number);
    return 0;
}