//#include <iostream>
//
//using namespace std;
//
////const 의 쓰임새
////1. 매개변수의 상수화 (모든 함수에서 쓸 수 있음) 
////2. 메서드(클래스에 포함되어 있는 함수)의 상수화 (멤버 메서드에서 사용 가능)
//
//
//// 메서드의 상수화 -> 메서드 안에서 클래스의 private변수를 접근하지 못하도록 막는 것 
//class account {
//
//private:
//	int money;
//
//public:
//	account() : money(0) {}
//	account(int money) : money(money) {
//		cout << "현재 잔고에 " << money << "원이 있습니다!" << endl;
//	}
//	
//	void deposit(const int d) { //매개변수의 상수화! 메서드 안에서 매개변수 변경 x 
//		//d = 300;
//		money += d;
//		cout << d << "원을 예금했다!" << endl;
//	}
//	void draw(const int d) {
//		if (money >= d) {
//			money -= d;
//			cout << d << "원을 인출했다!" << endl;
//		}
//		else {
//			cout << "돈을 인출할 수 없습니다!" << endl;
//		}
//	}
//
//	int viewmoney() const{ //메서드의 상수화! 맨 왼쪽이 아닌 오른쪽에 붙임
//		//money++;
//		return money;
//	}
//
//	//const int viewmoney()의 의미는 리턴값 자체가 상수라는 것 거의 의미가 없지만 
//	//다른 경우에 사용하는 상황있으므로 참고만 할 것. 
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
//	cout << "현재 잔고에 "<<doodle.viewmoney()<<"원이 남았습니다!" << endl;
//
//
//}