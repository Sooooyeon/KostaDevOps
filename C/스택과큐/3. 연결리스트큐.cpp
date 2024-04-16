#include<stdio.h>
#include<stdlib.h>

struct Node {
	int value;
	Node* prev;
	Node* next;
};

Node* head;

void insert(int data) {
	Node* New;
	Node* tail;

	for (tail = head; tail->next != NULL; tail = tail->next) {
		// head�� tail�� �޾Ƽ� ���
		// ����Ʈ�� ������ ��带 ã�ư��� ��
	}

	New = (Node*)malloc(sizeof(Node));
	New->value = data;
	New->next = NULL;
	New->prev = tail;
	tail->next = New;

}

int Delete() {
	int data;
	Node* Target = head->next; // ������ �޸��� �ּҰ�

	if (Target == NULL){
		return -1;
	} 
	data = Target->value;
	head->next = Target->next;

	if (head->next) {
		head->next->prev = head;
	}
	free(Target);
	return data;
	
}

void main() {
	head = (Node*)malloc(sizeof(Node));
	head->prev = NULL;
	head->next = NULL;

	for (int i = 0; i < 100; i++) {
		insert(i + 1);
	}

	for (int i = 0; i < 100; i++) {

		printf("%d", Delete());
	}



}