////override(�������̵�) : �켱�ϴ� (not overwrite) 
////overload : �ߺ��ؼ� ���� �� 
////overwrite : �����
//#include <iostream>
//
//using namespace std;
//
//class base {
//public:
//	int a = 10;
//
//	void print() {
//		cout << "from base" << endl;
//	}
//};
//
//class derived : public base{
//public: 
//	int a = 20;
//	void print() {
//		cout << "from derived" << endl;
//	}
//};
//
//
//int main() {
//	base b;
//	derived d;
//
//	//cout << b.a << endl;
//	//cout << d.a << endl; // derived ���� a �� ������ �ڱ� �ڽ��� Ŭ������ �θ�Ŭ���� ���� �켱
//	//cout << d.base::a << endl; //base ���� a �� ������
//	//cout << d.derived::a << endl; // derived ���� a �� ������
//
//	d.print();
//	d.base::print();
//	d.derived::print();
//}