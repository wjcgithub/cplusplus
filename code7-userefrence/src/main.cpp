#include <iostream>

using namespace std;

void swap(int *pa, int *pb)
{
	printf("指针的交换\n");
	// int tmp = *pa;
	// *pa = *pb;
	// *pb = tmp;

	*pa ^= *pb;
	*pb ^= *pa;
	*pa ^= *pb;
}

void swap(int &ra, int &rb)
{
	printf("引用\n");
	ra ^= rb;
	rb ^= ra;
	ra ^= rb;
}

void swap(char **p, char **q)
{
	printf("指针的指针\n");
	char *t = *p;
	*p = *q;
	*q = t;
}

//使用引用，可以达到平级内解决问题，不用开辟多余的空间
//引用的本质就是对指针的再次包装
void swap(char* &p, char* &q)
{
	printf("指针的引用\n");
	char *t = p;
	p = q;
	q = t;
}

int main(int argc, char *argv[]) {
	int a = 5;
	int b = 3;
	swap(a, b);
	printf("a = %d b = %d \n", a, b);

	char *p = "china";
	char *q = "america";
	swap(&p, &q);
	cout<<"p = "<<p<<" q = "<<q<<endl;

	char *t = "china";
	char *v = "america";
	swap(t, v);
	cout<<"t = "<<t<<" v = "<<v<<endl;
}