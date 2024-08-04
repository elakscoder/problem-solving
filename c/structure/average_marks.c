#include <stdio.h>

struct student
{
    char name[100];
    int age;
    int arr[5];
};

void swap(struct student *s1, struct student *s2)
{
    struct student temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int compare(char *a, char *b)
{
    while (*a && *b && (*a == *b))
    {
        a++;
        b++;
    }

    if ((*a - *b) > 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void sname(struct student students[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (compare(students[j].name, students[j + 1].name))
            {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

void s(struct student students[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (students[j].age > students[j + 1].age)
            {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}
void getinput(int i, struct student *s)
{
    printf("\nEnter student%d name: ", i + 1);
    scanf("%s", s->name);
    printf("\nEnter student%d age: ", i + 1);
    scanf("%d", &s->age);
    printf("\nEnter student%d Tamil marks: ", i + 1);
    scanf("%d", &s->arr[0]);
    printf("\nEnter student%d English marks: ", i + 1);
    scanf("%d", &s->arr[1]);
    printf("\nEnter student%d Maths marks: ", i + 1);
    scanf("%d", &s->arr[2]);
    printf("\nEnter student%d Science marks: ", i + 1);
    scanf("%d", &s->arr[3]);
    printf("\nEnter student%d Social marks: ", i + 1);
    scanf("%d", &s->arr[4]);
}

void print(int i, struct student *students)
{
    printf("\nStudent%d name: %s", i + 1, students->name);
    printf("\nStudent%d age: %d", i + 1, students->age);
    printf("\nStudent%d tamil marks: %d", i + 1, students->arr[0]);
    printf("\nStudent%d english marks: %d", i + 1, students->arr[1]);
    printf("\nStudent%d maths marks: %d", i + 1, students->arr[2]);
    printf("\nStudent%d science marks: %d", i + 1, students->arr[3]);
}

int main()
{
    int n;

    printf("Enter the number of entries: ");
    scanf("%d", &n);

    struct student students[n];
    // get input
    for (int i = 0; i < n; i++)
    {
        getinput(i, &students[i]);
    }

    sname(students, n);
    for (int i = 0; i < n; i++)
    {
        print(i, &students[i]);
    }

    return 0;
}