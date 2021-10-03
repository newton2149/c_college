#include <stdio.h>
#include <string.h>
struct student
{
    char name[80];
    int rollNumber;
    double maths;
    double physics;
    double chemistry;
    double computer;
    double english;
    double socialScience;
    double total;
};
struct student s[50];
void main()
{    int n;
    FILE *fptr;

    if ((fptr = fopen("student.bin", "wb")) == NULL)
    {
        printf("Error! opening file");

        exit(1);
    }
    printf("Enter number of students:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the student : ");
        scanf("%s", s[i].name);
        printf("Enter the RollNumber : ");
        scanf("%d", &s[i].rollNumber);
        printf("Enter the marks of the maths : ");
        scanf("%lf", &s[i].maths);
        printf("Enter the marks of the physics : ");
        scanf("%lf", &s[i].physics);
        printf("Enter the marks of the chemistry : ");
        scanf("%lf", &s[i].chemistry);
        printf("Enter the marks of the computer : ");
        scanf("%lf", &s[i].computer);
        printf("Enter the marks of the english : ");
        scanf("%lf", &s[i].english);
        printf("Enter the marks of the Social Science : ");
        scanf("%lf", &s[i].socialScience);
        s[i].total = s[i].maths + s[i].physics + s[i].chemistry + s[i].computer + s[i].english + s[i].socialScience;
        fwrite(&s[i], sizeof(struct student), 1, fptr);
    }
    fclose(fptr);
}