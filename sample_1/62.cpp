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
//	
//	//rhs와 클래스의 private 변수 모두 바꾸지 않고 그대로 더하여 출력하기 때문에 const를 사용하여야 함
//	Vector2 operator +(const Vector2 rhs) const;
//	Vector2 operator -(const Vector2 rhs) const;
//	Vector2 operator *(const float rhs) const;
//	Vector2 operator /(const float rhs) const;
//	float operator *(const Vector2 rhs) const;
//};
//
//Vector2::Vector2() : x(0), y(0) {}
//Vector2::Vector2(float x, float y) : x(x), y(y) {}
//float Vector2::GetX() const { return x; }
//float Vector2::GetY() const { return y; }
//
//Vector2 Sum(Vector2 a, Vector2 b) {
//	return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
//}
//
//
//
//Vector2 operator*(const float a, const Vector2 b) { //오른쪽에는 const 못붙임 -> 맴버 메소드가 아니기 때문에
//	return Vector2(a * b.GetX(), a * b.GetY()); // 클래스의 메서드가 아니기때문에 다른 opeartor와 다르게 인자를 두개 모두 받아야함.
//}
//
//
//
//
//Vector2 Vector2::operator +(const Vector2 rhs) const {
//		return Vector2(x + rhs.x, y + rhs.y); //클래스안에 소속된 메서드 이기 대문에 따로 get함수를 사용하지 않아도됨.
//	}
//Vector2 Vector2::operator -(const Vector2 rhs) const {
//	return Vector2(x - rhs.x, y - rhs.y); 
//}
//Vector2 Vector2::operator *(const float rhs) const {
//	return Vector2(x * rhs, y * rhs); 
//}
//Vector2 Vector2::operator /(const float rhs) const {
//	return Vector2(x /rhs, y /rhs); 
//}
//float Vector2::operator *(const Vector2 rhs) const {
//	return x * rhs.x  +  y * rhs.y; 
//}
//
//
//int main()
//{
//	Vector2 a(2, 3);
//	Vector2 b(-1, 4);
//	//Vector2 c = a + b; //이렇게 우리 desired 되로 더할 수 는 없음 연산자 +에 대한 오버로딩이 필요함 .(다음 강좌)
//	Vector2 c = a + b;
//	Vector2 d = a * 1.6; //1.6*a는 되지 않음(1.6).operator*(a)가 될 수 없. 기본적인 수의 연산자에대한 오버로딩이 불가. (객체가 아니기 때문)
//	Vector2 d2 = 1.6 * a;
//	Vector2 e = a /2;
//	float f = a * b;
//
//	cout << a.GetX() << "," << a.GetY() << endl;
//	cout << b.GetX() << "," << b.GetY() << endl;
//	cout << c.GetX() << "," << c.GetY() << endl;
//	cout << d.GetX() << "," << d.GetY() << endl;
//	cout << d2.GetX() << "," << d2.GetY() << endl;
//	cout << e.GetX() << "," << e.GetY() << endl;
//	cout << f << endl;
//}