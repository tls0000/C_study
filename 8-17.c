#include <stdio.h>

int main() {
	int gugu[9][9];
       
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++) {
		       	gugu[j][i] = (i + 1) * (j + 1);
	       	}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%dX%d= %d ", j + 1, i + 1, gugu[i][j]);
	       	}
	       	printf("\n");
       	}
       	return 0;
}
