#include<stdio.h>
void largestCheck(int num1,int num2,int num3)
{
    if(num1>=num2 && num1>=num3)
    {
        printf("The largest of the three numbers is %d",num1);
    }
    else if(num2>=num3)
    {
        printf("The largest of the three numbers is %d",num2);
    }
    else
    {
        printf("The largets of the three numbers is %d",num3);
    }
}
int main()
{
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    largestCheck(a,b,c);
    return 0;
}