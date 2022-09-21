#include <stdio.h>
#include <math.h>

int uadd_ok(unsigned x, unsigned y) {
	unsigned sum = x + y;
	return sum >= x;
}

int main() {
//	int x = pow(2, sizeof(int) * 8);
//	int y = pow(2, sizeof(int) * 8);

	unsigned int x = 4294967295;
	unsigned int y = 1;
	printf("%i\n", uadd_ok(x, y));
}
