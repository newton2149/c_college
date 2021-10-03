#include <stdio.h>
void read_words (FILE *f) {
    char x[1024];
  
    while (fscanf(f, " %1023s", x) == 1) {
        puts(x);
    }
}
void main()
{
    FILE *f;

    f = fopen("navneeth.txt", "r");

    if (f == NULL)
    {
        printf(" Error while opening the file ");
        return;
    }
    read_words(f);  

    fclose(f);
}
