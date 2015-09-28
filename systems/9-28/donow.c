#include <stdio.h>
#include <stdlib.h>

int main() {
  //1) Declare int, double, and char variables.
  int i;
  double d;
  char c;
  // 2) Declare int, double, and char pointers.
  // 3) Initialize each pointer to the address of the corresponding variables.
  int *pi = &i;
  double *pd = &d;
  char *pc = &c;
  // 4) Print out the pointer's value for each (as an unsigned long).
  printf( "pi = %lu\n", pi);
  printf( "pd = %lu\n", pd);     
  printf( "pc = %lu\n", pc);
  // 5) Add 1 to the char pointer
  pc++;
  printf( "pc after pc++ = %lu\n", pc);
  pi++;
  printf( "pi after pi++ = %lu\n", pi);
 
  return 0;
}
