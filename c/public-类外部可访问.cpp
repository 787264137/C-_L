//public:类外部可以直接通过对象访问，不需要通过友员函数来访问
#include<iostream>

using namespace std;

class Line{
	public:
		double width;
		void setLength(double len);
		double getLength(void);
};

void Line::setLength(double len){
	width = len;
}

double Line::getLength(void){
	return width;
}

int main(){
	Line line;
	//直接通过对象访问类的共有成员变量
	line.width = 10;
	cout << "通过对象访问类的公有成员变量" << line.width << endl;

	//通过友员函数访问
	line.setLength(10);
	cout << "通过友员函数访问公有成员变量" << line.getLength() << endl;
	return 0;
}
