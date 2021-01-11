//#include <iostream>
//
//using namespace std;
//
//struct Point {
//	int x, y;
//};
//
//class Polygon {
//public:
//	Polygon() {
//		nPoints = 0;
//		points = NULL;
//	}
//	Polygon(const int nPoints, const Point* points) : nPoints(nPoints) {
//		this->points = new Point[nPoints];
//		for (int i = 0; i < nPoints; i++)
//			this->points[i] = points[i];
//	}
//	
//	// 복사 생성자 구현
//	Polygon(const Polygon& rhs) {
//		nPoints = rhs.nPoints;
//		points = new Point[nPoints];
//		for (int i = 0; i < nPoints; i++)
//			points[i] = rhs.points[i];
//		cout << "깊은 복사" << endl;
//	}
//
//	// 이동 생성자 구현 (어차피 지워질 객체를 깊은 복사가 아닌 얕은 복사로 하는것) r-value
//	Polygon(Polygon&& rhs) {
//		nPoints = rhs.nPoints;
//		points = rhs.points; //얕은 복사 시행
//		rhs.points = NULL; //rhs가 지워지면서 가리키고 있던 주소도 사라지기 때문에 NULL로 대체
//		cout << "얕은 복사" << endl;
//	}
//
//
//	~Polygon() {
//		delete[] points;
//	}
//
//	// 복사 대입 연산자 구현
//	Polygon& operator = (const Polygon& rhs) {
//		if (this != &rhs) {
//			delete[] points;
//			nPoints = rhs.nPoints;
//			points = new Point[nPoints];
//			for (int i = 0; i < nPoints; i++)
//				points[i] = rhs.points[i];
//			cout << "깊은 복사" << endl;
//		}
//		return *this;
//	}
//	// 이동 대입 연산자 구현
//	Polygon& operator = (Polygon&& rhs) {
//		if (this != &rhs) {
//			nPoints = rhs.nPoints;
//			delete[] points;
//			points = rhs.points;
//			rhs.points = NULL;
//			
//		}
//		cout << "얕은 복사" << endl;
//		return *this;
//
//	}
//
//
//	int GetNPoints() const {
//		return nPoints;
//	}
//
//	Point* GetPoints() const {
//		if (nPoints == 0) return NULL;
//		return points;
//	}
//	
//private:
//	int nPoints;
//	Point* points;
//
//};
//
//Polygon getSquare() {
//	Point points[4] = { {0,0},{1,0},{1,1},{0,1} };
//	Polygon p(4, points);
//	return p;
//}
//
//int main() {
//	Polygon a;
//	a = getSquare(); //얕은 객체 복사 2회
//	Polygon b = a; //깊은 객체 복사 1회
//	Polygon c;
//	c = a; //깊은 객체 복사 1회
//
//	int nPoints = c.GetNPoints();
//	Point* points = c.GetPoints();
//
//	for (int i = 0; i < nPoints; i++) {
//		cout << "(" << points[i].x << "," << points[i].y << ")" << endl;
//	}
//
//}