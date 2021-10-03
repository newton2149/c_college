#include <stdio.h>
#include <stdlib.h>

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

void main()
{
   int n;
   struct student num;
   FILE *fptr;

   if ((fptr = fopen("student.bin","rb")) == NULL){
       printf("Error! opening file");
       exit(1);
   }

   for(n = 1; n < 4; ++n)
   {
      fread(&num, sizeof(struct student), 1, fptr); 
      printf("%s \n", num.name);
   }
   fclose(fptr); 
  
}