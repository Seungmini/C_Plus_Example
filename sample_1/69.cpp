////���� ����� �����ؾ��ϴ� �������� ũ�Ⱑ Ŭ �� ���� �� �����ؾߵȴٴ� ������ ����
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
//		strcpy(strData, str);//���� ����
//
//
//	}
//
//	String(String& rhs) { //���� ������ 
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
//	//��ȯŸ�Ե� &(���۷���)�� �����ν�, return�� �Ҷ� ���ʿ��ϰ� ������ ȣ���� �߻����� ���� �� ����
//	String& operator = (const String& rhs) {  //���� ���� ������
//		cout << "String &operator=(const String&) : " << this << endl;
//		if (this != &rhs) { //���۷��� ��ü�� �ּڰ� 
//			release(); //������ �����ڸ� ���� ������� strdata delete
//			len = rhs.len;
//			alloc(len);
//			strcpy(strData, rhs.strData);
//
//		}
//		return *this; //��ü ��ü�� ��ȯ��
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
//	return res; //return�� ���� ���ο� �ӽ� ��ü�� ������ (���ʿ��ϰ�)
//}
//int main() {
//	String a;
//	cout << "=== 1 ===" << endl;
//	a = getName();
//	cout << "=== 4 ===" << endl;
//	
//	String&& r = getName(); //r value ���� ���
//	
//}
//
////r-value  �º��� �ü� ���� �͵� �ӽð�ü�� r value�� ���� �º��� �����ν� ���� ������ �� �� ����
////l-value  �º�, �캯�� ��� �� �� �ִ� �͵�