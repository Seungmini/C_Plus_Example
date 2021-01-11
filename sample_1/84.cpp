//// static_cast : 정적 (컴파일)
//// dynamic_cast : 동적(런타임)
//
//// RTTI (Run Time Type Information / Identification)
//#include <iostream>
//
//using namespace std;
//
//
//class Base { //virtual 함수가 하나라도 있을 시 -> 다형 클래스
//	//virtual 함수 입력 시 부모, 자식 클래스 데이터 4byte 씩 증가
//	//이 4바이트는 포인터 및 자식 , 부모 관계에 대한(?) 정보를 담고 있음
//	//다운캐스팅을 하기 위해서는 이 4바이트를 가져야 하므로, 이는 곧
//	//부모 객체중 하나 이상의 Virtual 함수를 가져야 함을 의미한다.
//	//virtual 함수 -> rtti 지원 -> dynamic_cast
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
//	//객체를 구성하는 배열의 구조를 확인해 볼 수 있음
//	//구조 : 처음에는 주솟값(포인터), 객체 안에 존재하는 변수 순 나열
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