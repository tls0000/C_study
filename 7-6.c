#include <stdio.h>

void main()
{
	int menu;

	do {
		printf("\n�մ� �ֹ��Ͻðڽ��ϱ� ?.\n");
		printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸���ų���� ==>");
		scanf("%d",&menu);

		switch(menu)
		{
                        case 1 : printf("#ī��� �ֹ��ϼ̽��ϴ�."); break;
                        case 2 : printf("#īǪġ�� �ֹ��ϼ̽��ϴ�."); break;
                        case 3 : printf("#�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�."); break;
                        case 4 : printf("#�ֹ��Ͻ� Ŀ�� �ֹ��ϼ̽��ϴ�."); break;
			default : printf("�߸� �ֹ��ϼ̽��ϴ�.\n");
		}
	}while (menu !=4);
}

