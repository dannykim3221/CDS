#include <stdio.h>

int main() {
    char info[2][3][50] = {{"Hong Gil Dong","Computer Electronic","202100101"},{"Hong Gil Soon","Computer Science","202100201"}};

    char labels[3][20] = { "이름", "학과", "학번" };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {

            printf("학생 %d의 %s: ", i + 1, labels[j]);

            for (int k = 0; info[i][j][k] != '\0'; k++) {
                printf("%c", info[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}