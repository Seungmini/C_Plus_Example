//#include <iostream>
//
//using namespace std;
//
////Ŭ���� ���� �� (����): ���̽� -> ���� -> �� -> �� ����
////�θ� Ŭ������ private -> �θ� Ŭ���� �ڽ� -> �ڽ� Ŭ���� private -> �ڽ� Ŭ���� �ڽ�
////�����ڴ� �ɹ����� ��� �ʱ�ȭ �� �� �����ǹǷ� ���� ������ ���� 
//class Ice {
//public:
//	Ice() { cout << "Ice()" << endl; }
//	~Ice() { cout << "~Ice()" << endl; }
//};
//
//class Pat {
//public:
//	; Pat() { cout << "Pat()" << endl; }
//	~Pat() { cout << "~Pat()" << endl; }
//};
//
//class Bingsoo {
//public:
//	Bingsoo() {
//		cout << "Bingsoo()" << endl;
//		ice = new Ice;
//	}
//	virtual ~Bingsoo() { //���� �Ҹ���
//		cout << "~Bingsoo()" << endl;
//		delete ice;
//	}
//
//private:
//	Ice *ice; //Ice ��ü ��ü�� ������� �ƴ� �ּڰ��� ���� ������� ����
//	//Ice�����ڴ� ȣ���� �ȵȻ��¿��� Bingsoo�����ڰ� ȣ��ǰ� 
//	//�׾��� ice�� ���� �Ҵ��
//};
//
//class PatBingsoo : public Bingsoo {
//public:
//	PatBingsoo() {
//		cout << "PatBingsoo()" << endl;
//		pat = new Pat;
//	}
//	~PatBingsoo() {
//		cout << "~PatBingsoo()" << endl;
//		delete pat;
//	}
//
//private:
//	Pat *pat;
//};
//int main() {
//	//PatBingsoo* p = new PatBingsoo;
//	Bingsoo* q = new PatBingsoo; 
//	delete q; //q �ڽ��� �ڷ����� Bingsoo�� �������� delete�ϱ� ������
//	//�����Ϸ��� class PatBingsoo�� ������� �ʰ� �ٷ� Bingsoo �Ҹ��ڷ� �̵�
//	//���� bingsoo �Ҹ��ڿ� virtual�� ���� �� 
//	//bingsoo- > Ice -> patbinsoo -> pat������ ����
//	//patbingsoo -> pat -> bingsoo -> ice������ �Ҹ�
//
//}