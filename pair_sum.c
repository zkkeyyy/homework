#include <stdio.h>

int main(void)
{
	int price[6] = {18, 7, 25, 12, 33, 20};
	int n = 6;
	int target = 100;
	int checks = 0;
	
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			++checks;
			
			if (price[i] + price[j] == target) {
				printf("indices: %d, %d\n", i, j);
				printf("checks: %d\n", checks);
				return 0;
			}
		}
	}
	
	printf("no pair\n");
	printf("checks: %d\n", checks);
	
	return 0;
}
