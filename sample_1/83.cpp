////�ٿ�Ŭ���� : �θ�Ŭ���� -> �ڽ�Ŭ����
////static_cast, dynamic_cast
//
////static_cast�� �⺻���� �ڷ����鰣�� ����ȯ�� ����
////ex) double -> int / int -> double, ��ĳ���� / �ٿ�ĳ����...
//#include <iostream>
//
//using namespace std;
//
//class Base {
//public:
//	int a = 1;
//
//};
//
//class Drv1 : public Base {
//public:
//	float b = 3.14;
//	
//	void f() {
//		cout << "Drv1::f()" << endl;
//		cout << b << endl;
//	}
//};
//
//class Drv2 : public Base {
//public:
//	int c = 3;
//	
//	void f() {
//		cout << "Drv2::f()" << endl;
//		cout << c << endl;
//	}
//};
//
//int main() {
//	Base* b = new Drv1;
//	Base* b2 = new Drv2;
//	//���� ���Ŀ��� b->a ó�� �θ� Ŭ������ �ۿ� ���� ���� (��ĳ���õ�)
//	//(�ڽ� Ŭ������ public ���� x)
//	
//	//�ٿ�ĳ������ ��������� ǥ������ �ʴ� �̻� �����Ϸ����� �ڵ����� ���� x
//
//	Drv1* d1 = (Drv1*)b; //Drv1 * (��ü ������)�� �ڷ������� ���� ����ȯ
//	d1->f(); //o.k.
//
//	// �����Ϸ��� ������ ����ȯ���� üũ�� �ֱ� ���ؼ� static_cast �Լ� ���
//
//	Drv1* d1_static = static_cast<Drv1*>(b);
//	d1->f(); //o.k.
//
//	Drv2* d2 = static_cast<Drv2*>(b2);
//	d2->f();//���� ���
//
//	Drv2* d3 = static_cast<Drv2*>(b);
//	d3->f();//������ ��� b ������ ���� ������ �̻��� �� ��� (�����Ⱚ�� x)
//	//3.14�� float ǥ������ int 10���� ǥ�������� �ٲپ������� �� ���
//
//	delete b;
//	delete b2;
//}