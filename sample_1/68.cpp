//#include <iostream>
//#include <string.h>
//#include <stdio.h>
//
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#pragma warning(disable: 4996)
//#define _CRT_SECURE_NO_WARNINGS
//
//using namespace std;
//
//class String {
//public:
//	String() {
//		cout << "String() 생성자 호출" << endl;
//		strData = NULL;
//		len = 0;
//	}
//	String(const char* str) {
//		cout << "String(const char*) 생성자 호출" << endl;
//		len = strlen(str);
//		strData = new char[len + 1]; //배열의 맨끝부분에 NULL이 있어야하기 때문에 +1을 해준다. 
//		cout << "strData 할당 : " << (void*)strData << endl; //(void*)은, 그냥 strData를 출력하려고 할 시 문자열 데이터로 인식함
//															 // 따라서 strData의 주솟값을 반환하기 위해서는 (void*)을 붙여야함
//		//void *ptr = strData; 의 의미는 ptr이 strData의 주솟값을 가지고 있기는 하지만 어떠한 자료형인지는 알 수 없음(그냥 주솟값만 가지고 있는 상태), *ptr = 값 할당 x
//		strcpy(strData, str);//깊은 복사
//
//
//	}
//
//	String(String& rhs) { //복사 생성자 
//		cout << "String(String& rhs) 생성자 호출" << endl;
//		//strData = rhs.strData; //얕은 복사
//		strData = new char[rhs.len + 1];
//		cout << "strData 할당 : " << (void*)strData << endl;
//		strcpy(strData, rhs.strData);
//		len = rhs.len; //깊은 복사
//	}
//
//	~String() {
//		cout << "~String() 소멸자 호출" << endl;
//		delete[] strData;
//		cout << "strData 해제됨: " << (void*)strData << endl;
//		strData = NULL;
//	}
//	 //반환타입도 &(레퍼런스)를 함으로써, return을 할때 불필요하게 생성자 호출이 발생하지 않을 수 있음
//	String &operator = (const String &rhs){ //그냥 rhs 로 쓰면 const String rhs 라는 새로운 클래스 변수를 만들어야 하기 때문에 생성자가 불필요하게 호출되지만
//										   //&rhs로 할경우 레퍼런스이기 때문에 별도의 생성자 호출이 필요하지 않음 (이부분 유의 !!)
//		if (this != &rhs) { //레퍼런스 객체의 주솟값 &는 주솟값을 불러오는 연산자로 위의 레퍼런스 기호와 헷갈리지 말것!
//
//
//		//기본 생성자(String())가 호출되고 난 뒤에 opeartor =을 쓰는것이기 때문에 이전에 동적할당된 메모리를 삭제해 주어야함.
//			delete[] strData;
//			strData = new char[rhs.len + 1];
//			cout << "strData 할당 : " << (void*)strData << endl;
//			strcpy(strData, rhs.strData);
//			len = rhs.len; //깊은 복사
//		}
//		//cout << *this << endl; 이런 명령어를 쓰면 오류가 발생함. *this 자체가 위에서 정의한 class 'String'형식이라는 오류가 뜸 따라서 맞게 String class를 return함을 알 수 있음.
//		return *this; //객체 자체가 반환됨!!
//	}
//
//	char* GetStrData() const {
//		return strData;
//	}
//
//	int GetLen() const {
//		return len;
//	}
//private:
//	char* strData;
//	int len;
//};
//
//int main() {
//	String s1("안녕");
//	//cout << s1 << endl;
//	String s2(s1); //복사 생성자
//	String s3; 
//	s3 = s1; // = 에대한 연산자 오버로딩이 필요함
//
//
//}