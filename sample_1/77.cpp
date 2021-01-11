////override(오버라이드) : 우선하다 (not overwrite) 
////overload : 중복해서 쓰는 것 
////overwrite : 덮어쓰다
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
//	//cout << d.a << endl; // derived 안의 a 에 접근함 자기 자신의 클래스를 부모클래스 보다 우선
//	//cout << d.base::a << endl; //base 안의 a 에 접근함
//	//cout << d.derived::a << endl; // derived 안의 a 에 접근함
//
//	d.print();
//	d.base::print();
//	d.derived::print();
//}