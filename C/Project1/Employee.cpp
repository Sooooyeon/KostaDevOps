#include<iostream>

using namespace std;

class Employee {
public:
	Employee(){
		strName = NULL;
		strAddr = NULL;
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
	}
	void DisplayEmployee() {
		cout << "�̸� : " << this->strName << endl;
		cout << "�ּ� : " << this->strAddr << endl;
	}

protected:
	char* strName;
	char* strAddr;
};


// Regualr�� Employee�� ��ӹ���
class Regular : public Employee {
public:
	Regular(){}
	Regular(const char* pName, const char* pAddr, double dSalary){
		cout << "���ڰ� 3���� Regular ������ ȣ��" << endl;

		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);

		salary = dSalary;
	}
	~Regular(){
		// ���� ���⼭ �Ҹ��Ű�� �ʾƵ� �θ� �������� �Ҹ�
	}

	double PayCheck() const {
		return salary;
	}

private:
	double salary;
};


class Temporary : public Employee {
public:
	Temporary() {}
	Temporary(const char* pName, const char* pAddr, double dailyPayCheck, int days){
		cout << "���ڰ� 4���� Temporary ������ ȣ��" << endl;

		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);

		this->dailyPayCheck = dailyPayCheck;
		this->days = days;
	}
	~Temporary() {}
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
	Employee emp("lee","seoul");
	emp.DisplayEmployee();

	Regular rgl("soo","seoul",300);
	rgl.DisplayEmployee();
	cout << "�޿� : " << rgl.PayCheck() << endl;

	Temporary tmp("yeon", "seoul", 20, 20);
	tmp.DisplayEmployee();
	cout << "�޿� : " << tmp.PayCheck() << endl;


}