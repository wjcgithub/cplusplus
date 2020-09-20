#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int* p;
	int*& r = p;

	//引用的引用
	int a;
	int& ra = a;
	int& rra = ra;

	//引用的指针  error
	// int&* rpa = &ra;


	int q, w, e;
	//指针数组
	int * parr[] = {&q, &w, &e};

	//数组指针
	int arr1[] = {q, w, e};
	int (*parr1)[3] = &arr1;

	//数组引用   error
	// int& rarr[] = {q, w, e}

	//引用数组
	int arr[] = {1, 2, 3};
	int (&rarr)[3] = arr;

	//const引用
	const int aa = 100;
	const int *paa = &aa;

	const int &raa = aa; 

	//
	int bb=9;
	const double  & rbb = bb;

	//
	const int & cc = bb+6;

	std::cout << "Hello refrence advance!" << std::endl;
}