#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
  int p;
  
  printf("pre exec\n");
  
  p = fork();
  
  if (p == 0) {
    execl("/bin/ls", "ls", "-a", "-l", NULL);
    return 51;
  }
  
  else {
    wait( &status );
    printf( "post exec\tstatus: %d\n", status );
  }
  
  return 0;
}

