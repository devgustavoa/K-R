#include <stdio.h>

int main() {
	float fahr;
	printf("==CONVERSION==\n");
	for (fahr = 300; fahr >= 0; fahr -= 20) {
		float celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %10.1f\n", fahr, celsius);
	}
}
