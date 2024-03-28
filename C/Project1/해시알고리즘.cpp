// 전체 저장소 : 해시테이블, 2차원 배열
// 버킷은 초성 자음으로 나눔
// 슬롯 : 버킷에 데이터가 저장되는 단위

#include<stdio.h>
#include<string.h>

			// 버킷의 수 , 슬롯의 수
int hashTable[10][1];

int Hash(int pKey) { // 버킷생성
	return pKey % 10;
}

void main() 
{
	int key = 0;
	int bucket = 0;

	memset(hashTable, 0, sizeof(hashTable)); // 쓰레기 값을 0으로 초기화
	scanf_s("%d", &key);

	bucket = Hash(key);
	hashTable[bucket][0] = key;
}
