//// 가상 함수는 명시적으로 입력할 시 출력할 수 있음(전 강의 참고)
//// 순수 가상함수는 절대로 실행 될 수 없는 형태만 있는 함수
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
//	virtual void f() = NULL; // 순수 가상 함수, NULL 대신 0을 써도 됨
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
//	//A* a = new A; //순수 가상 함수를 하나라도 가질 시, 그 타입의 객체를 선언할 수 없음
//	// -> 추상 클래스
//	A* a = new B;
//	a->f();
//	delete a;
//
//}