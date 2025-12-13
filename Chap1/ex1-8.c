#include <stdio.h>

int main() {
	int c, blank, tab, nl;

	blank = 0;
	tab = 0;
	nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++blank;
		} else if (c == '\t') {
			++tab;
		} else if (c == '\n') {
			++nl;
		}
	}

	printf("The number of blanks is %d, the number of tabs is %d"
		   ", and the number of newlines is %d.\n",
		   blank, tab, nl);
}
