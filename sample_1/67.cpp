//#include <iostream>
//#include <string.h>
//#include <stdio.h>
//
///*#ifdef _msc_ver
//#define _crt_secure_no_warnings
//#endif
//#pragma warning(disable: 4996)*/
//#define _crt_secure_no_warnings
//
//using namespace std;
//
//class string {
//public:
//	string() {
//		cout << "string() 생성자 호출" << endl;
//		strdata = null;
//		len = 0;
//	}
//	string(const char* str) {
//		cout << "string(const char*) 생성자 호출" << endl;
//		len = strlen(str);
//		strdata = new char[len + 1]; //배열의 맨끝부분에 null이 있어야하기 때문에 +1을 해준다. 
//		cout << "strdata 할당 : " << (void*)strdata << endl; //(void*)은, 그냥 strdata를 출력하려고 할 시 문자열 데이터로 인식함
//															 // 따라서 strdata의 주솟값을 반환하기 위해서는 (void*)을 붙여야함
//		//void *ptr = strdata; 의 의미는 ptr이 strdata의 주솟값을 가지고 있기는 하지만 어떠한 자료형인지는 알 수 없음(그냥 주솟값만 가지고 있는 상태), *ptr = 값 할당 x
//		strcpy(strdata, str);//깊은 복사
//
//
//	}
//
//	string(string& rhs) {
//		cout << "string(string& rhs) 생성자 호출" << endl;
//		//strdata = rhs.strdata; //얕은 복사
//		strdata = new char[rhs.len + 1];
//		cout << "strdata 할당 : " << (void*)strdata << endl;
//		strcpy(strdata, rhs.strdata);
//		len =rhs.len; //깊은 복사
//	}
//
//	~string() {
//		cout << "~string() 소멸자 호출" << endl;
//		delete[] strdata;
//		cout << "strdata 해제됨: " << (void*)strdata << endl;
//		strdata = null;
//	}
//
//	char *getstrdata() const {
//		return strdata;
//	}
//
//	int getlen() const {
//		return len;
//	}
//private:
//	char *strdata;
//	int len;
//};
//
//int main() {
//	string s1("안녕");
//	//cout << s1 << endl;
//	string s2 = s1; //복사 생성자
//
//
//}