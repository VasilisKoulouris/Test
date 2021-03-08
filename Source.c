#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	srand((unsigned int)time(NULL));
	int a, b;

	do {
		printf("Give a positive integer:\n");
		scanf_s("%d", &a);
	} while (a <= 0);

	b = rand() % (a + 1);
	printf("Random integer in [0,%d]: %d", a, b);
	return 0;
}