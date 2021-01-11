////static : 정적 <-> 동적
//
//#include <iostream>
//
//using namespace std;
//
//// 0 - 1 float R G B
// // int idCounter = 1;
//
//// static 변수, 함수를 사용함으로써 전역 변수, 함수를 사용하는것을 최대한 막아줌 
//class Color {
//public:
//	Color() : r(0), g(0), b(0), id(idCounter++) {
//		//id = idCounter; //고유의 id 부여가능 
//		//idCounter++;
//		//id = idCounter++; // +는 후처리
//	}
//	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++){}
//
//	float GetR() { return r; }
//	float GetG() { return g; }
//	float GetB() { return b; }
//	int GedId() { return id; }
//	static Color MixColors(Color a, Color b) { //static 정적 멤버!
//		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
//	}
//	
//	
//	static int idCounter; //전역으로 쓰고 싶은데 어떤 클래스와 밀접한 관련이 있을 때
//private:
//	float r;
//	float g;
//	float b;
//
//	int id;
//
//};
//
//int Color::idCounter = 1; //class 가 생성될 때 마다 idcounter를 1로 선언하는 것이 아니기 때문에
////다음과 같이 class 안에서 static int 선언 후 , 밑에 별도로 초기값을 지정해 주어야 함.
//
////생성된 class 변수들에 각각 번호를 매기고 싶을 때, 
//int main() {
//	Color blue(0, 0, 1);
//	Color red(1, 0, 0);
//
//	Color purple = Color::MixColors(blue, red);
//
//	cout << "r =" << purple.GetR() << " g =" << purple.GetG() << " b =" << purple.GetB() << endl;
//	cout << "blue.GetId() = " << blue.GedId() << endl;
//	cout << "red.GetId() = " << red.GedId() << endl;
//	cout << "purple.GetId() = " << purple.GedId() << endl;
//
//}