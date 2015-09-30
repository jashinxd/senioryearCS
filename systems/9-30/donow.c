#include <stdio.h>
#include <stdlib.h>

int len(char *s) {
  int size = 0;
  while (*s++) {
    size++;
  }
  return size;
}

int main() {
  char s[] = "RandomStringLOL";
  char *rp = s;
  int size = 0;
  while (s[size]) {
    size++;
  }
  printf("Length of String = %d\n", size);
  return 0;
  printf ("Length of *%s* = %d\n", n, size);  
}
