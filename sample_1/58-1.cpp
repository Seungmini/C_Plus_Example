////static : 정적 <-> 동적
//
//#include <iostream>
//
//using namespace std;
//
//// 0 - 1 float R G B
//
//class Color {
//public:
//	Color() : r(0), g(0), b(0) {}
//	Color(float r, float g, float b) : r(r), g(g), b(b) {}
//
//	float GetR() { return r; }
//	float GetG() { return g; }
//	float GetB() { return b; }
//
//
//	//전역으로 쓰고 싶은 함수가 있는데 그 함수가 특정한 class와 밀접한 관련이 있고,
//	//필드안에 있는 멤버변수에 그대로 접근하고 싶을 때 사용
//	static Color MixColors(Color a, Color b) { //static 정적 멤버!
//		/*Color res((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
//		return res;*/
//
//		//return Color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
//		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
//		// class 바깥에서 따로 함수를 만들어도 되지만, 클래스 안에 집어 넣으면 따로 get 함수를 만들지 않아도
//		// 클래스 내부의 private변수에 자유롭게 접근할 수 있음.
//	}
//private:
//	float r;
//	float g;
//	float b;
//
//};
//
//
//int main() {
//	Color blue(0, 0, 1);
//	Color red(1, 0, 0);
//
//	Color purple = Color::MixColors(blue, red);
//
//	cout << "r =" << purple.GetR() << " g =" << purple.GetG() << " b =" << purple.GetB() << endl;
//}