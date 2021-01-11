//#include <iostream>
//
//using namespace std;
//
//class MyClass {
//public:
//	MyClass() : num(cnt++), ch('\0') {}
//
//	void Check(MyClass *ptr) {
//		if (ptr + num == this) { // ptr+num = &ptr[num] = &obj[num], this는 class 의 주솟값 배열의 각각의 인덱스에 해당함. 
//			cout << num << endl;
//		}
//
//		
//	}
//	static int cnt;
//private:
//	int num;
//	char ch;
//	
//};
//int MyClass::cnt = 0;
//
//
//
//int main() {
//	MyClass obj[5];
//
//	cout << "Test #1 : " << endl;
//	for (int i = 0; i < 5; i++) {
//		obj[i].Check(obj); // obj = &obj[0]
//	}
//	cout << "Test #2 : " << endl;
//	for (MyClass &i : obj) { // i는 레퍼런스 변수 
//		i.Check(obj);
//
//	}
//	cout << "cnt = " << MyClass::cnt << endl;
//
//}