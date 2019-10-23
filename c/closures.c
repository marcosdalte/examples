#include <stdio.h>

// function prototypes
int sum(int x, int y);
int subtract(int x, int y);
int calculate(int (*func)(int, int), int x, int y);

// sum x + y
int sum(int x, int y) {
	return x + y;
}

// subtract x - y
int subtract(int x, int y) {
	return x - y;
}

// run a function (int, int) -> int with inputs
int calculate(int (*func)(int, int), int x, int y) {
	return (*func)(x, y);
}

int main() {
	// calling calculate with sum
	int a = calculate(sum, 1, 2);
	printf("sum returns %d\n", a);

	// calling calculate with subtract
	int b = calculate(subtract, 1, 2);
	printf("subtract returns %d\n", b);

	return 0;
}
