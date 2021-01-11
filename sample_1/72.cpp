//// 묵시적(암시적) 형변환
//// 명시적 형변환
//
//#include <iostream>
//#include <string>
//#include <string.h>
//using namespace std;
//
//
//class Item {
//public:
//	//생성자에서도 explicit 을 통해서 (int) , (string)을 통해서만 생성되게 할 수 도 있음
//	Item(int num) : num(num) { //변환 생성자
//		cout << "Item(int)" << endl;
//	}
//	Item(string name) : name(name) {
//		cout << "Item(string)" << endl;
//	}
//	Item(int num, string name) : num(num), name(name) {
//		cout << "Item (int ,string): " << endl;
//	}
//
//	void print() {
//		cout << num << " : " << name << endl;
//	}
//
//	operator int() const { //int로의 형변환 연산자 기존의 연산자 오버로딩 선언과 형태가 다름 주의
//		return num;
//	}
//	operator string() const {
//		return to_string(num) + " : " + name;
//		
//	}
//
//	//묵시적 변환을 아예 막기 위해서 explicit을 operator 왼쪽에 첨가
//	//explicit operator int() const { //int로의 형변환 연산자 기존의 연산자 오버로딩 선언과 형태가 다름 주의
//	//	return num;
//	//}
//	//explicit operator string() const {
//	//	return to_string(num) + " : " + name;
//
//	//}
//private:
//	int num;
//	string name;
//};
//
//void println(string s) {
//	cout << s << endl;
//}
//
//void println(int n) {
//	cout << n << endl;
//}
//int main() {
//	Item i1 = Item(1);
//	Item i2(2);
//	Item i3 = 3;
//	i3 = 3; //?????? //묵시적 변환 호출
//	Item i4 = (Item)4; // int 4를 Item으로 변환시켜주는 역할을 가장 위의 생성자가 하고 있었음 //명시적 변환 호출
//
//	Item i5 = string("stone");
//	Item i6(1, "grass");
//	Item i7 = { 2, "dirt" };
//	Item i8{ 3,"wood" };
//
//	int itemNum1 = (int)i8;
//	int itemNum2 = i7;
//	cout << itemNum1 << endl;
//	cout << itemNum2 << endl;
//
//
//	cout << (string)(i8) << endl;
//
//	println((string)(i8));
//	println((int)i8); //println을 정의할 때, 매개변수를 string으로 받는다고 선언했기때문에 알아서 묵시적으로 i8이 string으로 변환됨 -> opeartor string() 실행
//	//하지만 오버로딩으로 다양한 println(int) println(string)을 만들어 놓으면 그냥 i8만 입력할 경우 오류가 발생함. -> 변환형을 따로 넣어주어야함
//
//
//}