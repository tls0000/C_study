#include <stdio.h>
#include <malloc.h>

void main() {
	    int n, sum = 0;
	        int *numbers;

		    printf("입력할 개수는 ? ");
		        scanf("%d", &n);

			    numbers = (int*)malloc(n * sizeof(int));
			        if (numbers == NULL) {
					        printf("메모리 할당 실패\n");
						        return;
							    }

				    for (int i = 0; i < n; i++) {
					            printf("%d번째 숫자: ", i + 1);
						            scanf("%d", &numbers[i]);
							        }

				        for (int i = 0; i < n; i++) {
						        if (numbers[i] % 2 == 0) {
								            sum += numbers[i];
									            }
							    }

					    printf("입력한 짝수합==>%d\n", sum);

					        free(numbers);
}
