/*
* auto Ű����: �ڵ�������� �ǹ̹ۿ� ��������, C++ 11���� auto�� �ǹ̰� �ٲ�.
* �ڷ����� ������ �� ����� �� �ִ� Ű����. �ڵ� Ÿ�� �߷�
*/

#include <iostream>
#include <string>
using namespace std;

int start02(void) {

	double d = 1.0;		// double(8byte) Ÿ�� ���� 1.0
	auto ad = 1.8;

	cout << "���� d�� ũ��: " << sizeof(d) << endl;
	cout << "���� ad�� ũ��: " << sizeof(ad) << endl;

	return 0;
}