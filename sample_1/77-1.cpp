//#include <iostream>
//
//using namespace std;
//
//
//class Base {
//public:
//	int a = 10;
//
//	void print() {
//		cout << "from base" << endl;
//	}
//};
//
//class Derived : public Base {
//public:
//	int a = 20;
//	void print() {
//		cout << "from derived" << endl;
//	}
//};
//
//class Derived2 : public Base {
//
//};
////�θ� Ŭ������ �����Ͱ� �ڽ��� �ּڰ��� ���� �� ���� (�ܿ��)
//int main() {
//	Base* b = new Derived();
//	b->print();//(*b).print() //�θ� Ŭ������ �켱��
//	//�����Ϸ����忡���� �ϰ����� ����, �ڽ� Ŭ������ �Լ��� ���� ���� ����Ͽ�
//	//�θ�Ŭ������ �Լ��� �ִ���Ȯ���ϰ� ���� �� ���� -> ���� ���ε�
//	//�ڽ� �θ�Ŭ������ ���� �̸� �Լ��� Ư�����ǿ� �°� ���������� ���� -> ���� ���ε�
//	//���� �ڵ�� ���� ���ε���
//	b = new Derived2();
//	b->print();
//	delete b;
//}