//// ���� ����
//// public : �ܺ� ���� o �ڽ�Ŭ���� o
//// protected : �ܺ� ���� x �ڽ� Ŭ���� o
//// private : �ܺ� ���� x �ڽ�Ŭ���� x
//
//#include <iostream>
//
//using namespace std;
//class Base {
//public:
//	int bPublic;
//protected:
//	int bProtected;
//private:
//	int bPrivate;
//};
//
//class Derived : public Base { //protected�� �ٲٸ�. �θ� Ŭ���� public,protected -> protected
//public: // -> protected ���� �� ���� ���������� ����,�Լ� �ִٸ� ��� protected �� ����
//	// private�� �ٲٸ� �θ� Ŭ���� public,protected -> private
//	int dPublic;
//
//	void dFunc() {
//		bPublic = 1;
//		bProtected = 2;
//		// bPrivate = 3; ������ �ȵ�
//		dPublic = 4;
//		dPrivate = 5;
//	}
//private:
//	int dPrivate;
//
//};
//int main() {
//	Base b;
//	Derived d;
//
//	b.bPublic = 1;
//	// b.bProtecetd = 2; ������ �ȵ�
//	// b.bPrivate = 3; ������ �ȵ�
//
//	d.bPublic = 1; // class Derived : protected ~ �ϰ�� �ܺ� ���� �Ұ� (�θ� class public -> protected)
//	// d.bProtected = 2; ������ �ȵ� (���� Ŭ���������� ������ �ƴ� main�Լ���� �ܺ�����)
//	// d.bPrivate = 3; ������ �ȵ� 
//	d.dPublic = 2;
//	// d.dPrivate = 3; ������ �ȵ�
//
//}