#include <stdio.h>
#include <stdlib.h>

int prob1() {
  int i = 0;
  int sum = 0;
  while (i < 1000) {
    if (i % 3 == 0 || i % 5 == 0) {
      //printf("%d\n", i);
      sum = sum + i;
    }
    i += 1;
  }
  printf("%d\n", sum);
  return sum;
}

int prob2() {
  int sum = 0;
  int prev = 1;
  int current = 2;
  int current2 = 2;
  while (current < 4000000) {
    if (current % 2 == 0) {
      sum += current;
    }
    current += prev;
    prev = current2;
    current2 = current;  
  }
  printf("%d\n", sum);
  return sum;
}

/*
long prob3() {
  long num = 600851475143;
*/

int main() {
  prob1();
  prob2();
} 
  
