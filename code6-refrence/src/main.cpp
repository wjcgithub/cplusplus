#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a = 500;

	int &ra = a;

	printf("sizeof(a) = %d, sizeof(ra) = %d\n", sizeof(a), sizeof(ra));
	printf("&a = %p,  &ra = %p\n", &a, &ra);
	a = 1000;
	printf("a = %d ra = %d\n", a, ra);
	ra = 2000;
	printf("a = %d ra = %d\n", a, ra);

	int b = 2000;
	ra = b;

	int &rr = ra;
	printf("a = %d ra = %d rr = %d\n", a, ra, rr);

	int &rrr = rr;
	printf("a = %d ra = %d rr = %d rrr = %d\n", a, ra, rr, rrr);

}