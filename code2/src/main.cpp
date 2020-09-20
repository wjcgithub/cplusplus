#include <iostream>
#include "str.h"
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
	std::cout << "Hello Easy C++ project!" << std::endl;
	char *sss=(char *)"china";
	int n = mystrlen(sss);
	cout<<n<<endl;

	return 0;
}