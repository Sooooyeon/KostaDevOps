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
		// memset 함수는 메모리의 내용(값)을 원하는 크기만큼 특정 값으로 세팅
		// memset함수는 메모리 상의 일정 블록을 통채로 원하는 값으로 설정해 주는 함수
		// void *memset(void *s, int c, size_t n);
		// memset 함수는 메모리상에서 포인터 s가 가리키는 위치부터 총 n bytes를 c로 채워준다.
		// memset은 포인터 s가 가리키는 주소를 가리키는 포인터를 반환한다.
		
		pBuffer[nLength] = '\0';
		cout << "pBuffer : " << pBuffer << endl;
	}
	~String() {
		delete[] pBuffer;
	}

	// 참조자 사용
	String(const String& str1) {
		this -> nLength = str1.nLength;
		this -> pBuffer = new char[this->nLength + 1];
		strcpy_s(this->pBuffer, this->nLength + 1, str1.pBuffer);
	}

	// 대입연산자 오버로딩 
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

	//str2 = str1; // str2 의 pBuffer가 'A'의 주소를 가르키게됨 소멸할때 문제가 됨
	//// str2.operator=(str1); // 윗줄의 코드와 같은 표현

	//str2.SetData();

	String str2 = str1; // str2(str1)
	str2.SetData();

}