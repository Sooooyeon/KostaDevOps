#include<iostream>

using namespace std;

class Employee {
public:
	Employee(){
		strName = NULL;
		strAddr = NULL;
	}
	Employee(const char* pName, const char* pAddr) {
		cout << "인자가 2개인 생성자 호출" << endl;

		// 멤버변수를 const로 지정할 경우
		// strName = pName;
		// strAddr = pAddr;

		// strlen - 주소값이 가지고 있는 문자열의 길이를 가져옴
		// 복사본을 생성
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
		cout << "이름 : " << this->strName << endl;
		cout << "주소 : " << this->strAddr << endl;
	}

protected:
	char* strName;
	char* strAddr;
};


// Regualr는 Employee를 상속받음
class Regular : public Employee {
public:
	Regular(){}
	Regular(const char* pName, const char* pAddr, double dSalary){
		cout << "인자가 3개인 Regular 생성자 호출" << endl;

		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);

		salary = dSalary;
	}
	~Regular(){
		// 굳이 여기서 소멸시키지 않아도 부모 영역에서 소멸
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
		cout << "인자가 4개인 Temporary 생성자 호출" << endl;

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
	// Employee emp; // 스택 영역에 생성
	// Employee* emp = new Employee(); // 힙 영역에 생성
	Employee emp("lee","seoul");
	emp.DisplayEmployee();

	Regular rgl("soo","seoul",300);
	rgl.DisplayEmployee();
	cout << "급여 : " << rgl.PayCheck() << endl;

	Temporary tmp("yeon", "seoul", 20, 20);
	tmp.DisplayEmployee();
	cout << "급여 : " << tmp.PayCheck() << endl;


}