/*
#include <iostream>
#include <cstring>
using namespace std;
*/
void fii(int n) 
{
	for(int b=n;b>=1;b--)
	if(n%b==0&&b>n/b)
	{
		int a = n/b;
		printf("(%d %d) ",b,a);
	}
}
/*
int main(int argc,char *argv[]) {
	int n = atoi(argv[1]);
	fii(n);
	return 0;
}
*/