//#include <iostream>
//
//using namespace std;
//
//class GameWindow {
//
//private:
//	int width;
//	int height;
//public:
//	GameWindow();
//	GameWindow(const int, const int);
//
//	int GetWidth() const;
//	int GetHeight() const ;
//
//	void ResizeWindow(const int w, const int h);
//
//};
//
//GameWindow::GameWindow() : width(800), height(600) {}
//GameWindow::GameWindow(const int w, const int h) {
//	ResizeWindow(w, h); //반복적으로 코드를 쓰지 않고, 함수를 호출함.
//
//}
//
//int GameWindow::GetWidth() const { return width; }
//int GameWindow::GetHeight() const { return height; }
////static void GameWindow::ResizeWindow(int w, int h) {
////	width = w;
////	hegith = h;
////
////}
//void GameWindow::ResizeWindow(const int w, const int h) {
//	if (w < 800) width = 800;
//	else width = w;
//	if (h < 600) height = 600;
//	else height = h;
//}
//
//int main() {
//	GameWindow mainWindow;
//	mainWindow.ResizeWindow(1366, 768);
//	cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;
//
//
//}