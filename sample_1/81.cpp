//#include <iostream>
//
//using namespace std;
//
////클래스 생성 순 (정적): 아이스 -> 빙수 -> 팟 -> 팟 빙수
////부모 클래스의 private -> 부모 클래스 자신 -> 자식 클래스 private -> 자식 클래스 자신
////생성자는 맴버들이 모두 초기화 된 후 생성되므로 위의 순서를 가짐 
//class Ice {
//public:
//	Ice() { cout << "Ice()" << endl; }
//	~Ice() { cout << "~Ice()" << endl; }
//};
//
//class Pat {
//public:
//	; Pat() { cout << "Pat()" << endl; }
//	~Pat() { cout << "~Pat()" << endl; }
//};
//
//class Bingsoo {
//public:
//	Bingsoo() {
//		cout << "Bingsoo()" << endl;
//		ice = new Ice;
//	}
//	virtual ~Bingsoo() { //가상 소멸자
//		cout << "~Bingsoo()" << endl;
//		delete ice;
//	}
//
//private:
//	Ice *ice; //Ice 객체 자체가 생긴것이 아닌 주솟값이 먼저 생긴것임 따라서
//	//Ice생성자는 호출이 안된상태에서 Bingsoo생성자가 호출되고 
//	//그안의 ice가 동적 할당됨
//};
//
//class PatBingsoo : public Bingsoo {
//public:
//	PatBingsoo() {
//		cout << "PatBingsoo()" << endl;
//		pat = new Pat;
//	}
//	~PatBingsoo() {
//		cout << "~PatBingsoo()" << endl;
//		delete pat;
//	}
//
//private:
//	Pat *pat;
//};
//int main() {
//	//PatBingsoo* p = new PatBingsoo;
//	Bingsoo* q = new PatBingsoo; 
//	delete q; //q 자신의 자료형인 Bingsoo를 기준으로 delete하기 때문에
//	//컴파일러는 class PatBingsoo를 고려하지 않고 바로 Bingsoo 소멸자로 이동
//	//따라서 bingsoo 소멸자에 virtual을 붙일 시 
//	//bingsoo- > Ice -> patbinsoo -> pat순으로 생성
//	//patbingsoo -> pat -> bingsoo -> ice순으로 소멸
//
//}