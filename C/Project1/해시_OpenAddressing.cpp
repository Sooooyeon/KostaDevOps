#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 1

int hashtable[BK][SL];

int Hash(int pKey) {
    return pKey % 10;
}
// ������ ������� ���� ��� �������� ������ Ȱ���ϴ� ���
// -> �ణ�� �˻� ���� ���ϰ� �ִ��� �޸� ȿ���� �ִ�ȭ �ϱ� ���� ���
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
        printf("�����͸� �Է��ϼ��� : ");
        scanf_s("%d", &key);
        InsertValue(key);
    }

    printf("�˻�Ű�� �Է��ϼ��� : ");
    scanf_s("%d", &key);
    bool ret = FindValue(key);
    if (ret == true)
    {
        printf("�˻��Ǿ����ϴ�.");
    }
    else
    {
        printf("�Է°��� �������� �ʽ��ϴ�.");
    }
}
