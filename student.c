#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[50];
};
typedef struct student stud;
void bubbleSort(stud arr[],int n)
{
    int i,j;
    stud temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(arr[j].name,arr[j+1].name)>0)
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printStudents(stud arr[],int n)
{
    printf("Roll Number  Name\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t\t%s\n",arr[i].roll,arr[i].name);
    }
}
int main()
{
    int size;
    printf("Enter the number of students\n");
    scanf("%d",&size);
    stud students[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the roll of the student %d\n",i);
        scanf("%d",&students[i].roll);
        printf("Enter the name of the student %d\n",i);
        scanf("%s",&students[i].name);
    }
    printf("The students before sorting\n");
    printStudents(students,size);
    printf("The students after sorting\n");
    bubbleSort(students,size);
    printStudents(students,size);
    return 0;
}