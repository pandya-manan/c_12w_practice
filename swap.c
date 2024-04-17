#include<stdio.h>
void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int num1,num2;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("The numbers before swapping are : num1= %d and num2= %d\n",num1,num2);
    swap(&num1,&num2);
    printf("The numbers after swapping are: num1= %d and num2= %d\n",num1,num2);
    return 0;
}