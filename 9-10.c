#include <stdio.h>

int main() {
	    int a, b;
	        int x, y;

		    printf("a �� �Է�: ");
		        scanf("%d", &a);

			    printf("b �� �Է�: ");
			        scanf("%d", &b);

				   
				         x = &a;
				             y = &b;
				    
				                int temp = x;
				                     x = y;
				                         x = temp;
				    
				                             printf("�ٲ� �� a�� %d, b�� %d\n", a, b);
				    
				                                 return 0;
				                                 }
