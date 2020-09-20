#include <iostream>
#include <stdlib.h>

using namespace std;

inline int sqr(int i)
{
	return i*i;
}

int main()
{
	int num = 5;
	int ret = sqr(num);
	cout<<"ret: "<<ret<<endl;
}