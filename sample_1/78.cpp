//#include <iostream>
//
//using namespace std;
//
//
//class Weapon {
//public:
//	Weapon(int power) : power(power) {
//		cout << "Weapon(int)" << endl;
//	}
//
//	virtual void Use() { //virtual을 입력할 시, 포인터로 할당 되도 부모클래스 함수 사용 x
//		// -> 가상 함수
//		cout << "Weapon::Use()" << endl;
//	}
//
//protected:
//	int power;
//};
//
//class Sword : public Weapon {
//public:
//	Sword(int power) : Weapon(power) {
//		cout << "Sword(int)" << endl;
//	}
//
//	void Use() {
//		cout << "Sword::Use()" << endl;
//		Swing();
//	}	
//private:
//	void Swing() {
//		cout << "Swing sword" << endl;
//	}
//};
//
//class Magic : public Weapon {
//public:
//	Magic(int power, int manaCost) : Weapon(power), manaCost(manaCost) {
//		cout << "Magic(int,int)" << endl;
//	}
//
//	void Use() {
//		cout << "Magic::Use()" << endl;
//		Cast();
//	}
//private:
//	int manaCost;
//
//	void Cast() {
//		cout << "Cast magic." << endl;
//	}
//
//};
//
//int main()
//{
//	Sword mySword(10);
//	Magic myMagic(15, 7);
//	
//	mySword.Use();
//	myMagic.Use();
//
//	Weapon* currentWeapon; //부모 클래스로 타입 할당
//
//	currentWeapon = &mySword;
//
//	currentWeapon->Use(); //mySword 객체포인터라 한들, 부모클래스 use에 우선순위가 있지만
//	//부모클래스의 use가 virtual인 경우, 자식 클래스 use 함수를 사용함
//	// 실행하는 시점에서의 Use()를 사용하도록 바뀜 
//	// virtual 이라고 해도 직접적으로 명시하고 weapon의 use함수를 사용할 수 있음
//	currentWeapon = &myMagic;
//	currentWeapon->Use();
//}