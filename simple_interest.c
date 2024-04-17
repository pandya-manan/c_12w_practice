#include<stdio.h>
float calc(float principal, float rate, int years)
{
    float SI=(principal*rate*years)/100;
    return SI;
}
int main()
{
    float principal,rate;
    int years;
    printf("Please enter the principal\n");
    scanf("%f",&principal);
    printf("Please enter the rate of interest\n");
    scanf("%f",&rate);
    printf("Please enter the number of years\n");
    scanf("%d",&years);
    float SI=calc(principal,rate,years);
    printf("The calculated simple interest is: %0.2f\n",SI);
    return 0;
}