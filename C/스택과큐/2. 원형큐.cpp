c
class ArrayQueue {
private:
	int* queue;
	int qsize;
	int head, tail;
public:
	int insert(int data) {
		if ((tail + 1) % qsize == head) {
			return 0;
		}
		queue[tail] = data;
		tail = (tail + 1 ) % qsize;
		return 1;
	}


	int Delete() {
		int data;
		if (head == tail) { // 삭제할 데이터가 없는 경우
			return -1;
		}
		data = queue[head];
		head = (head + 1) % qsize;
		return data;
	}
};


int* queue;
int qsize;
int head, tail;

int insert(int data) {
	if ((tail + 1) % qsize == head) {
		return 0;
	}
	queue[tail] = data;
	tail = (tail + 1) % qsize;
	return 1;
}


int Delete() {
	int data;
	if (head == tail) { // 삭제할 데이터가 없는 경우
		return -1;
	}
	data = queue[head];
	head = (head + 1) % qsize;
	return data;
}


void main() {
	
	ArrayQueue arr;

	// 초기화
	qsize = 10;
	queue = (int*)malloc(qsize * sizeof(int));
	head = 0;
	tail = 0;

	// 원형 큐에서는 큐가 가득 찼는지와 비어 있는지를 구분하기 위해 
	// 하나의 공간을 항상 비워 두어야 한다. 
	for (int i = 0; i < 9; i++) {
		insert(i);
	}

	printf("가득찬 상태에서 삽입 : %s\n", insert(50) ? "성공" : "실패");

	printf("%d\n", Delete());
	printf("%d\n", Delete());
	printf("%d\n", Delete());

	free(queue);
}