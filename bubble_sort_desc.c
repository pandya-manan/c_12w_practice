#include<stdio.h>
void bubbleSortDesc(int arr[],int n)
{
    int i,j,temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printElements(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={9,5,8,6,7,4,9,3,6,0,4,8,5,9,3,4};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("The array elements before doing descending bubble sort\n");
    printElements(arr,len);
    printf("The array elements after doing descending bubble sort\n");
    bubbleSortDesc(arr,len);
    printElements(arr,len);
    return 0;
}