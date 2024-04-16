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
		if (head == tail) { // ������ �����Ͱ� ���� ���
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
	if (head == tail) { // ������ �����Ͱ� ���� ���
		return -1;
	}
	data = queue[head];
	head = (head + 1) % qsize;
	return data;
}


void main() {
	
	ArrayQueue arr;

	// �ʱ�ȭ
	qsize = 10;
	queue = (int*)malloc(qsize * sizeof(int));
	head = 0;
	tail = 0;

	// ���� ť������ ť�� ���� á������ ��� �ִ����� �����ϱ� ���� 
	// �ϳ��� ������ �׻� ��� �ξ�� �Ѵ�. 
	for (int i = 0; i < 9; i++) {
		insert(i);
	}

	printf("������ ���¿��� ���� : %s\n", insert(50) ? "����" : "����");

	printf("%d\n", Delete());
	printf("%d\n", Delete());
	printf("%d\n", Delete());

	free(queue);
}