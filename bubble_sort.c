#include<stdio.h>
void bubbleSort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={9,6,3,2,5,4,9,8,1};
    printf("The array elements before doing bubble sort\n");
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    bubbleSort(arr,len);
    printf("\nThe array elements after bubble sort\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}