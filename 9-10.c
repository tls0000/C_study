#include <stdio.h>

int main() {
	    int a, b;
	        int x, y;

		    printf("a 값 입력: ");
		        scanf("%d", &a);

			    printf("b 값 입력: ");
			        scanf("%d", &b);

				   
				         x = &a;
				             y = &b;
				    
				                int temp = x;
				                     x = y;
				                         x = temp;
				    
				                             printf("바뀐 값 a는 %d, b는 %d\n", a, b);
				    
				                                 return 0;
				                                 }
