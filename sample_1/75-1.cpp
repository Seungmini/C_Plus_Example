//// 접근 제어
//// public : 외부 접근 o 자식클래스 o
//// protected : 외부 접근 x 자식 클래스 o
//// private : 외부 접근 x 자식클래스 x
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
//class Derived : public Base { //protected로 바꾸면. 부모 클래스 public,protected -> protected
//public: // -> protected 보다 더 높은 공개수준의 변수,함수 있다면 모두 protected 로 낮춤
//	// private로 바꾸면 부모 클래스 public,protected -> private
//	int dPublic;
//
//	void dFunc() {
//		bPublic = 1;
//		bProtected = 2;
//		// bPrivate = 3; 접근이 안됨
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
//	// b.bProtecetd = 2; 접근이 안됨
//	// b.bPrivate = 3; 접근이 안됨
//
//	d.bPublic = 1; // class Derived : protected ~ 일경우 외부 접근 불가 (부모 class public -> protected)
//	// d.bProtected = 2; 접근이 안됨 (내부 클래스에서의 접근이 아닌 main함수라는 외부접근)
//	// d.bPrivate = 3; 접근이 안됨 
//	d.dPublic = 2;
//	// d.dPrivate = 3; 접근이 안됨
//
//}