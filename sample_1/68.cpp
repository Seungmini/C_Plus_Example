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
//		cout << "String() ������ ȣ��" << endl;
//		strData = NULL;
//		len = 0;
//	}
//	String(const char* str) {
//		cout << "String(const char*) ������ ȣ��" << endl;
//		len = strlen(str);
//		strData = new char[len + 1]; //�迭�� �ǳ��κп� NULL�� �־���ϱ� ������ +1�� ���ش�. 
//		cout << "strData �Ҵ� : " << (void*)strData << endl; //(void*)��, �׳� strData�� ����Ϸ��� �� �� ���ڿ� �����ͷ� �ν���
//															 // ���� strData�� �ּڰ��� ��ȯ�ϱ� ���ؼ��� (void*)�� �ٿ�����
//		//void *ptr = strData; �� �ǹ̴� ptr�� strData�� �ּڰ��� ������ �ֱ�� ������ ��� �ڷ��������� �� �� ����(�׳� �ּڰ��� ������ �ִ� ����), *ptr = �� �Ҵ� x
//		strcpy(strData, str);//���� ����
//
//
//	}
//
//	String(String& rhs) { //���� ������ 
//		cout << "String(String& rhs) ������ ȣ��" << endl;
//		//strData = rhs.strData; //���� ����
//		strData = new char[rhs.len + 1];
//		cout << "strData �Ҵ� : " << (void*)strData << endl;
//		strcpy(strData, rhs.strData);
//		len = rhs.len; //���� ����
//	}
//
//	~String() {
//		cout << "~String() �Ҹ��� ȣ��" << endl;
//		delete[] strData;
//		cout << "strData ������: " << (void*)strData << endl;
//		strData = NULL;
//	}
//	 //��ȯŸ�Ե� &(���۷���)�� �����ν�, return�� �Ҷ� ���ʿ��ϰ� ������ ȣ���� �߻����� ���� �� ����
//	String &operator = (const String &rhs){ //�׳� rhs �� ���� const String rhs ��� ���ο� Ŭ���� ������ ������ �ϱ� ������ �����ڰ� ���ʿ��ϰ� ȣ�������
//										   //&rhs�� �Ұ�� ���۷����̱� ������ ������ ������ ȣ���� �ʿ����� ���� (�̺κ� ���� !!)
//		if (this != &rhs) { //���۷��� ��ü�� �ּڰ� &�� �ּڰ��� �ҷ����� �����ڷ� ���� ���۷��� ��ȣ�� �򰥸��� ����!
//
//
//		//�⺻ ������(String())�� ȣ��ǰ� �� �ڿ� opeartor =�� ���°��̱� ������ ������ �����Ҵ�� �޸𸮸� ������ �־����.
//			delete[] strData;
//			strData = new char[rhs.len + 1];
//			cout << "strData �Ҵ� : " << (void*)strData << endl;
//			strcpy(strData, rhs.strData);
//			len = rhs.len; //���� ����
//		}
//		//cout << *this << endl; �̷� ��ɾ ���� ������ �߻���. *this ��ü�� ������ ������ class 'String'�����̶�� ������ �� ���� �°� String class�� return���� �� �� ����.
//		return *this; //��ü ��ü�� ��ȯ��!!
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
//	String s1("�ȳ�");
//	//cout << s1 << endl;
//	String s2(s1); //���� ������
//	String s3; 
//	s3 = s1; // = ������ ������ �����ε��� �ʿ���
//
//
//}