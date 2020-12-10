/**
#include <iostream>
using namespace std;
**/
void prodprim(int n,int &p)
{
	p = 1;
	int d = 2;
	while(n!=1) 
	{
		if(n%d==0)
		{
			p*=d;
			while(n%d==0) n/=d;
		}
		d++;
	}
}
/**
int main()
{
	return 0;
}
**/