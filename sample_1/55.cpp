//#include <iostream>
////this 는 주소를 가르킴 
//
////각자의 class 변수에서 Printthis를 호출할시에 각각의 class 변수에 내장된 함수를 호출하는것이 아닌 따로 존재하는 class 함수 블럭에 가서 호출함
////그때 매개변수로써 받아둔 것이 this (주소 포인터)임
//using namespace std;
//
//
//class MyClass {
//public:
//
//	void PrintThis() {
//		cout << "나의 주소는 " << this << endl;
//	}
//
//};
//int main() {
//	MyClass a, b;
//
//	cout << "a의 주소는" << &a << endl;
//	cout << "b의 주소는" << &b << endl;
//
//	a.PrintThis();
//	b.PrintThis();
//}