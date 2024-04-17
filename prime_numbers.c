#include<stdio.h>
void primeCheck(int num)
{
    for(int i=2;i<num;i++)
    {
        int number=i;
        int flag=-1;
        for(int i=2;i<=(number/2);i++)
        {
            if(number%i==0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==-1)
        {
            printf("%d ",number);
        }
    }
}
int main()
{
    int range;
    printf("Enter the range upto which the prime numbers must be printed\n");
    scanf("%d",&range);
    primeCheck(range);
    return 0;
}