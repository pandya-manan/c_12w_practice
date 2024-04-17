#include<stdio.h>

struct student
{
    int id;
    char name[50];
    int age;
};

typedef struct student stud;

void bubbleSortAge(stud arr[], int n)
{
    int i, j;
    stud temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j].age > arr[j + 1].age)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortId(stud arr[], int n)
{
    int i, j;
    stud temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j].id > arr[j + 1].id)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printStudents(stud arr[], int n)
{
    printf("Id Name\t Age\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d %s %d\n", arr[i].id, arr[i].name, arr[i].age);
    }
}

int main()
{
    int n;
    printf("Enter the number of students:\n");
    scanf("%d", &n);
    stud students[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter the id of the student %d: \n", i);
        scanf("%d", &students[i].id);
        printf("Enter the name of the student %d: \n", i);
        scanf("%s", students[i].name);
        printf("Enter the age of the student %d: \n", i);
        scanf("%d", &students[i].age);
    }
    printf("The students before the sorting\n");
    printStudents(students, n);
    printf("The students based on sorting on id\n");
    bubbleSortId(students, n);
    printStudents(students, n);
    printf("The students based on sorting on age\n");
    bubbleSortAge(students, n);
    printStudents(students, n);
    return 0;
}
