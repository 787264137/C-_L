//C++中指针与引用的区别：
//1、不存在空引用，引用必须连接到一块合法内存。
//2、一旦引用被初始化为一个对象，就不能指向另一个对象。指针可以在任何时候指向另一个对象。
//3、引用必须在创建时初始化。指针可以在任何时间被初始化。

#include<iostream>

using namespace std;

//C++创建引用
int main(){
	int i;
	double d;
	int & r = i;
	double & s = d;

	i = 1;
	cout << "i = " << i << endl;
	cout << "r = " << r << endl;

	d = 10.7;
	cout << "d = " << d << endl;
	cout << "s = " << s << endl;
	return 0;
}
