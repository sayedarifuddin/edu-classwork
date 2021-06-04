#include <stdio.h>
int main() {
	int a = 100, i;
	int x = 0, y = 1;

	for(i = 1; i <= a; i++) {
		while(x < 5) {
			printf("%d ", y++);
			x++;
		}
		x = 0;
		printf("\n");
	}
	return 0;
}
