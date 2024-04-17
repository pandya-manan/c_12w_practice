#include<stdio.h>

int sum(int num)
{
    if(num == 0)
        return 0; // Base case: sum of first 0 natural numbers is 0
    else 
        return num + sum(num - 1); // Recursively calculate sum of num - 1 natural numbers and add num to it
}

int main()
{
    int range;
    printf("Enter the range of the numbers: ");
    scanf("%d", &range);
    int result = sum(range);
    printf("Sum of natural numbers from 1 to %d is: %d\n", range, result);
    return 0;
}
