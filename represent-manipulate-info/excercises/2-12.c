#include <stdio.h>

int main() {
	int x = 0x87654321;
	int a = x & 0xff;
	int b = x;
	char *bchar = (char *) &b;
	for (int i=1; i<sizeof(int); i++) {
		bchar[i] = ~bchar[i];
	}
	int c = x;
	char *cchar = (char *) &c;
	*cchar = 0xff;
	printf("0x%.8x\n", a);
	printf("0x%.8x\n", b);
	printf("0x%.8x\n", c);
}
