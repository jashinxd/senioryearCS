#include <stdio.h>
#include <stdlib.h>

#include <sys/stat.h>

int main() {

  //printf("works");
  struct stat sb1;
  //struct stat sb2;
  stat("pizza", &sb1);
  printf("size: %lu\tuser: %s\tmode: %o\tmtime: %s", sb1.st_size, sb1.st_uid, sb1.st_mode, ctime(&(sb1.st_mtime)));

  
  return 0;
}
