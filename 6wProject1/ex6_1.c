#include "queueS.h"

int main(void) {
	QueueType* Q1 = createQueue();
	element data;
	printf("\n ***** 순차 큐 연산 *****\n");
	printf("\n 삽입 A >> "); enqueue(Q1, 'A'); printQ(Q1);
	printf("\n 삽입 B >> "); enqueue(Q1, 'B'); printQ(Q1);
	printf("\n 삽입 C >> "); enqueue(Q1, 'C'); printQ(Q1);
	data = peekQ(Q1);	printf(" peek item : %c \n", data);
	printf("\n 삭제 >> "); data = dequeue(Q1); printQ(Q1);
	printf("\t삭제 데이터: %c", data);
	printf("\n 삭제 >> "); data = dequeue(Q1); printQ(Q1);
	printf("\t삭제 데이터: %c", data);
	printf("\n 삭제 >> "); data = dequeue(Q1); printQ(Q1);
	printf("\t삭제 데이터: %c", data);

	printf("\n 삽입 D >> "); enqueue(Q1, 'D'); printQ(Q1);
	printf("\n 삽입 E >> "); enqueue(Q1, 'E'); printQ(Q1);

	getchar(); return 0;

}