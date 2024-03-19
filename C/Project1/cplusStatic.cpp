#include<iostream>
using namespace std;

class Deposit {
public:
	Deposit(){
		nCount++;
		cout << "객체 생성 개수 : " << nCount << endl;
	}
	~Deposit() {
		nCount--;
		cout << "객체 소멸 개수 : " << nCount << endl;
	}
	Deposit(char* name, double balance) {
		strName = name;
		dBalance = balance;
	}
	void BankBalance() {
		dBalance = dBalance + (dBalance * dInterestRate);
	}
	
	static void SetInterestRate(double dNewRate) {
		dInterestRate = dNewRate;
	}

	static double GetInterestRate() {
		// static은 클래스 안에서 사용되는 전역변수
		// 객체의 생성과는 무관하기때문에 this 사용 불가능
		return dInterestRate;
	}

private:
	char* strName;
	double dBalance;
	static double dInterestRate;
	static int nCount;
};

double Deposit::dInterestRate = 0.05;
int Deposit::nCount = 0;


void main() {

	Deposit kim, lee;
	// kim.SetInterestRate(0.06);
	// 허용되는 문법이나, 
	// dInterestRate는 객체의 생성하고는 무관하게 값을 가지기 때문에 의미적으로 명확하지가 않음
	// kim만 이자율을 갖는게 아님
	// 따라서 접근할 때는 소속된 클래스 이름을 표기하고 ::(영역 결정 연산자)를 사용
	Deposit::SetInterestRate(0.06);

	cout << Deposit::GetInterestRate() << endl;

	// 변수는 스택메모리에 쌓이기때문에 kim 보다 lee가 먼저 소멸됨
}