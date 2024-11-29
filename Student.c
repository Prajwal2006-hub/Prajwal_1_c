#include<stdio.h>
struct student
{
    char name[50];
    char gender;
    int age;
    char collegename[50];
    float marks; 
};
int main()
{
    struct student s1;
    printf("Enter the name:");
    scanf("%s",&s1.name);
    printf("Enter the gender:");
    scanf("%s",&s1.gender);
    printf("Enter the age:");
    scanf("%d",&s1.age);
    printf("Enter the collegename:");
    scanf("%s",&s1.collegename);
    printf("Enter the marks:");
    scanf("%f",&s1.marks);
    printf("\nStudent details\n");
    printf("Name:%s\n",s1.name);
    printf("Gender:%s\n",s1.gender);
    printf("Collegename:%s\n",s1.collegename);
    
