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
//		cout << "string() ������ ȣ��" << endl;
//		strdata = null;
//		len = 0;
//	}
//	string(const char* str) {
//		cout << "string(const char*) ������ ȣ��" << endl;
//		len = strlen(str);
//		strdata = new char[len + 1]; //�迭�� �ǳ��κп� null�� �־���ϱ� ������ +1�� ���ش�. 
//		cout << "strdata �Ҵ� : " << (void*)strdata << endl; //(void*)��, �׳� strdata�� ����Ϸ��� �� �� ���ڿ� �����ͷ� �ν���
//															 // ���� strdata�� �ּڰ��� ��ȯ�ϱ� ���ؼ��� (void*)�� �ٿ�����
//		//void *ptr = strdata; �� �ǹ̴� ptr�� strdata�� �ּڰ��� ������ �ֱ�� ������ ��� �ڷ��������� �� �� ����(�׳� �ּڰ��� ������ �ִ� ����), *ptr = �� �Ҵ� x
//		strcpy(strdata, str);//���� ����
//
//
//	}
//
//	string(string& rhs) {
//		cout << "string(string& rhs) ������ ȣ��" << endl;
//		//strdata = rhs.strdata; //���� ����
//		strdata = new char[rhs.len + 1];
//		cout << "strdata �Ҵ� : " << (void*)strdata << endl;
//		strcpy(strdata, rhs.strdata);
//		len =rhs.len; //���� ����
//	}
//
//	~string() {
//		cout << "~string() �Ҹ��� ȣ��" << endl;
//		delete[] strdata;
//		cout << "strdata ������: " << (void*)strdata << endl;
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
//	string s1("�ȳ�");
//	//cout << s1 << endl;
//	string s2 = s1; //���� ������
//
//
//}