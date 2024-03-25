#include<iostream>
#include<string.h>

using namespace std;

class String 
{
public:
	String(char ch, int nSize) {
		nLength = nSize;
		pBuffer = new char[nLength + 1];
		memset(pBuffer, ch, nLength);
		// memset �Լ��� �޸��� ����(��)�� ���ϴ� ũ�⸸ŭ Ư�� ������ ����
		// memset�Լ��� �޸� ���� ���� ����� ��ä�� ���ϴ� ������ ������ �ִ� �Լ�
		// void *memset(void *s, int c, size_t n);
		// memset �Լ��� �޸𸮻󿡼� ������ s�� ����Ű�� ��ġ���� �� n bytes�� c�� ä���ش�.
		// memset�� ������ s�� ����Ű�� �ּҸ� ����Ű�� �����͸� ��ȯ�Ѵ�.
		
		pBuffer[nLength] = '\0';
		cout << "pBuffer : " << pBuffer << endl;
	}
	~String() {
		delete[] pBuffer;
	}

	// ������ ���
	String(const String& str1) {
		this -> nLength = str1.nLength;
		this -> pBuffer = new char[this->nLength + 1];
		strcpy_s(this->pBuffer, this->nLength + 1, str1.pBuffer);
	}

	// ���Կ����� �����ε� 
	void operator = (const String& s) 
	{
		delete this->pBuffer;
		this->nLength = s.nLength;
		this->pBuffer = new char[this->nLength + 1];
		strcpy_s(this->pBuffer, this->nLength +1, s.pBuffer);
	}

	/*void operator + (const String& s) 
	{

	}*/

	void SetData() {
		cout << "pBuffer : " << this->pBuffer << endl;
	}

private:
	char* pBuffer;
	int nLength;

};

void main() 
{
	String str1('A', 3);
	//String str2('B', 5);

	//str2 = str1; // str2 �� pBuffer�� 'A'�� �ּҸ� ����Ű�Ե� �Ҹ��Ҷ� ������ ��
	//// str2.operator=(str1); // ������ �ڵ�� ���� ǥ��

	//str2.SetData();

	String str2 = str1; // str2(str1)
	str2.SetData();

}