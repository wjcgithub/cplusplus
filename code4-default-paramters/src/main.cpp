#include <iostream>
#include <time.h>

using namespace std;

void weatherCast(string w="pm2.5")
{
	time_t t = time(0);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "%Y/%m/%d %X %A ", localtime(&t) );
	cout<<tmp<<"today is weather "<<w<<endl;
}

int volume(int l, int w, int h=5)
{
	return l*w*h;
}


int main(int argc, char *argv[]) {
	weatherCast();
	weatherCast("rainy");
	weatherCast("sunshine");
	weatherCast("windy");
	weatherCast("snowy");
	weatherCast("flogy");
	std::cout << "===========" << std::endl;

	cout<<volume(1,2)<<endl;
}