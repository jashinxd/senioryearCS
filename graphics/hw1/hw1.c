#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int sign(int x) {
  return (x > 0) - (x < 0);
}

int main() {
  int fd = open( "img.ppm", O_CREAT | O_TRUNC | O_WRONLY, 0644);
  char * img = "P3\n500 500 255\n";
  write(fd, img, strlen(img));
  int slope, x, y, r, g, b, z;
  z = 0;
  for (y = 0; y < 500; y++) {
    z++;
    for (x = 0; x < 500; x++) {
      char * line = (char *)malloc(6);
      slope = 5;
      r = (z * z + x * y) % 256;
      g = (2 * x + 3 * y) % 256;
      b = (x * x + y * z) % 256;
      sprintf(line, "%d %d %d ", r, g, b);
      write(fd, line, strlen(line));
    }
  }
  close(fd);
  return 0;
}
