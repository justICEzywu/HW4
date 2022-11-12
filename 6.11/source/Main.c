#include <stdio.h>


int main() 
{
	int n = 9;
	int array[] = { 17,4,8,44,89,15,46,79,12 };
	printf("排序前 = ");
	for (int i = 0; i < 9; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (array[j] < array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	printf("排序後 = ");
	for (int i = 0; i < 9; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}