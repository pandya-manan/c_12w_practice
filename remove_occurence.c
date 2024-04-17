#include<stdio.h>
void removeOccurence(int arr[], int size, int key) {
    int j = 0; // Index for the modified array
    for (int i = 0; i < size; i++) {
        if (arr[i] != key) {
            arr[j++] = arr[i]; // Copy non-key elements to the front
        }
    }
    // Fill the remaining elements with zero or any sentinel value
    for (; j < size; j++) {
        arr[j] = 0; // You can choose any sentinel value here
    }
}

void printElements(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            printf("%d ",arr[i]);
        }
        
    }
    printf("\n");
}
void acceptElements(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter the element for the position %d\n",i);
        scanf("%d",&arr[i]);
    }
}
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    acceptElements(arr,size);
    int key;
    printf("Enter the key value\n");
    scanf("%d",&key);
    printf("The array before the operation\n");
    printElements(arr,size);
    printf("The array after the operation\n");
    removeOccurence(arr,size,key);
    printElements(arr,size);
    return 0;
}