#include<stdio.h>
void insertionSort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
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
    int arr[]={9,8,3,4,2,5,7,12,8,9,3,4,14,28};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("The elements of the array before doing insertion sort\n");
    printElements(arr,len);
    printf("The elements of the array after doing inserton sort\n");
    insertionSort(arr,len);
    printElements(arr,len);
    return 0;
}