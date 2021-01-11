//#include <iostream>
//
//using namespace std;
//
////Upcasting : 자식 클래스 포인터 -> 부모 클래스 포인터로 형변환 (묵시적)
//// ex) Base *b = new Derived;
//
//class Animal {
//public:
//	float xpos = 1;
//	float ypos = 2;
//
//private:
//
//};
//
//class FlyingAnimal : public Animal {
//public:
//	float zpos = 3;
//};
//
////void printAnimals(Animal a[], int n) {//Animal *a로 인자 받아도 됨(배열이라)
////	for (int i = 0; i < n; i++) {
////		cout << "(" << a[i].xpos << ", " << a[i].ypos << ")" << endl;
////	}
////}
//
//void printAnimals(Animal **a, int n) {
//	for (int i = 0; i < n; i++) {
//		cout << "(" << a[i]->xpos << ", " << a[i]->ypos << ")" << endl;
//	}
//}
//
//
//int main() {
//	Animal** a = new Animal*[10];
//	for (int i = 0; i < 10; i++) {
//		a[i] = new FlyingAnimal;
//	}
//
//	printAnimals(a,10);
//	
//	for (int i = 0; i < 10; i++) {
//		delete a[i];
//	}
//	
//	delete[] a;
//
//}