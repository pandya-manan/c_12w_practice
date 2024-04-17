#include<stdio.h>
void insertionSortDesc(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]<key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
    int arr[]={3,2,8,3,4,9,10,17,12,13,8,4,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("The array elements before doing descending insertion sort\n");
    printElements(arr,len);
    printf("The array elements after doing descending insertion sort\n");
    insertionSortDesc(arr,len);
    printElements(arr,len);
    return 0;
}