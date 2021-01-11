////깊은 복사는 복사해야하는 데이터의 크기가 클 시 전부 다 복사해야된다는 단점이 있음
//
//#include <iostream>
//#include <string.h>
//#include <stdio.h>
//
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#pragma warning(disable: 4996)
//
//using namespace std;
//
//class String {
//public:
//	String() {
//		cout << "String() : "<< this << endl;
//		strData = NULL;
//		len = 0;
//	}
//	String(const char* str) {
//		cout << "String(const char*) : " << this<< endl;
//		len = strlen(str);
//		alloc(len);
//		strcpy(strData, str);//깊은 복사
//
//
//	}
//
//	String(String& rhs) { //복사 생성자 
//		cout << "String(String& rhs) : "<< this << endl;
//		len = rhs.len;
//		alloc(len);
//		strcpy(strData, rhs.strData);
//	}
//
//	~String() {
//		cout << "~String() : " << this<<endl;
//		release();
//		strData = NULL;
//	}
//	//반환타입도 &(레퍼런스)를 함으로써, return을 할때 불필요하게 생성자 호출이 발생하지 않을 수 있음
//	String& operator = (const String& rhs) {  //복사 대입 연산자
//		cout << "String &operator=(const String&) : " << this << endl;
//		if (this != &rhs) { //레퍼런스 객체의 주솟값 
//			release(); //이전에 생성자를 통해 만들어진 strdata delete
//			len = rhs.len;
//			alloc(len);
//			strcpy(strData, rhs.strData);
//
//		}
//		return *this; //객체 자체가 반환됨
//	}
//
//	char *GetStrData() const {
//		return strData;
//	}
//
//	int GetLen() const {
//		return len;
//	}
//	void SetStrData(const char* str) {
//		cout << "void SetStrData(const char*) :" << this << ", " << str << endl;
//		len = strlen(str);
//		alloc(len);
//		strcpy(strData, str);
//	}
//private:
//	char* strData;
//	int len;
//	
//	void alloc(int len) {
//		strData = new char[len + 1];
//		cout << "strData allocated : " << (void*)strData << endl;
//	}
//	void release() {
//		delete[] strData;
//		if (strData) cout << "strData released : " << (void*)strData << endl;
//	}
//};
//
//String getName() {
//	cout << "=== 2 ===" << endl;
//	String res("Doodle");
//	cout << "=== 3 ===" << endl;
//	return res; //return을 위한 새로운 임시 객체가 생성됨 (불필요하게)
//}
//int main() {
//	String a;
//	cout << "=== 1 ===" << endl;
//	a = getName();
//	cout << "=== 4 ===" << endl;
//	
//	String&& r = getName(); //r value 참조 방법
//	
//}
//
////r-value  좌변에 올수 없는 것들 임시객체는 r value임 따로 좌변에 둠으로써 값을 지정할 수 는 없음
////l-value  좌변, 우변에 모두 올 수 있는 것들