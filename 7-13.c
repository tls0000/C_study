#include <stdio.h>

void main()
{
	int hap = 0;
	int i;
	int a,b,c;
	
	printf("�հ��� ���۰� ==>");
	scanf("%d", &a);

	printf("�հ��� ���� ==>");
	scanf("%d", &b);

	printf("��� ==>");
	scanf("%d", &c);
	
	if(a<b)
	for (i=a ; i<=b ; i++)
		if(i % c == 0)
		hap += i;

	else if(a>b)
	for (i=a ; i>=b ; i--)
		if(i % c == 0)
		hap += i;

	printf("%d���� %d������ %d����� �հ� ==> %d\n",a,b,c,hap);
	return;

	printf("���α׷��� ���Դϴ�.");
}
