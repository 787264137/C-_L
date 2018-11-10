# include<iostream>

using namespace std;

class Box{
    public:
        double length;
        double breadth;
        double heighth;
        
        //类的成员函数的声明
        double getVolume(void);
		void setLength(double len);
		void setBreadth(double bre);
		void setHeighth(double hei);
};

//类成员函数的定义,::是范围解析运算符
double Box::getVolume(void){
	return length * breadth * heighth;
}

void Box::setLength(double len){
	length = len;
}

void Box::setBreadth(double bre){
	breadth = bre;
}

void Box::setHeighth(double hei){
	heighth = hei;
}

int main(){
	Box box1;
	box1.setLength(1.3);
	box1.setBreadth(2.4);
	box1.setHeighth(3.5);
	double volume;
	volume = box1.getVolume();
	cout<<volume<<endl;
}
