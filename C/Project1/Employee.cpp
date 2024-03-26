#include<iostream>

using namespace std;

class Employee {
public:
	Employee(){
		strName = NULL;
		strAddr = NULL;
		cout << "1. Employee ������ ȣ��" << endl;
	}
	Employee(const char* pName, const char* pAddr) {
		cout << "���ڰ� 2���� ������ ȣ��" << endl;

		// ��������� const�� ������ ���
		// strName = pName;
		// strAddr = pAddr;

		// strlen - �ּҰ��� ������ �ִ� ���ڿ��� ���̸� ������
		// ���纻�� ����
		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);
	}
	~Employee(){
		delete[] strName;
		delete[] strAddr;
		cout << "1. Employee �Ҹ��� ȣ��" << endl;

	}
	void DisplayEmployee() {
		cout << "�̸� : " << this->strName << endl;
		cout << "�ּ� : " << this->strAddr << endl;
	}

	// �����Լ�
	virtual double PayCheck() const = 0;

protected:
	char* strName;
	char* strAddr;
};


// Regualr�� Employee�� ��ӹ���
class Regular : public Employee {
public:
	Regular(){}
	Regular(const char* pName, const char* pAddr, double dSalary):Employee(pName, pAddr){
		cout << "2. ���ڰ� 3���� Regular ������ ȣ��" << endl;

		/*strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);*/

		salary = dSalary;
	}
	~Regular(){
		// ���� ���⼭ �Ҹ��Ű�� �ʾƵ� �θ� �������� �Ҹ�
		cout << "2. Regular �Ҹ��� ȣ��" << endl;

	}

	double PayCheck() const {
		return salary;
	}

private:
	double salary;
};

class SalesMan : public Regular
{
public:
	SalesMan() {

	}
	SalesMan(const char* pName, const char* pAddr, double dSalary, double allowance)
		: Regular(pName, pAddr, dSalary) {
		cout << "3.���ڰ� 4���� SalesMan ������ ȣ��" << endl;
		this->allowance = allowance;
	}
	~SalesMan() {
		cout << "3.SalesMan �Ҹ��� ȣ��" << endl;
	}
	double PayCheck() const {
		return Regular::PayCheck() + allowance;
	}
private:
	double allowance;
};

class Temporary : public Employee {
public:
	Temporary() {}
	Temporary(const char* pName, const char* pAddr, double dailyPayCheck, int days) :Employee(pName, pAddr) {
		cout << "2. ���ڰ� 4���� Temporary ������ ȣ��" << endl;

		/*strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);*/

		this->dailyPayCheck = dailyPayCheck;
		this->days = days;
	}
	~Temporary() {
		cout << "2. Temporary �Ҹ��� ȣ��" << endl;
	}
	double PayCheck() const {
		return dailyPayCheck * days;
	}

private:
	double dailyPayCheck;
	int days;

};

void main() {
	// Employee emp; // ���� ������ ����
	// Employee* emp = new Employee(); // �� ������ ����
	// Employee emp("lee","seoul");
	// emp.DisplayEmployee();

	// Regular rgl("soo","seoul",300);

	Employee* rgl = new Regular("kim", "suwon", 300);
	rgl->DisplayEmployee();
	cout << "�޿� : " << rgl->PayCheck() << endl;

	Temporary tmp("yeon", "seoul", 20, 20);
	tmp.DisplayEmployee();
	cout << "�޿� : " << tmp.PayCheck() << endl;

	SalesMan slm("jung", "gasan", 300, 50);
	cout << "�޿� : " << slm.PayCheck() << endl;

	// ObjectTest(new Regular("kim", "suwon", 300));

}

void ObjectTest(Employee* emp)
{
	emp->DisplayEmployee();
	cout << "�޿� : " << emp->PayCheck() << endl;
}