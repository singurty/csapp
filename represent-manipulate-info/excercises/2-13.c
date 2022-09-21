#include <stdio.h>
#include "show_bytes.h"

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 

char bis(char x, char m) {
	return x | m;
}

char bic(char x, char m) {
	return x & ~m;
}

char bool_or(char x, char y) {
	return bis(x, y);
}

char bool_xor(char x, char y) {
	
}

int main() {
	char num = 0b01100011;
	printf(BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(num));

	char num_bis = bis(num, num);
	printf("After bis:\n");
	printf(BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(num_bis));

	char num_bic = bic(num, num);
	printf("After bic:\n");
	printf(BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(num_bic));
}
