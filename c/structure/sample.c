// student information
#include <stdio.h>
#include <stdlib.h>

struct person
{
    char name[100];
    int age;
    char gender[100];
    int classLevel;
};

void printPerson(struct person *s, int cnt)
{
    printf("      INFORMATION OF STUDENT %d    \n", cnt);
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("Gender: %s\n", s->gender);
    printf("classLevel: %d\n", s->classLevel);
    printf("\n");
}

void inputPerson(struct person *s, int cnt)
{
    printf("\n    INFORMATION OF STUDENT %d   \n\n", cnt);
    printf("Enter student%d name: ", cnt);
    scanf("%s", s->name);
    printf("Enter student%d age: ", cnt);
    scanf("%d", &s->age);
    printf("Enter student%d gender: ", cnt);
    scanf("%s", s->gender);
    printf("Enter student%d class: ", cnt);
    scanf("%d", &s->classLevel);
    printf("\nSucessfully stored student%d\n\n", cnt);
}

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct person *persons = (struct person *)malloc(n * sizeof(struct person));

    for (int i = 0; i < n; i++)
    {
        inputPerson(&persons[i], i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printPerson(&persons[i], i + 1);
    }

    return 0;
}