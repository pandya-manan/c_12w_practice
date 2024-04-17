#include<stdio.h>
void reverse(int number)
{
    int num=number;
    static int reverse;
    while(num!=0)
    {
        int digit=num%10;
        reverse=(reverse*10)+digit;
        num=num/10;
    }
    printf("The reverse format of the given number %d is %d",number,reverse);
}
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    reverse(number);
    return 0;
}