#include <stdio.h>

int main(void) {
  return printf("Hello World!\n") < 0 ? 1 : 0;
}
