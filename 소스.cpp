#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char a = '*';
	char *b = &a;

	printf("������ �ּ� = %u, �ڵ尪 = %d, ���� = %c\n", &a, a, a);
	printf("������ �ּ� = %u, �ڵ尪 = %d, ���� = %c\n", b, *b, *b);




}