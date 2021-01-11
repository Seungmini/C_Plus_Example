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
//
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
//private:
//	int num;
//	string name;
//};
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
//	i1.print();
//	i2.print();
//	i3.print();
//	i4.print();
//	i5.print();
//	i6.print();
//	i7.print();
//	i8.print();
//	
//}