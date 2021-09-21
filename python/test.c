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
char sortStudentsDescending(struct student a[50], int length)
{
    
    struct student temp ;
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (a[i].total < a[j].total)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void printRankList(struct student s[50], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int j=i+1;
        printf("%d : %s : %f \n ", s[i].rollNumber, s[i].name,s[i].total);
    }
}

void printSixtyPercentAbove(struct student s[50], int length)
{
    int j = 1;
    for (int i = 0; i < length - 1; i++)
    {
        if (s[i].total * 0.6 >= 360)
        {
            printf("%d : %s : %f \n ", s[i].rollNumber, s[i].name,s[i].total);
            j+=1;
        }
    }
}

void main()
{
    struct student s[50], *p = NULL;
    int n;
    printf("Enter number of students:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
       printf("Enter the name of the student : ");
        scanf("%s", s[i].name);
        printf("Enter the RollNumber : ");
        scanf("%d", &s[i].rollNumber);
        printf("Enter the marks of the maths");
        scanf("%lf", &s[i].maths);
        printf("Enter the marks of the physics");
        scanf("%lf", &s[i].physics);
        printf("Enter the marks of the chemistry");
        scanf("%lf", &s[i].chemistry);
        printf("Enter the marks of the computer");
        scanf("%lf", &s[i].computer);
        printf("Enter the marks of the english");
        scanf("%lf", &s[i].english);
        printf("Enter the marks of the Social Science");
        scanf("%lf", &s[i].socialScience);
        s[i].total = s[i].maths + s[i].physics + s[i].chemistry + s[i].computer + s[i].english + s[i].socialScience;
    }
    sortStudentsDescending(s,n);
    printf("\n RankList : \n");
    printRankList(s, n);
    printf("\n Students with Sixty Percent Above : \n");
    printSixtyPercentAbove(s, n);
}