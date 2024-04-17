#include <stdio.h>

void main()
{
	int hap = 0;
	int i;
	int a,b,c;
	
	printf("합계의 시작값 ==>");
	scanf("%d", &a);

	printf("합계의 끝값 ==>");
	scanf("%d", &b);

	printf("배수 ==>");
	scanf("%d", &c);
	
	if(a<b)
	for (i=a ; i<=b ; i++)
		if(i % c == 0)
		hap += i;

	else if(a>b)
	for (i=a ; i>=b ; i--)
		if(i % c == 0)
		hap += i;

	printf("%d부터 %d까지의 %d배수의 합계 ==> %d\n",a,b,c,hap);
	return;

	printf("프로그램의 끝입니다.");
}
