#include <iostream>
using namespace std;
void divPrimMax(int n,int &p) 
{
	p = -1;
	int d = 2;
	while(n!=1) 
	{
		if(n%d==0) 
		{
			p = d>p?d:p;
			while(n%d==0) n/=d;
		}
	}
}
int main() 
{

	return 0;
}
