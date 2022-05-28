#include <stdio.h>
#include "csapp.h"

void reverse_array(int a[], int length) {
	int first, last;
	for (first=0, last=length-1;
		first<last;
		first++,last--)

		inplace_swap(a+first, a+last);
}

void print_array(int a[], int length) {
	for (int i=0; i<length; i++) {
		printf(" %d", a[i]);
	}
	printf("\n");
}

int main() {
	int a[] = {1,2,3,4,5};
	int length = sizeof(a) / sizeof(int);
	print_array(a, length);
	reverse_array(a, length);
	print_array(a, length);
}
