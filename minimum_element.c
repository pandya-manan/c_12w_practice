#include<stdio.h>
int smallestElementFinder(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];        
        }
    }
    return min;
}
void acceptElements(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter the element for the position %d\n",i);
        scanf("%d",&arr[i]);
    }
}
void printElements(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
}
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    acceptElements(arr,size);
    printf("The elements of the array are: \n");
    printElements(arr,size);
    int smallestElement=smallestElementFinder(arr,size);
    printf("The smallest element in the array is: %d ",smallestElement);
    return 0;
}