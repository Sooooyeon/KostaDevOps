#include<iostream>

// 클래스 - 사용자가 정의한 추상적인 데이터형
// 크래스는 메인함수 밖에서 작성

using namespace std;

// 함수의 구현부를 class안에 정의할 수 있지만,
// class 는 header 파일로 분리하는게 전통적이라 구현을 따로한다.
// class 안에 함수의 구현부를 작성해도 무관

class MousePoint {

private:
	int x;
	int y;
public:
	MousePoint(int nX, int nY)
	{
		x = nX;
		y = nY;
		cout << "전달인자가 2개인 생성자" << endl;
	}
	MousePoint() {
		cout << "디폴트 생성자" << endl;
	}
	~MousePoint() {
		cout << "소멸자" << endl;
	}
	int GetX() { return x; };
	int GetY() { return y; };
	void SetXY(int nX, int nY) {
		x = nX;
		y = nY;
	}
};
// 함수의 접근제어자가 private인경우도 구현은 클래스 외부에서 가능.
// 클래스 내부의 접근제어자는 생략 불가능. 

//class Test 
//{
//private: // 멤버변수를 public으로 사용하는것은 객체지향 개념에 위배됨
//	int x;
//	int y;
//
//public:
//	Test(int nX, int nY) 
//	{
//		x = nX;
//		y = nY;
//		cout << "전달인자가 2개인 생성자" << endl;
//	}
//	Test(){
//		cout << "디폴트 생성자" << endl;
//	}
//	~Test() {
//		cout << "소멸자" << endl;
//	}
//	int GetX(){ return x; };
//	int GetY(){ return y; };
//	void SetXY(int nX, int nY);
//};
//
//void Test::SetXY(int nX, int nY) {
//	x = nX;
//	y = nY;
//}

void main() {
	// MousePoint pt; // 클래스로 선언한 변수는 객체
	// 디폴트 생성자가 있어서 생성자 함수가 없어도 객체 생성이 가능
	// ex ) MousePoint(){} 의 구조로 디폴트 생성자가 존재
	// 생성 후 초기화는 불가능
	// 전달인자가 있는 생성자를 정의할 경우 디폴트 생성자는 기능을 못하게 됨.
	// 디폴트 생성자를 사용하고 싶으면 추가로 정의 필요(오버로딩)
	
	//pt.x = 0; // 기본값이 private으로 데이터에 접근 불가능
	//pt.SetXY(10, 20);

	// Test ts2;

	// 스택 메모리에 정적 객체 생성
	// Test ts(12, 20); // 생성자 함수를 통한 객체 생성 및 초기화
	// cout << ts.GetX() << endl;
	// cout << ts.GetY() << endl;

	// 힙 메모리에 동적으로 객체 생석
	// Test* ts3 = new Test(11, 22);
	// cout << ts3->GetX() << endl;
	// cout << ts3->GetY() << endl;


	// delete ts3; // 사용 후 삭제

	// ts.SetXY(50,100);
	// cout << ts.GetX() << endl;
	// cout << ts.GetY() << endl;


	// 소멸자 - 객체가 소멸할 때 자동 호출됨. 
	// // 2개의 객체를 생성했기때문에 소멸자가 2번 호출됨오버로딩 안됨


	// Test pt[3] = { Test(10,20), Test(100,200), Test(500,600) }; // 초기화

	// pt[0].SetXY(10, 20);
	// pt[1].SetXY(100, 200);
	/*for (int i = 0; i < 3; i++) {
		cout << pt[i].GetX() << endl;
		cout << pt[i].GetY() << endl;

	}*/
	// cout << pt[0].GetX() << endl;
	// cout << pt[1].GetX() << endl;


	MousePoint* pArr[3];

	pArr[0] = new MousePoint(10, 20);
	pArr[1] = new MousePoint(100, 200);
	pArr[2] = new MousePoint(1000, 2000);

	for (int i = 0; i < 3; i++) {
		cout << pArr[i]->GetX() << endl;
		cout << pArr[i]->GetY() << endl;
	}

	for (int i = 0; i < 3; i++) {
		delete pArr[i];
		// 힙 메모리에서 배열을 만들었을 경우에만 delete[ ]
		// 스택에서 만들었을 경우 하나씩 없애줘야함 
		// 스택에서 힙 메모리 주소를 없애면 해당 힙 영역의 데이터가 제거됨
	}

}	