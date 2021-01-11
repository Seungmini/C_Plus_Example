//#include <iostream>
//
//using namespace std;
//
//const double PI = 3.141592;
//
//class Shape {
//public:
//
//	virtual double GetArea() = NULL;
//
//	virtual void Resize(double f) = NULL;
//private:
//	
//};
//
//class Circle : public Shape {
//public:
//	Circle(double r) : r(r) {}
//
//	double GetArea() {
//		return PI * r * r;
//	}
//
//	void Resize(double f) {
//		r *= f;
//	}
//private:
//	double r;
//};
//
//class Rectangle : public Shape{
//public:
//	Rectangle(double a, double b) : a(a) , b(b) {}
//
//	double GetArea() {
//		return a * b;
//	}
//
//	void Resize(double f) {
//		a *= f;
//		b *= f;
//	}
//
//private:
//	double a, b;
//
//};
//
//
//
//int main() {
//	Shape* shapes[] = {
//		new Circle(10),
//		new Rectangle(20,30)
//	};
//	for (Shape* s : shapes)
//	{
//		s->Resize(2);
//	}
//
//	for (Shape* s : shapes)
//	{
//		cout << s->GetArea() << endl;
//	}
//
//	for (Shape* s : shapes)
//	{
//		delete s;
//	} //이렇게 delete해줘야 오류안남 why?
//
//	//delete[] shapes; 이걸로 하면 오류
//}