////�޽��� : �ؽ�Ʈ, �̹��� �ְ�ޱ�
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Image {
//public:
//	operator string() {
//		return "����";
//	}
//};
//
//class TextMessage {
//public:
//	TextMessage(int sendTime, string sendName, string text) {
//		this->sendTime = sendTime;
//		this->sendName = sendName;
//		this->text = text;
//	}
//
//	int GetSendTime() const { return sendTime; }
//	string GetSendName() const { return sendName; }
//	string GetText() const { return text; }
//
//private:
//	string sendName;
//	string text;
//	int sendTime;
//	
//};
//
//class ImageMessage {
//public:
//	ImageMessage(int sendTime, string sendName, Image* image) {
//		this->sendTime = sendTime;
//		this->sendName = sendName;
//		this->image = image;
//	}
//
//	int GetSendTime() const { return sendTime; }
//	string GetSendName() const { return sendName; }
//	Image* GetImage() const { return image; }
//private:
//	string sendName;
//	Image* image; //���� class image��ü�� �����ͷ� ���� (�迭�� �Ȱ��� ����)
//	int sendTime;
//};
//int main() {
//	// �ε� : "�ȳ�"
//	//�ε� : "������ ����"
//	Image* p_dogImage = new Image(); //�����ڰ� ������ �̷� ��������, ���� �Ҵ�
//	TextMessage* hello = new TextMessage(10, "�ε�", "�ȳ�");
//	ImageMessage* dog = new ImageMessage(20, "�ε�", p_dogImage);
//
//	cout << "���� �ð� : " << hello->GetSendTime() << endl;
//	cout << "���� ��� : " << hello->GetSendName() << endl;
//	cout << "�� �� : " << hello->GetText() << endl;
//	cout << endl;
//
//	cout << "���� �ð� : " << dog->GetSendTime() << endl;
//	cout << "���� ��� : " << dog->GetSendName() << endl;
//	cout << "�� �� : " << (string)*(dog->GetImage()) << endl; // ��ü �ּڰ��� ���� ��
//	// *�� ���� ��üȭ �ǰ�, ���ʿ� (string)����ȯ�� �ǽ��Ͽ� "����"���
//	cout << endl;
//
//	delete hello;
//	delete dog;
//	delete p_dogImage;
//}