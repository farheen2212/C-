#include <stdio.h>
struct employee
{
    char    name[30];
    int     empId;
    float   salary;
    int     age;
    char    gender[100];
};
 
int main()
{
    struct employee emp;
    printf("\nEnter details :\n");
    printf("Name :");          gets(emp.name);
    printf("ID :");            scanf("%d",&emp.empId);
    printf("Salary :");        scanf("%f",&emp.salary);
    printf("age :");            scanf("%d",&emp.age);
    printf("gender :");         scanf("%d",&emp.age);
    
    printf("\nEntered detail is:");
    printf("Name: %s\n"   ,emp.name);
    printf("Id: %d\n\n"     ,emp.empId);
    printf("Salary: %f\n" ,emp.salary);
    printf("age: %d\n"    ,emp.age);
    printf("gender: %c\n" ,emp.gender);
    return 0;