#include <iostream>
#include <cstring>
using namespace std;
int circular(int a,int b)
{
	int nr_cifre = 0;
	int p=1;
	int c = a;
	while(a != 0)
	{
		nr_cifre++;
		a/=10;
		p*=10;
	}
	p/=10;
	for(int i=1;i<=nr_cifre;i++)
	{
		if(c==b) return i-1;
		c = (c%10)*p + c/10;
	}
	return -1;
}
int main(int argc,char* argv[])
{
	//cout<<circular(atoi(argv[1]),atoi(argv[2]));
	return 0;
}
//g++ 1.cpp -o 1 && ./1 120362 621203