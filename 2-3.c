#include <stdio.h>

void main()
{
	int a, b;
	int result;

	printf("ù��° ����� ���� �Է��Ͻÿ� ==> ");
	scanf("%d", &a);

	printf("�ι�° ����� ���� �Է��Ͻÿ� ==> ");
	scanf("%d", &b);

	result = a + b;
	printf(" %d + %d = %d \n", a, b, result);

	result = a - b;
	printf(" %d + %d = %d \n", a, b, result);

	result = a * b;
	printf(" %d * %d = %d \n", a, b, result);

	result = a / b;
	printf(" %d / %d = %d \n", a, b, result);
}
