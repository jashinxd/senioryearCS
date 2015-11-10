#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  int i, x, status;

  printf("pid: %d\n", getpid());
  printf("parent pid: %d\n", getppid());
  
  i = fork();

  if (i == 0) {
    printf("[CHILD] pid: %d\n", getpid());
    printf("[CHILD] parent pid: %d\n", getppid());
    return 100;
  }
  else {
    printf("[PARENT] waiting...\n");
    x = wait( &status );
    printf("[PARENT] wait returned: %d\tstatus: %d\n", x, status);
  }
  return 0;
}
