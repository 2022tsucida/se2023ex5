#include <stdio.h>

int main(void) {
  char str[] = "hello world";
  int i = 0;
  while (i < 5) {
    printf("Hello World , %s", str);
    i++;
  }
  return 0;
}