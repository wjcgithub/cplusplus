#include <iostream>

using namespace std;

//static_cast       静态转换，对于隐式类型可以转化的，即可用此类型。 只能应用与指针和引用，不能应用与变量
//reinterpret_cast  重新解释转换，对于无隐士的类型转化，static_cast已不可用
//const_cast        脱常


int main1(int argc, char *argv[]) {

	float a = 5.6;
	int b = 5;

	b = static_cast<int>(a);
	a = static_cast<float>(b);


	void *p;
	int *q;
	p = q;
	q = static_cast<int*>(p);


	int x = 10;
	int y = 3;
	float z = x/y;
	float o = static_cast<float>(x)/y;

	std::cout<<z<<std::endl;
	std::cout<<o<<std::endl;
	std::cout << "Hello Easy C++ project!" << std::endl;

	return 1;
}

int main2()
{
	char *p;
	int *q;
	p = reinterpret_cast<char*>(q);

	int a[5] = {1,2,3,4,5};
	// int *r = (int*)(int(a)+1);
	// int *ip = reinterpret_cast<int*>((reinterpret_cast<int>(a)+1));

	std::cout << std::hex << *p << std::endl;

	return 1;
}


void func(const int & v)
{
	cout<<"v: "<<v<<endl;
}

void func2(int & num)
{
	cout<<"num: "<<num<<endl;
}

int main5()
{
	string p = "hello!";
	char str[] = {"hello"};
	std::cout << p << std::endl;
	std::cout << str[2] << std::endl;


	const int b = 99;
	func(b);
	func(b+10);

	// func2(a);   error
	func2(const_cast<int&>(b));


	const int a = 99;

	int & ra = const_cast<int&>(a);
	ra = 200;
	cout<<"a = "<<a<<" ra = "<<ra<<endl;
	cout<<"&a = "<<&a<<" &ra = "<<&ra<<endl;

	int * pi = const_cast<int*>(&a);
	*pi = 200;
	cout<<"a = "<<a<<" *pi = "<<*pi<<endl;
	cout<<"&a = "<<&a<<" pi = "<<pi<<endl;

	// 只能应用与指针和引用，不能应用与变量
	// int qq = 10;
	// double tt = const_cast<double>(qq);

	struct A
	{
		int data;
	};

	const A ad = {10};
	A * pa = const_cast<A *>(&ad);
	pa->data = 200;
	cout<<pa->data<<endl;

	return 1;
}

int main()
{
	int a = 9;
	int b = 5;
	int c = a + b;
	cout<<c<<endl;
}