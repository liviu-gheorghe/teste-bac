/**
#include <iostream>
using namespace std;
**/
int suma(int n) 
{
	int s = 0;
	int d = 2;
	while(n!=1)
	{
		if(n%d==0) 
		{
			s+=d;
			while(n%d==0) n/=d;
		}
		d++;
	} 
	return s;
}
/**
int main()
{
	cout<<suma(128);
	return 0;
}
**/