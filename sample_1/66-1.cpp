//#include <iostream>
//
//using namespace std;
//
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#pragma warning(disable: 4996)
//class String {
//public:
//	String() {
//		strData = NULL;
//		len = 0;
//	}
//	String(const char* str) {
//		len = strlen(str);
//		strData = new char[len+1]; //배열의 맨끝부분에 NULL이 있어야하기 때문에 +1을 해준다. 
//		strcpy(strData, str); //깊은 복사
//
//
//	}
//
//	~String() {
//		delete[] strData;
//	}
//
//	char *GetStrData() const {
//		return strData;
//	}
//
//	int GetLen() const {
//		return len;
//	}
//private:
//	char *strData;
//	int len;
//};
//
//int main() {
//	String s;
//
//
//}