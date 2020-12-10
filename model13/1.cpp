#include <iostream>
using namespace std;
void putere(int n,int &d,int &p) 	
{
	p = 30;
	int div = 2;
	while(n!=1) 
	{
		if(n%div==0) 
		{
			int ptr = 0;
			while(n%div==0) 
			{
				ptr++;
				n/=div;
			}
			if(ptr<p) 
			{
				p = ptr;
				d = div;
			}
		}
		div++;
	}
}

int main() 
{
	int n,d,p;
	cin>>n;
	putere(n,d,p);
	cout<<d<<' '<<p;
	return 0;
}

