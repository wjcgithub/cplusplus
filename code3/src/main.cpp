#include <iostream>

using namespace std;

struct Complex
{
	float real;
	float image;
};

Complex operator+(Complex a, Complex b)
{
	Complex c;
	c.real = a.real + b.real;
	c.image = a.image + b.image;
	return c;
}

int main(int argc, char *argv[]) {
	int a,b;
	int c = a+b;

	Complex aa = {1,2}, bb = {2,3};
	// Complex cc = aa+bb;
	Complex cc = operator+(aa,bb);

	cout<<"cc = "<<"("<<cc.real<<","<<cc.image<<")"<<endl;

	std::cout << "Hello Easy C++ project!" << std::endl;
}