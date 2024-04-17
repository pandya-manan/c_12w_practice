#include<stdio.h>
void selectionSortDescending(int arr[],int n)
{
    int i,j,min_idx;
    for(i=0;i<n-1;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[min_idx])
                min_idx=j;
        }
        int temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
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
    int arr[]={9,4,73,34,28,43,66,54,34,43,54,8,2,89,43};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("The elements of the array before selection sort\n");
    printElements(arr,len);
    printf("The elements after doing the selection sort\n");
    selectionSortDescending(arr,len);
    printElements(arr,len);
    return 0;
}