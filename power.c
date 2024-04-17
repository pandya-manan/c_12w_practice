#include<stdio.h>
long power(int num,int exp)
{   
    if(exp==1)
        return num;
    else if(exp==0)
        return 1;
    else
        return num*power(num,exp-1);
    
}
int main()
{
    int number,exponential;
    printf("Enter a number\n");
    scanf("%d",&number);
    printf("Enter the exponent\n");
    scanf("%d",&exponential);
    long result=power(number,exponential);
    printf("The result for the number %d raised to the power %d is %ld",number,exponential,result);
    return 0;
}