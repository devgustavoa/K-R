#include <stdio.h>

int main(void) {

  int c;

  while ((c = getchar()) != EOF) {
    int is_printed = 0;

    if (c == '\t') {
      printf("\\t");
      is_printed = 1;
    }
    if (c == '\b') {
      printf("\\b");
      is_printed = 1;
    }
    if (c == '\\') {
      printf("\\\\");
      is_printed = 1;
    }

    if (is_printed == 0) {
      printf("%c", c);
    }
  }

  return 0;
}
