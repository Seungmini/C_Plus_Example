//// static_cast : ���� (������)
//// dynamic_cast : ����(��Ÿ��)
//
//// RTTI (Run Time Type Information / Identification)
//#include <iostream>
//
//using namespace std;
//
//
//class Base { //virtual �Լ��� �ϳ��� ���� �� -> ���� Ŭ����
//	//virtual �Լ� �Է� �� �θ�, �ڽ� Ŭ���� ������ 4byte �� ����
//	//�� 4����Ʈ�� ������ �� �ڽ� , �θ� ���迡 ����(?) ������ ��� ����
//	//�ٿ�ĳ������ �ϱ� ���ؼ��� �� 4����Ʈ�� ������ �ϹǷ�, �̴� ��
//	//�θ� ��ü�� �ϳ� �̻��� Virtual �Լ��� ������ ���� �ǹ��Ѵ�.
//	//virtual �Լ� -> rtti ���� -> dynamic_cast
//public: 
//	virtual void f() { cout << "base" << endl; }
//	int x = 1;
//};
//
//class Derived : public Base {
//public:
//	void f() { cout << "Derived" << endl; }
//	int y = 2;
//};
//
//int main() { 
//	//��ü�� �����ϴ� �迭�� ������ Ȯ���� �� �� ����
//	//���� : ó������ �ּڰ�(������), ��ü �ȿ� �����ϴ� ���� �� ����
//	cout << sizeof(Base) << endl;
//	cout << sizeof(Derived) << endl;
//
//	int* a = (int*)new Base;
//	cout << a[0] << " " << a[1] << endl;
//
//	int* b = (int*)new Derived;
//	cout << b[0] << " " << b[1] << " "<<b[2]<<endl;
//
//	int* c = (int*)new Derived;
//	cout << c[0] << " " << c[1] << " "<<c[2]<<endl;
//
//	delete a;
//	delete b;
//	delete c;
//
//
//}