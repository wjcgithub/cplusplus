#include <iostream>

using namespace std;

void print(int a)
{
	printf("void print(int a)\n");
}

void print(int a, int b = 10)
{
	printf("void print(int a, int b = 10)\n");
}

int main(int argc, char *argv[]) {
	print(1, 10);
	// print(1,2);
	std::cout << "Hello Easy C++ project!" << std::endl;
}