//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//class Shape {
//public:
//	virtual double GetArea() const = 0;
//	virtual void Resize(double k) = 0;
//};
//
//class Circle : public Shape {
//public:
//	Circle(double r) : r(r) {}
//	double GetArea() const {
//		return r * r * 3.14;
//	}
//	void Resize(double k) {
//		r *= k;
//	}
//private:
//	double r;
//};
//
//class Rectangle : public Shape {
//public:
//	Rectangle(double a, double b) : a(a), b(b) {}
//	double GetArea() const {
//		return a * b;
//	}
//	void Resize(double k) {
//		a *= k;
//		b *= k;
//	}
//	double GetDiag() const {
//		return sqrt(a * a + b * b);
//	}
//private:
//	double a, b;
//};
//
//int main() {
//	Shape* shapes[] = { new Circle(1), new Rectangle(1,2) };
//
//	for (int i = 0; i < 2; i++) {
//		//도형의 넓이
//		// 만약 직사각형일 경우, 대각선 길이 출력
//		cout << "도형의 넓이 : " << shapes[i]->GetArea() << endl;
//		//실제로 shapes[i]가 가리키는 것이 Rectangle 객체일 때만 주솟값 변환됨
//		// 그외엔 dynamic_cast 에서 NULL을 반환함
//		// dynamic_cast는 시스템의 성능을 저하시키므로 최대한 안쓰는 것이 좋음
//		Rectangle* r = dynamic_cast<Rectangle*>(shapes[i]);
//		if( r!= NULL)
//		cout << "직사각형의 대각선 길이: " << r->GetDiag() << endl;
//	}
//
//
//
//	for (int i = 0; i < 2; i++) {
//		delete shapes[i];
//	}
//}