#include <stdio.h>
#include <stdlib.h>
int main() {
  
  int bob = 7;
  int a[10];
  int fred = 92;
  int *pfred;

  printf("bob = %d\n", bob);
  printf("fred = %d\n", fred);
  a[0] = 10;
  printf("a[0] = %d\n", a[0]);
  printf("a[-1] = %d\n", a[-1]);
  printf("a[-2] = %d\n", a[-2]);
  printf("address of fred: %lu\n", &fred);
  printf("pfred = %lu\n", pfred);
  printf("address of pfred: %lu\n", &pfred);
}
