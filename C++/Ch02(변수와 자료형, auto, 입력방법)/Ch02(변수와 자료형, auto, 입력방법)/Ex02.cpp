/*
* auto 키워드: 자동변수라는 의미밖에 없었지만, C++ 11에서 auto의 의미가 바뀜.
* 자료형을 생략할 때 사용할 수 있는 키워드. 자동 타입 추론
*/

#include <iostream>
#include <string>
using namespace std;

int start02(void) {

	double d = 1.0;		// double(8byte) 타입 변수 1.0
	auto ad = 1.8;

	cout << "변수 d의 크기: " << sizeof(d) << endl;
	cout << "변수 ad의 크기: " << sizeof(ad) << endl;

	return 0;
}