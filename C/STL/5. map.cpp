#include<iostream>
#include<map>

using namespace std;

// �޴��� ��� �˻�


struct PhoneAddr {
	string name;
	int phonenum;
}arPerson[] = { {"����",1234},{"�ٶ�",4567},{"����",78910}};

void main()
{
	map<string, int> person;
	map<string, int>::iterator it;
	string name;

	for (int i = 0; i < sizeof(arPerson) / sizeof(arPerson[0]); i++) {
		person[arPerson[i].name] = arPerson[i].phonenum;
	}

	for (;;) {
		cout << "�̸� �Է� : ";
		cin >> name;

		if (name == "q") break;
		
		// �̸��� Ű������ �޸��� ��ġ�� ã����
		it = person.find(name);

		if (it == person.end()) {
			// person�� ������ ���� ���µ� ��ã�� ��츦 �ǹ�
			cout << "��ȭ��ȣ�� �˻����� ���߽��ϴ�." << endl;
		}
		else {
			cout << name << "�� ��ȭ��ȣ��" << it->second << "�Դϴ�." << endl;
				// it -> first�� Ű, it -> second�� ��
		}
	}
}