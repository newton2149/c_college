#include <stdio.h>
int main() {
  char a[100] = "Navneeth ", b[] = "s";
  int len, i;

  len = 0;
  while (a[len] != '\0') {
    ++len;
  }
  for (i = 0; b[i] != '\0'; ++i, ++len) {
    a[len] = b[i];
  }
  a[len] = '\0';


  printf("After concatenation: ");
  puts(a);

  return 0;
}