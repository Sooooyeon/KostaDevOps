#include<iostream>
#include<memory>

using namespace std;

void main() {
	//int* p = new int();

	//// ���� �޸� 8����Ʈ
	//// ���� �޸� 4����Ʈ
	//double* rate = new double;

	//*rate = 3.1415;
	//cout << *rate << endl;
	//delete rate;

	//int* a;
	//int b;
	//cout << "������ �� �Է� :";
	//cin >> b;

	//try {
	//	a = new int(10);
	//	if (b == 0) throw b;
	//	cout << "������ ��� :" << *a / b << endl;
	//	delete a;
	//}
	//catch (int ex){
	//	cout << "���ܻ�Ȳ" << endl;
	//	// ���� ��Ȳ�� ��� �޸� ������ ���� �ʾ� �޸� ���� �߻�
	//}



	// ����Ʈ������ ����
	auto_ptr<double> rate(new double);
	*rate = 3.1415;
	cout << *rate << endl;

}