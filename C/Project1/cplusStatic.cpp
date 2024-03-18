#include<iostream>
using namespace std;

class Deposit {
public:
	Deposit(){}
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

private:
	char* strName;
	double dBalance;
	static double dInterestRate;

};

double Deposit::dInterestRate = 0.05;

void main() {

	Deposit kim, lee;
	// kim.dInterestRate = 0.05; 
	// 허용되는 문법이나, dInterestRate는 객체의 생성하고는 무관하게 값을 가짐
	// 따라서 접근할 때는 소속된 클래스 이름을 표기하고 ::(영역 결정 연산자)를 사용
	Deposit::SetInterestRate(0.06);


}