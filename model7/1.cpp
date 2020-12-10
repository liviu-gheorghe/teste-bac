/**
#include <iostream>
using namespace std;
**/
int putere(int n,int p)
{
	int d = 2;
	while(n!=1) 
	{
		if(n%d==0)
		{
			int exp = 0;
			while(n%d==0) {exp++;n/=d;}
			if(d==p) return exp;
		}
		d++;
	}
	return -1;
} 
/**
int main() 
{
	return 0;
}
**/