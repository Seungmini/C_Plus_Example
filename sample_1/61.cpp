//#include <iostream>
//
//using namespace std;
//// 멤버 메서드의 선언, 정의 분리하기
//// 보통의 90퍼센트 이상의 경우 모두 선언과 정의를 분리함
//class Vector2 {
//private:
//	float x;
//	float y;
//
//public:
//	Vector2();
//	Vector2(float x, float y);
//
//	float GetX() const;
//	float GetY() const;
//	static Vector2 Sum(Vector2 a, Vector2 b) {
//		return Vector2(a.x + b.x, a.y + b.y);
//	}
//
//	Vector2 Add(Vector2 rhs) {
//		return Vector2(x + rhs.x, y + rhs.y);
//	}
//
//
//};
//
//Vector2::Vector2() : x(0), y(0) {}
//Vector2::Vector2(float x, float y) : x(x), y(y) {}
//float Vector2::GetX() const { return x; }
//float Vector2::GetY() const { return y; }
//
//
//int main()
//{
//	Vector2 a(2, 3);
//	Vector2 b(-1, 4);
//	//Vector2 c = a + b; //이렇게 우리 desired 되로 더할 수 는 없음 연산자 +에 대한 오버로딩이 필요함 .(다음 강좌)
//	Vector2 c = Vector2::Sum(a, b);
//	Vector2 d = a.Add(b);
//	cout << a.GetX() << "," << a.GetY() << endl;
//	cout << b.GetX() << "," << b.GetY() << endl;
//	cout << c.GetX() << "," << c.GetY() << endl;
//	cout << d.GetX() << "," << d.GetY() << endl;
//}