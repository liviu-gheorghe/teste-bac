#include <iostream>
using namespace std;


void paritate(int n,int &nr) 
{
	nr = 0;
	for(int d=1;d*d<=n;d++)
	{
		if(n%d==0)
		{
			if(n%2==d%2) nr++;
			if(n/d>d && n%2==n/d%2) nr++;
		}
	}
}

int main() 
{
	return 0;
}
