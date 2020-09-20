#include <iostream>
#include <stdlib.h>

using namespace std;

void main1() {
	//c
	// int *p = (int*)(malloc(sizeof(int)));

	int *p1 = new int;
	*p1 = 200;
	cout<<*p1<<endl;

	int *p2 = new int(100);
	cout<<*p2<<endl;

	struct Stu
	{
		string name;
		int age;
	};

	Stu *stu1 = new Stu{"lisi", 20};
	cout<<stu1->name<<stu1->age<<endl;
	
	char *str = new char[1];
	strcpy(str, "你好");
	cout<<str<<endl;

	// int it = new int[5]{0};††††
	int *it = new int[5];
	memset(it,0,sizeof(int[5]));

	//指针数组
	char **ppc = new char*[5]{NULL};
	ppc[0] = "lisi";
	ppc[1] = "zhangsan";
	while (*ppc)
	{
		cout<<*ppc++<<endl;		
	}

	int(*pint)[4] = new int[3][4]{{0}};
	for (size_t i = 0; i < sizeof(int[3][4])/sizeof(int[4]); i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cout<<pint[i][j]<<" ";
		}
		cout<<endl;
	}

	//n
	int (*tt)[3][4][5] = new int[2][3][4][5];
}

int main()
{
	int *p = new int;
	delete p;

	int *q = new int[10];
	delete []q;

	try
	{
		int *pint = new int[100];
	} catch(const std::bad_alloc e)
	{
		cout<<"new error"<<endl;
		cout<<e.what()<<endl;
		return -1;
	}

	cout<<"exception"<<endl;


	int *pi = new (std::nothrow) int[10];
	if (pi == NULL)
		return -1;

	cout<<"exception-2"<<endl;	
	
}