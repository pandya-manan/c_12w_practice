#include<stdio.h>
void palindrome(int number)
{
    int num=number;
    static int palindrome;
    while(num!=0)
    {
        int digit=num%10;
        palindrome=(palindrome*10)+digit;
        num=num/10;
    }
    if(palindrome==number)
    {
        printf("The given number is a palindrome number %d",number);
    }
    else
    {
        printf("The given number is not a palindrome number %d",number);
    }
}
int main()
{
    int number;
    printf("Enter a number to check if its palindrome or not\n");
    scanf("%d",&number);
    palindrome(number);
    return 0;
}