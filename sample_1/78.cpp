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
//	virtual void Use() { //virtual�� �Է��� ��, �����ͷ� �Ҵ� �ǵ� �θ�Ŭ���� �Լ� ��� x
//		// -> ���� �Լ�
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
//	Weapon* currentWeapon; //�θ� Ŭ������ Ÿ�� �Ҵ�
//
//	currentWeapon = &mySword;
//
//	currentWeapon->Use(); //mySword ��ü�����Ͷ� �ѵ�, �θ�Ŭ���� use�� �켱������ ������
//	//�θ�Ŭ������ use�� virtual�� ���, �ڽ� Ŭ���� use �Լ��� �����
//	// �����ϴ� ���������� Use()�� ����ϵ��� �ٲ� 
//	// virtual �̶�� �ص� ���������� ����ϰ� weapon�� use�Լ��� ����� �� ����
//	currentWeapon = &myMagic;
//	currentWeapon->Use();
//}