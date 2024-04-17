#include<stdio.h>

void checkLeap(int year)
{
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        printf("The given year %d is a leap year.\n", year);
    }
    else
    {
        printf("The given year %d is not a leap year.\n", year);
    }
}

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    checkLeap(year);
    return 0;
}
