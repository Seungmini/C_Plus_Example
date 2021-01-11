//#include <iostream>
//
//using namespace std;
//
//class Vector2 {
//public: 
//	Vector2() : x(0), y(0) {
//		cout << this << " : Vector2() Address" << endl;
//	}
//	Vector2(const float x, const float y) : x(x), y(y) {
//		cout << this << " : Vector2(const float x, const float y) Address" << endl;
//	}
//
//	~Vector2() {
//		cout << this << " : ~Vector2() Address" << endl;
//
//	}
//
//	float GetX() const { return x; }
//	float GetY() const { return y; }
//private:
//
//	float x;
//	float y;
//
//
//};
//
//int main() {
//	Vector2 s;
//	//cout << s.GetX() << s.GetY() << endl;
//	Vector2 s1 = Vector2();
//	Vector2 s2(3, 2);
//
//
//	Vector2 *d1 = new Vector2();
//	Vector2 *d2 = new Vector2(3, 2);
//	//*포인터.GetX()   ->>>>>          포인터->GetX()
//	cout << "(" << d1->GetX() << ", " << d1->GetY() << endl;
//	cout << "(" << d2->GetX() << ", " << d2->GetY() << endl;
//
//	delete d1;
//	delete d2; //정적 변수보다 동적 변수가 먼저 소멸됨..
//}
