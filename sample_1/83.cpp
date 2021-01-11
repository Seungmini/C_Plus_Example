////다운클래스 : 부모클래스 -> 자식클래스
////static_cast, dynamic_cast
//
////static_cast는 기본적인 자료형들간의 형변환을 만듦
////ex) double -> int / int -> double, 업캐스팅 / 다운캐스팅...
//#include <iostream>
//
//using namespace std;
//
//class Base {
//public:
//	int a = 1;
//
//};
//
//class Drv1 : public Base {
//public:
//	float b = 3.14;
//	
//	void f() {
//		cout << "Drv1::f()" << endl;
//		cout << b << endl;
//	}
//};
//
//class Drv2 : public Base {
//public:
//	int c = 3;
//	
//	void f() {
//		cout << "Drv2::f()" << endl;
//		cout << c << endl;
//	}
//};
//
//int main() {
//	Base* b = new Drv1;
//	Base* b2 = new Drv2;
//	//위의 형식에선 b->a 처럼 부모 클래스에 밖에 접근 못함 (업캐스팅됨)
//	//(자식 클래스의 public 접근 x)
//	
//	//다운캐스팅은 명시적으로 표현하지 않는 이상 컴파일러에서 자동으로 설정 x
//
//	Drv1* d1 = (Drv1*)b; //Drv1 * (객체 포인터)의 자료형으로 강제 형변환
//	d1->f(); //o.k.
//
//	// 컴파일러가 적절한 형변환인지 체크해 주기 위해서 static_cast 함수 사용
//
//	Drv1* d1_static = static_cast<Drv1*>(b);
//	d1->f(); //o.k.
//
//	Drv2* d2 = static_cast<Drv2*>(b2);
//	d2->f();//정상 출력
//
//	Drv2* d3 = static_cast<Drv2*>(b);
//	d3->f();//비정상 출력 b 변수가 없기 때문에 이상한 값 출력 (쓰레기값은 x)
//	//3.14의 float 표현법을 int 10진수 표현법으로 바꾸었을때의 값 출력
//
//	delete b;
//	delete b2;
//}