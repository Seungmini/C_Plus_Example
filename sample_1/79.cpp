////메시지 : 텍스트, 이미지 주고받기
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Image {
//public:
//	operator string() {
//		return "사진";
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
//	Image* image; //위의 class image자체를 포인터로 받음 (배열과 똑같은 원리)
//};
//
//void printMessage(const Message &m) //2.포인터로 인자를 받아도 되고, 레퍼런스로 받아도 됨
//									// 두 방식 모두 효율적
//{
//	cout << "보낸 시간 : " << m.GetSendTime() << endl;
//	cout << "보낸 사람 : " << m.GetSendName() << endl;
//	cout << "내 용 : " << m.GetContent() << endl;
//	cout << endl;
//}
//
//
//int main() {
//	// 두들 : "안녕"
//	//두들 : "강아지 사진"
//	Image* p_dogImage = new Image(); //생성자가 없으니 이런 형식으로, 동적 할당
//
//	Message* messages[] = {
//
//		new TextMessage(10,"두들","안녕"),
//		new TextMessage(11, "두들", "안녕"),
//		new TextMessage(12, "두들", "안녕"),
//		new ImageMessage(20, "두들", p_dogImage),
//		new ImageMessage(21, "두들", p_dogImage)
//
//	};
//		//pointer로 하는 이유는 포인터없이 할 때는 유한한 데이터에
//	// class의 모든 정보를 담아야하기때문에 데이터 크기가 부족할 수 있지만,
//	// 포인터로 담을 경우 그냥 주소값만 가지고 다른 공간에서 데이터를 할당할 수 있음.
//
//	for (Message* m : messages) {
//		printMessage(*m);
//	}
//
//
//	TextMessage* hello = new TextMessage(10, "두들", "안녕");
//	ImageMessage* dog = new ImageMessage(20, "두들", p_dogImage);
//	printMessage(*hello); //1.printMessage를 선언할 때 인자를 (Message *m)으로 받음
//	// message class의 printmessage는 virtual 함수이기때문에 자식 클래스의 함수를 이용
//	printMessage(*dog);
//
//
//
//	delete hello;
//	delete dog;
//	delete p_dogImage;
//}