//#include <iostream>
//
//using namespace std;
//// ��� �޼����� ����, ���� �и��ϱ�
//// ������ 90�ۼ�Ʈ �̻��� ��� ��� ����� ���Ǹ� �и���
//class Vector2 {
//private:
//	float x;
//	float y;
//
//public:
//	Vector2();
//	Vector2(float x, float y);
//
//	float GetX() const;
//	float GetY() const;
//	
//	//rhs�� Ŭ������ private ���� ��� �ٲ��� �ʰ� �״�� ���Ͽ� ����ϱ� ������ const�� ����Ͽ��� ��
//	Vector2 operator +(const Vector2 rhs) const;
//	Vector2 operator -(const Vector2 rhs) const;
//	Vector2 operator *(const float rhs) const;
//	Vector2 operator /(const float rhs) const;
//	float operator *(const Vector2 rhs) const;
//};
//
//Vector2::Vector2() : x(0), y(0) {}
//Vector2::Vector2(float x, float y) : x(x), y(y) {}
//float Vector2::GetX() const { return x; }
//float Vector2::GetY() const { return y; }
//
//Vector2 Sum(Vector2 a, Vector2 b) {
//	return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
//}
//
//
//
//Vector2 operator*(const float a, const Vector2 b) { //�����ʿ��� const ������ -> �ɹ� �޼ҵ尡 �ƴϱ� ������
//	return Vector2(a * b.GetX(), a * b.GetY()); // Ŭ������ �޼��尡 �ƴϱ⶧���� �ٸ� opeartor�� �ٸ��� ���ڸ� �ΰ� ��� �޾ƾ���.
//}
//
//
//
//
//Vector2 Vector2::operator +(const Vector2 rhs) const {
//		return Vector2(x + rhs.x, y + rhs.y); //Ŭ�����ȿ� �Ҽӵ� �޼��� �̱� �빮�� ���� get�Լ��� ������� �ʾƵ���.
//	}
//Vector2 Vector2::operator -(const Vector2 rhs) const {
//	return Vector2(x - rhs.x, y - rhs.y); 
//}
//Vector2 Vector2::operator *(const float rhs) const {
//	return Vector2(x * rhs, y * rhs); 
//}
//Vector2 Vector2::operator /(const float rhs) const {
//	return Vector2(x /rhs, y /rhs); 
//}
//float Vector2::operator *(const Vector2 rhs) const {
//	return x * rhs.x  +  y * rhs.y; 
//}
//
//
//int main()
//{
//	Vector2 a(2, 3);
//	Vector2 b(-1, 4);
//	//Vector2 c = a + b; //�̷��� �츮 desired �Ƿ� ���� �� �� ���� ������ +�� ���� �����ε��� �ʿ��� .(���� ����)
//	Vector2 c = a + b;
//	Vector2 d = a * 1.6; //1.6*a�� ���� ����(1.6).operator*(a)�� �� �� ��. �⺻���� ���� �����ڿ����� �����ε��� �Ұ�. (��ü�� �ƴϱ� ����)
//	Vector2 d2 = 1.6 * a;
//	Vector2 e = a /2;
//	float f = a * b;
//
//	cout << a.GetX() << "," << a.GetY() << endl;
//	cout << b.GetX() << "," << b.GetY() << endl;
//	cout << c.GetX() << "," << c.GetY() << endl;
//	cout << d.GetX() << "," << d.GetY() << endl;
//	cout << d2.GetX() << "," << d2.GetY() << endl;
//	cout << e.GetX() << "," << e.GetY() << endl;
//	cout << f << endl;
//}