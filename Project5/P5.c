#include <stdio.h>

int fact(int n) {
    printf("fact(%d) 함수 호출!\n", n);

    if (n == 1) {
        printf("fact(1) 값 1 반환\n");
        return 1;
    }

    int result = n * fact(n - 1);

    printf("fact(%d) 값 %d 반환\n", n, result);
    return result;
}

int main() {
    int num;

    printf("정수를 입력하세요: ");
    scanf_s("%d", &num);

    int result = fact(num);

    printf("\n%d의 팩토리얼 값은 %d입니다.\n", num, result);

    return 0;
}