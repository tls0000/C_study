#include <stdio.h>
#include <malloc.h>

void main() {
	    int n, sum = 0;
	        int *numbers;

		    printf("�Է��� ������ ? ");
		        scanf("%d", &n);

			    numbers = (int*)malloc(n * sizeof(int));
			        if (numbers == NULL) {
					        printf("�޸� �Ҵ� ����\n");
						        return;
							    }

				    for (int i = 0; i < n; i++) {
					            printf("%d��° ����: ", i + 1);
						            scanf("%d", &numbers[i]);
							        }

				        for (int i = 0; i < n; i++) {
						        if (numbers[i] % 2 == 0) {
								            sum += numbers[i];
									            }
							    }

					    printf("�Է��� ¦����==>%d\n", sum);

					        free(numbers);
}
