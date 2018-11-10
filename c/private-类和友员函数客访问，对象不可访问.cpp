#include<iostream>

using namespace std;

class Line{
	private:
		double width;
	public:
		void setWidth(double w);
		double getWidth(void);
};

void Line::setWidth(double w){
	width = w;
}

double Line::getWidth(void){
	return width;
}

int main(){
	Line line;
	cout << "不能通过对像来访问私有成员变量 line.width---" <<endl;
	

	line.setWidth(10);

	cout << "通过友员函数访问的结果" << line.getWidth() << endl;
	return 0;
}
