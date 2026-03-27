#include <stdio.h>


int fact(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}

int main(void) {
	
	int num = 0;

	printf("1보다 큰 정수를 입력하세요 : ");
	scanf_s("%d", &num);

	for (int i = num; i > 1; i--) {
		printf("%d * ", i);
	}
	printf("1 = %d", fact(num));

	return 0;



}

