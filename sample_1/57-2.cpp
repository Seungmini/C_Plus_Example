//// 시 분 초 시간 저장 클래스
//
//#include <iostream>
//
//using namespace std;
//class Time {
//
//
//public:
//	// Time(5) -> 5s
//	// Time(5,0) -> 5m
//	// Time (2, 37, 54) -> ~
//	
//	Time() : h(0), m(0), s(0) {} //생성자 초기화
//
//	Time(int s_) : Time() {// 생성자 위임
//		s = s_;
//	}
//	Time(int m_, int s_) : Time(s_) {// 생성자 위임
//		m = m_;
//
//	}
//	Time(int h_, int m_, int s_) : Time(m_, s_) {// 생성자 위임
//		h = h_;
//	}
//	int h;
//	int m;
//	int s;
//};
//
//int main() {
//	Time t1;
//	Time t2(5);
//	Time t3(3, 16);
//	Time t4(2, 42, 15);
//
//	cout << "t1: " << t1.h << ":" << t1.m << ":" << t1.s << endl;
//	cout << "t2: " << t2.h << ":" << t2.m << ":" << t2.s << endl;
//	cout << "t3: " << t3.h << ":" << t3.m << ":" << t3.s << endl;
//	cout << "t4: " << t4.h << ":" << t4.m << ":" << t4.s << endl;
//}