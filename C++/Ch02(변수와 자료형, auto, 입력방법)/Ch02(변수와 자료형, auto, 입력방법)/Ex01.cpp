// 실습-1

/*
* 변수: 변할 수 있는 값으로, 프로그램에서 데이터를 저장하기 위한 메모리 공간.
*/

#include <iostream>
#include <string>
using namespace std;

int start01(void) {
	// 변수명 작성

	int age = 0;		// 정상적인 변수 선언.
	int i{ 100 };		// int i = 100;
	bool flag = false;	// bool: true == 1 , false == 0 으로 출력됨.

	cout << flag << endl;
	// 변수의 주소 확인
	// 변수는 메모리 스택에 비연속적으로 빈 공간을 찾아 들어간다.
	// &(앰퍼센트): 주소 참조 연산자.
	cout << "변수 age의 주소: " << &age << endl;
	cout << "변수 i의 주소: " << &i << endl << endl;


	// 자료형의 크기(sizeof(데이터타입, 변수명))
	// to_string(정수): 정수값을 문자열 타입으로 변경시켜주는 string 헤더에 존재하는 메소드.
	cout << "short의 크기: " + to_string(sizeof(short)) + "byte" << endl;
	cout << "int의 크기: " + to_string(sizeof(int)) + "byte" << endl;
	cout << "long의 크기: " + to_string(sizeof(long)) + "byte" << endl;
	cout << "long long의 크기: " + to_string(sizeof(long long)) + "byte" << endl;
	cout << "float의 크기: " + to_string(sizeof(float)) + "byte" << endl;
	cout << "double의 크기: " + to_string(sizeof(double)) + "byte" << endl;
	cout << "long double의 크기: " + to_string(sizeof(long double)) + "byte" << endl;
	cout << "bool의 크기: " + to_string(sizeof(bool)) + "byte" << endl;
	cout << "char의 크기: " + to_string(sizeof(char)) + "byte" << endl << endl;

	// string 타입(문자열)
	string s1 = "Hi";
	string s2 = "Hello";
	string s3 = s1 + " " + s2 + "!!";	// 문자열끼리 + 연산자로 결합가능.
	cout << s3 << endl;

	cout << "변수 s1의 주소: " << &s1 << endl;
	cout << "변수 s2의 주소: " << &s2 << endl;
	cout << "변수 s3의 주소: " << &s3 << endl << endl;

	bool equal = (s1 == s2);
	cout << "s1 == s2 " << equal << endl;

	const double TAX_RATE = 0.25;	// 기호 상수 선언 및 초기화.
	//TAX_RATE = 0.35; : 상수는 초기화하고 나면 다른 값을 저장하지 못한다.

	int garbage;	// 초기화 안됨.
	//cout << garbage << endl;   << 초기화되지 않은 지역변수: 컴파일 에러

	// 변수든 상수든 간에 초기화가 원칙이다.

	return 0;
}