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
		// head를 tail로 받아서 사용
		// 리스트의 마지막 노드를 찾아가게 함
	}

	New = (Node*)malloc(sizeof(Node));
	New->value = data;
	New->next = NULL;
	New->prev = tail;
	tail->next = New;

}

int Delete() {
	int data;
	Node* Target = head->next; // 삭제할 메모리의 주소값

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