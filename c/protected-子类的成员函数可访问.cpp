#include<iostream>

using namespace std;

class Box{
	protected:
		double width;
};

class smallBox:Box{
	public:
		double getWidth(void);
		void setWidth(double w);
};

double smallBox::getWidth(){
	return width;
}

//caution 这里类的参数不能与类的变量名称相同
void smallBox::setWidth(double w){
	width = w;
}

int main(){
	smallBox box;
	box.setWidth(1.0);
	cout << box.getWidth() << endl;

	return 0;
}

