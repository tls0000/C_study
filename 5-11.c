#include <stdio.h>

void main()
{
	int a;

	printf("Ãâ»ı¿¬µµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä :");
	scanf("%d" , &a);

	switch ( year % 12)
	{
		case 0 : printf ("¿ø¼şÀÌ¶ì\n");   break;
		case 1 : printf ("´ß¶ì\n");   break;
		case 2 : printf ("°³¶ì\n");   break;
		case 3 : printf ("µÅÁö¶ì\n");   break;
