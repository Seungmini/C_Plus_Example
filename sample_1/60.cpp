//#include <iostream>
//
//using namespace std;
//
////const �� ���ӻ�
////1. �Ű������� ���ȭ (��� �Լ����� �� �� ����) 
////2. �޼���(Ŭ������ ���ԵǾ� �ִ� �Լ�)�� ���ȭ (��� �޼��忡�� ��� ����)
//
//
//// �޼����� ���ȭ -> �޼��� �ȿ��� Ŭ������ private������ �������� ���ϵ��� ���� �� 
//class account {
//
//private:
//	int money;
//
//public:
//	account() : money(0) {}
//	account(int money) : money(money) {
//		cout << "���� �ܰ� " << money << "���� �ֽ��ϴ�!" << endl;
//	}
//	
//	void deposit(const int d) { //�Ű������� ���ȭ! �޼��� �ȿ��� �Ű����� ���� x 
//		//d = 300;
//		money += d;
//		cout << d << "���� �����ߴ�!" << endl;
//	}
//	void draw(const int d) {
//		if (money >= d) {
//			money -= d;
//			cout << d << "���� �����ߴ�!" << endl;
//		}
//		else {
//			cout << "���� ������ �� �����ϴ�!" << endl;
//		}
//	}
//
//	int viewmoney() const{ //�޼����� ���ȭ! �� ������ �ƴ� �����ʿ� ����
//		//money++;
//		return money;
//	}
//
//	//const int viewmoney()�� �ǹ̴� ���ϰ� ��ü�� ������ �� ���� �ǹ̰� ������ 
//	//�ٸ� ��쿡 ����ϴ� ��Ȳ�����Ƿ� ���� �� ��. 
//};
//
//
//
//int main() {
//	account doodle(100);
//
//	doodle.deposit(100);
//	doodle.draw(150);
//	
//	cout << "���� �ܰ� "<<doodle.viewmoney()<<"���� ���ҽ��ϴ�!" << endl;
//
//
//}