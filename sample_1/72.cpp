//// ������(�Ͻ���) ����ȯ
//// ����� ����ȯ
//
//#include <iostream>
//#include <string>
//#include <string.h>
//using namespace std;
//
//
//class Item {
//public:
//	//�����ڿ����� explicit �� ���ؼ� (int) , (string)�� ���ؼ��� �����ǰ� �� �� �� ����
//	Item(int num) : num(num) { //��ȯ ������
//		cout << "Item(int)" << endl;
//	}
//	Item(string name) : name(name) {
//		cout << "Item(string)" << endl;
//	}
//	Item(int num, string name) : num(num), name(name) {
//		cout << "Item (int ,string): " << endl;
//	}
//
//	void print() {
//		cout << num << " : " << name << endl;
//	}
//
//	operator int() const { //int���� ����ȯ ������ ������ ������ �����ε� ����� ���°� �ٸ� ����
//		return num;
//	}
//	operator string() const {
//		return to_string(num) + " : " + name;
//		
//	}
//
//	//������ ��ȯ�� �ƿ� ���� ���ؼ� explicit�� operator ���ʿ� ÷��
//	//explicit operator int() const { //int���� ����ȯ ������ ������ ������ �����ε� ����� ���°� �ٸ� ����
//	//	return num;
//	//}
//	//explicit operator string() const {
//	//	return to_string(num) + " : " + name;
//
//	//}
//private:
//	int num;
//	string name;
//};
//
//void println(string s) {
//	cout << s << endl;
//}
//
//void println(int n) {
//	cout << n << endl;
//}
//int main() {
//	Item i1 = Item(1);
//	Item i2(2);
//	Item i3 = 3;
//	i3 = 3; //?????? //������ ��ȯ ȣ��
//	Item i4 = (Item)4; // int 4�� Item���� ��ȯ�����ִ� ������ ���� ���� �����ڰ� �ϰ� �־��� //����� ��ȯ ȣ��
//
//	Item i5 = string("stone");
//	Item i6(1, "grass");
//	Item i7 = { 2, "dirt" };
//	Item i8{ 3,"wood" };
//
//	int itemNum1 = (int)i8;
//	int itemNum2 = i7;
//	cout << itemNum1 << endl;
//	cout << itemNum2 << endl;
//
//
//	cout << (string)(i8) << endl;
//
//	println((string)(i8));
//	println((int)i8); //println�� ������ ��, �Ű������� string���� �޴´ٰ� �����߱⶧���� �˾Ƽ� ���������� i8�� string���� ��ȯ�� -> opeartor string() ����
//	//������ �����ε����� �پ��� println(int) println(string)�� ����� ������ �׳� i8�� �Է��� ��� ������ �߻���. -> ��ȯ���� ���� �־��־����
//
//
//}