//#include <iostream>
//
//using namespace std;
//
//int n;
//void set() {
//	::n = 10;
//}
//namespace doodle {
//	int n;
//	void set(); //������ �����ϰ� �ؿ��� namespace�� �ѹ��� �Ἥ �ڼ��� �Լ��� ������ �� ����.
//}
//
//namespace google {
//	int n;
//	void set();
//}
//
//int main() {
//	::set();
//	doodle::set();
//	google::set();
//
//	cout << ::n << endl;
//	cout << doodle::n << endl;
//	cout << google::n << endl;
//}
//
//namespace doodle {
//
//	void set() {
//		n = 20; //doodle::n�� ������
//	}
//}
//
//void google::set() {
//	
//		n = 30; //google::n�� ������ �׳� ::n���ҽÿ��� ���������� �ǹ���
//	
//}