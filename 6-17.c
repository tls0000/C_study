#include <stdio.h>

void main()
{
	int a,i,k;

	for( a=2 ; a<=9 ; a++)
	{
		printf("#%d��",a);
	}
		printf("\n\n");

		for  (i=1; i<=9; i++)
		{
		for ( k=2 ; k<=9 ; k++)
		{
			printf("%2dX%2d=%2d", k ,i ,k*i);
		}
		printf("\n");
	}
}

