#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
	float fahr, celsius;

	fahr = LOWER;
	printf("==CONVERSION==\n");
	while (fahr <= UPPER) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %10.1f\n", fahr, celsius);
		fahr += STEP;
	}
}
