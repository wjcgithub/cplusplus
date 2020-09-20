#include <iostream>

int add(int a, int b)
{
	return a + b;
}

int main(int argc, char *argv[])
{
	int c = add(6, 7);
	std::cout<<c<<std::endl;
	std::cout << "Hello world!" << std::endl;
}