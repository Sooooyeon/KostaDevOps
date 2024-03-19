#include<iostream>
using namespace std;

class Deposit {
public:
	Deposit(){
		nCount++;
		cout << "��ü ���� ���� : " << nCount << endl;
	}
	~Deposit() {
		nCount--;
		cout << "��ü �Ҹ� ���� : " << nCount << endl;
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
		// static�� Ŭ���� �ȿ��� ���Ǵ� ��������
		// ��ü�� �������� �����ϱ⶧���� this ��� �Ұ���
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
	// ���Ǵ� �����̳�, 
	// dInterestRate�� ��ü�� �����ϰ�� �����ϰ� ���� ������ ������ �ǹ������� ��Ȯ������ ����
	// kim�� �������� ���°� �ƴ�
	// ���� ������ ���� �Ҽӵ� Ŭ���� �̸��� ǥ���ϰ� ::(���� ���� ������)�� ���
	Deposit::SetInterestRate(0.06);

	cout << Deposit::GetInterestRate() << endl;

	// ������ ���ø޸𸮿� ���̱⶧���� kim ���� lee�� ���� �Ҹ��
}