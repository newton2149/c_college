#include <stdio.h>
int main() {
   char a[150];
   
   printf("Enter a string: ");
   gets(a);
   for (int i = 0, j; a[i] != '\0'; ++i) {
      while (!(a[i] >= 'a' && a[i] <= 'z') && !(a[i] >= 'A' && a[i] <= 'Z') && !(a[i] == '\0')) {
         for (j = i; a[j] != '\0'; ++j) {
            a[j] = a[j + 1];
         }
         a[j] = '\0';
      }
   }
   printf("Output String: ");
   puts(a);
   return 0;
}