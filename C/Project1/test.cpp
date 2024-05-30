#include<iostream>
using namespace std;

class Phone {
private:
	int num;
	char* name;

public:	
	Phone() {
	}
	void Send(){
		cout<< name << "010" << num << "으로 메시지를 보냅니다."<< endl;
	}
	void Receive() {

	}
	void Call() {

	}



};

void main() {
	
}