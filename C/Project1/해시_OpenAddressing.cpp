#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 1

int hashtable[BK][SL];

int Hash(int pKey) {
    return pKey % 10;
}
// 슬롯이 비어있지 않은 경우 오른쪽의 슬롯을 활용하는 방식
// -> 약간의 검색 성능 저하가 있더라도 메모리 효율을 최대화 하기 위한 방식
void InsertValue(int pKey)
{
    int bucket = 0;
    bucket = Hash(pKey);
    for (int i = 0; i < SL; i++) {
        while (hashtable[bucket][i] != 0) {
            bucket++;
        }
        hashtable[bucket][i] = pKey;
    }
}


bool FindValue(int pKey)
{
    int bucket = 0;
    bucket = Hash(pKey);
    for (int i = 0; i < SL; i++) {
        while (hashtable[bucket][i] != 0) {
            if (hashtable[bucket][i] == pKey) {
                return true;
            }
            bucket++;
        }
    }
    return false;
}

void main()
{
    int key = 0;

    memset(hashtable, 0, sizeof(hashtable));

    for (int i = 0; i < 5; i++)
    {
        printf("데이터를 입력하세요 : ");
        scanf_s("%d", &key);
        InsertValue(key);
    }

    printf("검색키를 입력하세요 : ");
    scanf_s("%d", &key);
    bool ret = FindValue(key);
    if (ret == true)
    {
        printf("검색되었습니다.");
    }
    else
    {
        printf("입력값은 존재하지 않습니다.");
    }
}
