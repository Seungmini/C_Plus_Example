////static : ���� <-> ����
//
//#include <iostream>
//
//using namespace std;
//
//// 0 - 1 float R G B
// // int idCounter = 1;
//
//// static ����, �Լ��� ��������ν� ���� ����, �Լ��� ����ϴ°��� �ִ��� ������ 
//class Color {
//public:
//	Color() : r(0), g(0), b(0), id(idCounter++) {
//		//id = idCounter; //������ id �ο����� 
//		//idCounter++;
//		//id = idCounter++; // +�� ��ó��
//	}
//	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++){}
//
//	float GetR() { return r; }
//	float GetG() { return g; }
//	float GetB() { return b; }
//	int GedId() { return id; }
//	static Color MixColors(Color a, Color b) { //static ���� ���!
//		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
//	}
//	
//	
//	static int idCounter; //�������� ���� ������ � Ŭ������ ������ ������ ���� ��
//private:
//	float r;
//	float g;
//	float b;
//
//	int id;
//
//};
//
//int Color::idCounter = 1; //class �� ������ �� ���� idcounter�� 1�� �����ϴ� ���� �ƴϱ� ������
////������ ���� class �ȿ��� static int ���� �� , �ؿ� ������ �ʱⰪ�� ������ �־�� ��.
//
////������ class �����鿡 ���� ��ȣ�� �ű�� ���� ��, 
//int main() {
//	Color blue(0, 0, 1);
//	Color red(1, 0, 0);
//
//	Color purple = Color::MixColors(blue, red);
//
//	cout << "r =" << purple.GetR() << " g =" << purple.GetG() << " b =" << purple.GetB() << endl;
//	cout << "blue.GetId() = " << blue.GedId() << endl;
//	cout << "red.GetId() = " << red.GedId() << endl;
//	cout << "purple.GetId() = " << purple.GedId() << endl;
//
//}