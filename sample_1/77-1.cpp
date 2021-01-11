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
////부모 클래스의 포인터가 자식의 주솟값을 받을 수 있음 (외우기)
//int main() {
//	Base* b = new Derived();
//	b->print();//(*b).print() //부모 클래스를 우선함
//	//컴파일러입장에서는 일관성을 위해, 자식 클래스에 함수가 없을 것을 대비하여
//	//부모클래스에 함수가 있는지확인하고 있을 때 실행 -> 정적 바인딩
//	//자식 부모클래스의 동일 이름 함수를 특정조건에 맞게 유동적으로 실행 -> 정적 바인딩
//	//현재 코드는 정적 바인딩임
//	b = new Derived2();
//	b->print();
//	delete b;
//}