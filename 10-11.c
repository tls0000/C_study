#include <stdio.h>

void main() {
	int dan;
	printf("����ϰ� ���� ���� �Է�: ");
	scanf("%d", &dan);
	for(int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", dan, i, dan * i);
	}
}
