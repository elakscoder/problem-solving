#include<stdio.h>
int main()
{
    int age=30;
    double gpa=8.6;
    char grade='A';

    int *Page=&age;
    double *Pgpa=&gpa;
    char *Pgrade=&grade;

    int **Ppage=&Page;

    printf("age's address: %p\n",*Page);
    printf("gpa's address: %p\n",Pgpa);
    printf("grade's address:%p\n",Pgrade);

    printf("Ppage's address: %p\n",Ppage);

    return 0;

}
