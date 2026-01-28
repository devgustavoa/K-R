#include <stdio.h>

#define MAXWORD 15
#define IN 1
#define OUT 0

int main(void) {

  int c, i, j, nc, state;
  int wl[MAXWORD];

  state = OUT;
  nc = 0;

  for (i = 0; i < MAXWORD; ++i)
    wl[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        if (nc < MAXWORD)
          ++wl[nc];
        nc = 0;
      }
      state = OUT;
    } else {
      state = IN;
      ++nc;
    }
  }

  printf("\nWord Length Histogram:\n");
  for (i = 1; i < MAXWORD; ++i) {
    printf("%2d: ", i);
    for (j = 0; j < wl[i]; ++j)
      putchar('#');
    putchar('\n');
  }

  return 0;
}
