//#include <iostream>
//
//using namespace std;
//
//int n;
//void set() {
//	::n = 10;
//}
//namespace doodle {
//	int n;
//	void set(); //위에선 선언만하고 밑에서 namespace를 한번더 써서 자세히 함수를 보여줄 수 있음.
//}
//
//namespace google {
//	int n;
//	void set();
//}
//
//int main() {
//	::set();
//	doodle::set();
//	google::set();
//
//	cout << ::n << endl;
//	cout << doodle::n << endl;
//	cout << google::n << endl;
//}
//
//namespace doodle {
//
//	void set() {
//		n = 20; //doodle::n과 동일함
//	}
//}
//
//void google::set() {
//	
//		n = 30; //google::n과 동일함 그냥 ::n만할시에는 전역변수를 의미함
//	
//}