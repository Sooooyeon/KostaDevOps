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
	// ���Ǵ� �����̳�, dInterestRate�� ��ü�� �����ϰ�� �����ϰ� ���� ����
	// ���� ������ ���� �Ҽӵ� Ŭ���� �̸��� ǥ���ϰ� ::(���� ���� ������)�� ���
	Deposit::SetInterestRate(0.06);


}