#include <stdio.h>

int main() {
	int a, b, temp;

	printf("a �� �Է�: ");
	scanf("%d", &a);
	printf("b �� �Է�: ");
	scanf("%d", &b);

	temp = a;
	a = b;
	b = temp;

	printf("�ٲ� �� a�� %d, b�� %d\n", a, b);

	return 0;
}
