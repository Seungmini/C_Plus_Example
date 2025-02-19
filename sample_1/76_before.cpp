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
//	Image* image; //위의 class image자체를 포인터로 받음 (배열과 똑같은 원리)
//	int sendTime;
//};
//int main() {
//	// 두들 : "안녕"
//	//두들 : "강아지 사진"
//	Image* p_dogImage = new Image(); //생성자가 없으니 이런 형식으로, 동적 할당
//	TextMessage* hello = new TextMessage(10, "두들", "안녕");
//	ImageMessage* dog = new ImageMessage(20, "두들", p_dogImage);
//
//	cout << "보낸 시간 : " << hello->GetSendTime() << endl;
//	cout << "보낸 사람 : " << hello->GetSendName() << endl;
//	cout << "내 용 : " << hello->GetText() << endl;
//	cout << endl;
//
//	cout << "보낸 시간 : " << dog->GetSendTime() << endl;
//	cout << "보낸 사람 : " << dog->GetSendName() << endl;
//	cout << "내 용 : " << (string)*(dog->GetImage()) << endl; // 객체 주솟값을 받은 뒤
//	// *를 통해 객체화 되고, 왼쪽에 (string)형변환을 실시하여 "사진"출력
//	cout << endl;
//
//	delete hello;
//	delete dog;
//	delete p_dogImage;
//}