//// ���� �Լ��� ��������� �Է��� �� ����� �� ����(�� ���� ����)
//// ���� �����Լ��� ����� ���� �� �� ���� ���¸� �ִ� �Լ�
//
//#include <iostream>
//
//using namespace std;
//
//class A {
//public:
//	/*virtual void f() {
//		cout << "A::f()" << endl;
//	}*/
//	virtual void f() = NULL; // ���� ���� �Լ�, NULL ��� 0�� �ᵵ ��
//};
//
//class B : public A {
//public:
//	void f() {
//		cout << "B::f()" << endl;
//	}
//};
//
//int main() {
//	//A* a = new A; //���� ���� �Լ��� �ϳ��� ���� ��, �� Ÿ���� ��ü�� ������ �� ����
//	// -> �߻� Ŭ����
//	A* a = new B;
//	a->f();
//	delete a;
//
//}