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
//class Message {
//public:
//	Message(int sendTime, string sendName) {
//		this->sendTime = sendTime;
//		this->sendName = sendName;
//	}
//
//	int GetSendTime() const { return sendTime; }
//	string GetSendName() const { return sendName; }
//
//	virtual string GetContent() const {
//		return "";
//	}
//
//private:
//	string sendName;
//	int sendTime;
//};
//
//class TextMessage : public Message {
//public:
//	TextMessage(int sendTime, string sendName, string text): Message(sendTime, sendName) {
//		this->text = text;
//	}
//	string GetText() const { return text; }
//	string GetContent() const { return text; }
//private:
//	string text;
//};
//
//class ImageMessage : public Message{
//public:
//	ImageMessage(int sendTime, string sendName, Image* image):Message(sendTime, sendName) {
//		this->image = image;
//	}
//	Image* GetImage() const { return image; }
//
//	string GetContent() const { return (string)*image; }
//
//private:
//	Image* image; //���� class image��ü�� �����ͷ� ���� (�迭�� �Ȱ��� ����)
//};
//
//void printMessage(const Message &m) //2.�����ͷ� ���ڸ� �޾Ƶ� �ǰ�, ���۷����� �޾Ƶ� ��
//									// �� ��� ��� ȿ����
//{
//	cout << "���� �ð� : " << m.GetSendTime() << endl;
//	cout << "���� ��� : " << m.GetSendName() << endl;
//	cout << "�� �� : " << m.GetContent() << endl;
//	cout << endl;
//}
//
//
//int main() {
//	// �ε� : "�ȳ�"
//	//�ε� : "������ ����"
//	Image* p_dogImage = new Image(); //�����ڰ� ������ �̷� ��������, ���� �Ҵ�
//
//	Message* messages[] = {
//
//		new TextMessage(10,"�ε�","�ȳ�"),
//		new TextMessage(11, "�ε�", "�ȳ�"),
//		new TextMessage(12, "�ε�", "�ȳ�"),
//		new ImageMessage(20, "�ε�", p_dogImage),
//		new ImageMessage(21, "�ε�", p_dogImage)
//
//	};
//		//pointer�� �ϴ� ������ �����;��� �� ���� ������ �����Ϳ�
//	// class�� ��� ������ ��ƾ��ϱ⶧���� ������ ũ�Ⱑ ������ �� ������,
//	// �����ͷ� ���� ��� �׳� �ּҰ��� ������ �ٸ� �������� �����͸� �Ҵ��� �� ����.
//
//	for (Message* m : messages) {
//		printMessage(*m);
//	}
//
//
//	TextMessage* hello = new TextMessage(10, "�ε�", "�ȳ�");
//	ImageMessage* dog = new ImageMessage(20, "�ε�", p_dogImage);
//	printMessage(*hello); //1.printMessage�� ������ �� ���ڸ� (Message *m)���� ����
//	// message class�� printmessage�� virtual �Լ��̱⶧���� �ڽ� Ŭ������ �Լ��� �̿�
//	printMessage(*dog);
//
//
//
//	delete hello;
//	delete dog;
//	delete p_dogImage;
//}