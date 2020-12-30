#include <unistd.h>

// Man page for write system call
// https://www.man7.org/linux/man-pages/man2/write.2.html

int main(void) {
  write(1, "Hello World\n", 12);
  return 0;
}
