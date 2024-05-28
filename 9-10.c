#include <stdio.h>

int main() {
	int a, b, temp;

	printf("a 값 입력: ");
	scanf("%d", &a);
	printf("b 값 입력: ");
	scanf("%d", &b);

	temp = a;
	a = b;
	b = temp;

	printf("바뀐 값 a는 %d, b는 %d\n", a, b);

	return 0;
}
