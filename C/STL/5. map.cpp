#include<iostream>
#include<map>

using namespace std;

// 휴대폰 사람 검색


struct PhoneAddr {
	string name;
	int phonenum;
}arPerson[] = { {"가나",1234},{"다라",4567},{"마바",78910}};

void main()
{
	map<string, int> person;
	map<string, int>::iterator it;
	string name;

	for (int i = 0; i < sizeof(arPerson) / sizeof(arPerson[0]); i++) {
		person[arPerson[i].name] = arPerson[i].phonenum;
	}

	for (;;) {
		cout << "이름 입력 : ";
		cin >> name;

		if (name == "q") break;
		
		// 이름의 키값으로 메모리의 위치를 찾아줌
		it = person.find(name);

		if (it == person.end()) {
			// person의 마지막 까지 갔는데 못찾은 경우를 의미
			cout << "전화번호를 검색하지 못했습니다." << endl;
		}
		else {
			cout << name << "의 전화번호는" << it->second << "입니다." << endl;
				// it -> first는 키, it -> second는 값
		}
	}
}