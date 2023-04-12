// �ǽ�-1

/*
* ����: ���� �� �ִ� ������, ���α׷����� �����͸� �����ϱ� ���� �޸� ����.
*/

#include <iostream>
#include <string>
using namespace std;

int start01(void) {
	// ������ �ۼ�

	int age = 0;		// �������� ���� ����.
	int i{ 100 };		// int i = 100;
	bool flag = false;	// bool: true == 1 , false == 0 ���� ��µ�.

	cout << flag << endl;
	// ������ �ּ� Ȯ��
	// ������ �޸� ���ÿ� �񿬼������� �� ������ ã�� ����.
	// &(���ۼ�Ʈ): �ּ� ���� ������.
	cout << "���� age�� �ּ�: " << &age << endl;
	cout << "���� i�� �ּ�: " << &i << endl << endl;


	// �ڷ����� ũ��(sizeof(������Ÿ��, ������))
	// to_string(����): �������� ���ڿ� Ÿ������ ��������ִ� string ����� �����ϴ� �޼ҵ�.
	cout << "short�� ũ��: " + to_string(sizeof(short)) + "byte" << endl;
	cout << "int�� ũ��: " + to_string(sizeof(int)) + "byte" << endl;
	cout << "long�� ũ��: " + to_string(sizeof(long)) + "byte" << endl;
	cout << "long long�� ũ��: " + to_string(sizeof(long long)) + "byte" << endl;
	cout << "float�� ũ��: " + to_string(sizeof(float)) + "byte" << endl;
	cout << "double�� ũ��: " + to_string(sizeof(double)) + "byte" << endl;
	cout << "long double�� ũ��: " + to_string(sizeof(long double)) + "byte" << endl;
	cout << "bool�� ũ��: " + to_string(sizeof(bool)) + "byte" << endl;
	cout << "char�� ũ��: " + to_string(sizeof(char)) + "byte" << endl << endl;

	// string Ÿ��(���ڿ�)
	string s1 = "Hi";
	string s2 = "Hello";
	string s3 = s1 + " " + s2 + "!!";	// ���ڿ����� + �����ڷ� ���հ���.
	cout << s3 << endl;

	cout << "���� s1�� �ּ�: " << &s1 << endl;
	cout << "���� s2�� �ּ�: " << &s2 << endl;
	cout << "���� s3�� �ּ�: " << &s3 << endl << endl;

	bool equal = (s1 == s2);
	cout << "s1 == s2 " << equal << endl;

	const double TAX_RATE = 0.25;	// ��ȣ ��� ���� �� �ʱ�ȭ.
	//TAX_RATE = 0.35; : ����� �ʱ�ȭ�ϰ� ���� �ٸ� ���� �������� ���Ѵ�.

	int garbage;	// �ʱ�ȭ �ȵ�.
	//cout << garbage << endl;   << �ʱ�ȭ���� ���� ��������: ������ ����

	// ������ ����� ���� �ʱ�ȭ�� ��Ģ�̴�.

	return 0;
}