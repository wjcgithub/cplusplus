#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "Hello Easy C++ project!" << std::endl;
	std::cout << "Hello Easy C++ project!" << std::endl;
	std::cout << "Hello Easy C++ project!" << std::endl;

	char name[10];
	int a;
	a=20;
	std::cin>>a;
	// std::cin>>name;

	int b;
	char c1;
	scanf("%d %c", &b, &c1);

	printf("a=%d, c1=%c \n",b,c1);

	printf("name : %d", a);

	// extern "C" {
	// 	printf("%s", "hello world");
	// }
	// printf("name : %s", name);
}